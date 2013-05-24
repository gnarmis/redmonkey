class AppDelegate
  def application(application, didFinishLaunchingWithOptions:launchOptions)
    # connect Storyboard
    # get window of app
    @window = UIWindow.alloc.initWithFrame(UIScreen.mainScreen.bounds)
    # get storyboard
    storyboard = UIStoryboard.storyboardWithName("Storyboard", bundle:nil)
    # set window's root view to storyboard's root view
    @window.rootViewController = storyboard.instantiateInitialViewController
    # pretty common thing
    @window.makeKeyAndVisible

    true
  end
end
