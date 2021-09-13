#import <UIKit/UIKit.h>

@import JitsiMeetSDK;
@protocol jitsiconferecedelgeteMethods <NSObject>

-(void)StartcallNotification:(NSObject *)obj;
-(void)EndCallNotification:(NSObject *)obj;

@end

@interface ConferenceViewController : UIViewController<JitsiMeetViewDelegate>

@property (nonatomic, weak) NSString *room;
@property id <jitsiconferecedelgeteMethods> dataMethods;

@end

