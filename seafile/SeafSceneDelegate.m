//
//  SeafSceneDelegate.m
//  seafile
//

#import "SeafSceneDelegate.h"
#import "SeafAppDelegate.h"
#import "Debug.h"

@implementation SeafSceneDelegate

- (SeafAppDelegate *)appDelegate
{
    return (SeafAppDelegate *)UIApplication.sharedApplication.delegate;
}

- (void)scene:(UIScene *)scene willConnectToSession:(UISceneSession *)session options:(UISceneConnectionOptions *)connectionOptions
{
    // UIKit created self.window and the SeafStart storyboard root from the
    // scene configuration before this is called.
    [[self appDelegate] windowDidConnect:self.window];
    for (UIOpenURLContext *context in connectionOptions.URLContexts) {
        [[self appDelegate] handleOpenURL:context.URL];
    }
}

- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts
{
    for (UIOpenURLContext *context in URLContexts) {
        [[self appDelegate] handleOpenURL:context.URL];
    }
}

- (void)sceneDidEnterBackground:(UIScene *)scene
{
    [[self appDelegate] handleDidEnterBackground];
}

- (void)sceneWillEnterForeground:(UIScene *)scene
{
    [[self appDelegate] handleWillEnterForeground];
}

- (void)sceneDidBecomeActive:(UIScene *)scene
{
    [[self appDelegate] handleDidBecomeActive];
}

@end
