class RedditArticleWebViewController < UIViewController
  extend IB

  outlet :webView

  attr_accessor :url

  def viewDidLoad
    super

    self.webView.loadRequest(NSURLRequest.requestWithURL(NSURL.URLWithString(self.url)))
  end
end