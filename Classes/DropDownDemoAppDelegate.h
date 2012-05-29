//
//  DropDownDemoAppDelegate.h
//  DropDownDemo
//
//  Created by Ameya on 25/09/10.
//  Created by Abdullah Md. Zubair on 19/09/10.
//

#import <UIKit/UIKit.h>

@class DropDownDemoViewController;

@interface DropDownDemoAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DropDownDemoViewController *viewController;
	
	UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DropDownDemoViewController *viewController;

@property (nonatomic,retain) UITabBarController *tabBarController;

-(void)addTabBarToView;

@end

