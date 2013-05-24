class RedditListViewController < UITableViewController
  extend IB

  def viewDidLoad
    super

    @articles = []

    # set table view's delegate to view controller
    self.view.delegate = self
    # set table view's data source to view controller    
    self.view.dataSource = self

    getRedditData()
  end

  def tableView(tableView, cellForRowAtIndexPath:indexPath)
    article = @articles[indexPath.row]
    reuseIdentifier = "redmonkeyCellIdentifier"
    # either cell or nil
    cell = self.view.dequeueReusableCellWithIdentifier(reuseIdentifier)
    cell ||= UITableViewCell.alloc.initWithStyle(UITableViewCellStyleDefault, reuseIdentifier: reuseIdentifier)
    cell.textLabel.text = article['data']['title']
    cell
  end

  def tableView(tableView, numberOfRowsInSection:section)
    @articles.count
  end

  def getRedditData(subreddit = "all")
    q = "http://www.reddit.com/r/#{subreddit}.json"
    BW::HTTP.get(q) do |response|
      #p response.body.to_str
      if response.ok?
        json = BW::JSON.parse(response.body.to_str)
        @articles = json['data']['children']
        self.view.reloadData
      else
        App.alert("Something went wrong!")
      end
    end
  end

end