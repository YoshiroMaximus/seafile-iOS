//
//  SeafSceneDelegate.h
//  seafile
//
//  Scene-based lifecycle delegate. The app is single-scene; app-wide logic
//  stays in SeafAppDelegate and is forwarded from here.
//

#import <UIKit/UIKit.h>

@interface SeafSceneDelegate : NSObject <UIWindowSceneDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
