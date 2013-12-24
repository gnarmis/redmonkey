// Generated by IB v0.3.0 gem. Do not edit it manually
// Run `rake ib:open` to refresh

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface NSURLRequest





-(IBAction) to_s;

@end


@interface InvalidURLError: StandardError







@end


@interface InvalidFileError: StandardError







@end


@interface BubbleWrap





-(IBAction) to_s;
-(IBAction) connectionDidFinishLoading:(id) connection;
-(IBAction) show_status_indicator:(id) show;
-(IBAction) create_request;
-(IBAction) set_content_type;
-(IBAction) create_request_body;
-(IBAction) append_payload:(id) body;
-(IBAction) append_form_params:(id) body;
-(IBAction) append_auth_header;
-(IBAction) append_files:(id) body;
-(IBAction) append_body_boundary:(id) body;
-(IBAction) create_url:(id) url_string;
-(IBAction) validate_url:(id) url;
-(IBAction) escape:(id) string;
-(IBAction) convert_payload_to_url;
-(IBAction) log:(id) message;
-(IBAction) escape_line_feeds:(id) hash;
-(IBAction) patch_nsurl_request:(id) request;
-(IBAction) call_delegator_with_response;

@end


@interface BubbleWrap





-(IBAction) initialize:(id) values;
-(IBAction) update:(id) values;
-(IBAction) to_s;
-(IBAction) update_status_description;

@end


@interface ParserError: StandardError







@end


@interface NSNotificationCenter





-(IBAction) observers;
-(IBAction) unobserve:(id) observer;

@end


@interface Camera





-(IBAction) initialize:(id) location;
-(IBAction) location;
-(IBAction) imagePickerControllerDidCancel:(id) picker;
-(IBAction) picker;
-(IBAction) dismiss;
-(IBAction) camera_device;
-(IBAction) media_type_to_symbol:(id) media_type;
-(IBAction) symbol_to_media_type:(id) symbol;
-(IBAction) error:(id) type;

@end


@interface UIView





-(IBAction) handle_gesture:(id) recognizer;

@end


@interface UIAlertView





-(IBAction) style;
-(IBAction) cancel_button_index;

@end


@interface ClickedButton





-(IBAction) willPresentAlertView:(id) alert;
-(IBAction) didPresentAlertView:(id) alert;
-(IBAction) alertViewCancel:(id) alert;
-(IBAction) alertViewShouldEnableFirstOtherButton:(id) alert;
-(IBAction) plain_text_field;
-(IBAction) secure_text_field;
-(IBAction) login_text_field;
-(IBAction) password_text_field;

@end


@interface UIViewController





-(IBAction) content_frame;

@end


@interface RedditArticleWebViewController: UIViewController

@property IBOutlet id webView;



-(IBAction) viewDidLoad;

@end


@interface RedditListViewController: UITableViewController





-(IBAction) viewDidLoad;
-(IBAction) getRedditData:(id) subreddit;

@end



