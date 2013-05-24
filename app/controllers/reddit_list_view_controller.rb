class RedditListViewController < UITableViewController
  extend IB

  def viewDidLoad
    super

    getRedditData()
  end

  def getRedditData(subreddit = "all")
    q = "http://www.reddit.com/r/#{subreddit}.json"
    BW::HTTP.get(q) do |response|
      #p response.body.to_str
      if response.ok?
        json = BW::JSON.parse(response.body.to_str)
        p json['data']['children']
      else
        App.alert("Something went wrong!")
      end
    end
  end

end