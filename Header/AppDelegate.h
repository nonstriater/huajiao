/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "UITabBarControllerDelegate.h"
#import "HJWalletCloudTextManagerDelegate.h"
#import "UIApplicationDelegate.h"
#import "HJEnrollViewControllerDelegate.h"

@class NSString, NSDate, UIApplicationShortcutItem, UIWindow, Reachability, DSTabBarController;

__attribute__((visibility("hidden")))
@interface AppDelegate : XXUnknownSuperclass <UITabBarControllerDelegate, HJWalletCloudTextManagerDelegate, UIApplicationDelegate, HJEnrollViewControllerDelegate> {
	Reachability* hostReach;
	BOOL _isShare;
	BOOL _canLoadAdvertisement;
	BOOL _hotFixed;
	BOOL _isSwitchOldDiscovery;
	UIWindow* _window;
	DSTabBarController* _tabBarController;
	NSDate* _enterBackgroundDate;
	int _enterBackgroundTimeInterval;
	UIApplicationShortcutItem* _launchedShortcutItem;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isSwitchOldDiscovery;	// G=0x25c4d; S=0x25c5d; 
@property(assign, nonatomic) BOOL hotFixed;	// G=0x25c2d; S=0x25c3d; 
@property(retain, nonatomic) UIApplicationShortcutItem* launchedShortcutItem;	// G=0x25bf5; S=0x25c05; 
@property(assign, nonatomic) int enterBackgroundTimeInterval;	// G=0x25bd5; S=0x25be5; 
@property(retain, nonatomic) NSDate* enterBackgroundDate;	// G=0x25b9d; S=0x25bad; 
@property(readonly, assign, nonatomic, getter=isCanLoadAdvertisement) BOOL canLoadAdvertisement;	// G=0x25b8d; 
@property(retain, nonatomic) DSTabBarController* tabBarController;	// G=0x25b55; S=0x25b65; 
@property(assign, nonatomic) BOOL isShare;	// G=0x25b35; S=0x25b45; 
@property(retain, nonatomic) UIWindow* window;	// G=0x25afd; S=0x25b0d; 
-(void).cxx_destruct;	// 0x25c6d
-(void)registerforDeviceLockNotification;	// 0x259dd
-(void)addListeners;	// 0x259ad
-(void)mobileEnrollFinished;	// 0x259a9
-(void)viewController:(id)controller didFinishAuthentification:(BOOL)authentification shouldShowRecommendedUsers:(BOOL)users;	// 0x259a5
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;	// 0x258fd
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;	// 0x258a5
-(void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;	// 0x258a1
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;	// 0x256e5
-(void)application:(id)application didRegisterUserNotificationSettings:(id)settings;	// 0x256e1
-(void)registerRemoteNotifications;	// 0x255c9
-(void)loadFirstController;	// 0x24e29
-(void)onNeedReentry:(id)reentry;	// 0x24d71
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;	// 0x24b61
-(void)setupEnrollController;	// 0x249ad
-(void)cloudUpdateSwitchDisocvery;	// 0x248fd
-(void)switchDiscovery;	// 0x24631
-(void)setupTabBarController;	// 0x242f5
-(void)setupthemeForTabBar;	// 0x241fd
-(unsigned)application:(id)application supportedInterfaceOrientationsForWindow:(id)window;	// 0x24189
-(void)applicationWillTerminate:(id)application;	// 0x24129
-(void)applicationDidBecomeActive:(id)application;	// 0x2409d
-(void)applicationDidReceiveMemoryWarning:(id)application;	// 0x24059
-(void)applicationWillEnterForeground:(id)application;	// 0x23e69
-(void)applicationDidEnterBackground:(id)application;	// 0x23d0d
-(BOOL)application:(id)application shouldAllowExtensionPointIdentifier:(id)identifier;	// 0x23d09
-(void)checkToken;	// 0x23b39
-(void)downloadGiftEffectImages:(id)images;	// 0x23181
-(void)checkToUpdateFinished:(BOOL)updateFinished;	// 0x22af1
-(BOOL)addHeadPhoneListener;	// 0x229fd
-(BOOL)hasHeadset;	// 0x2294d
-(void)moveUMCrashLogsToTempLogs;	// 0x225a5
-(void)usageTimerAction;	// 0x224ed
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;	// 0x215d9
-(void)initMRCoreData;	// 0x215b1
-(void)startLogger;	// 0x21471
-(void)setupFollowingRecommandViewController;	// 0x213cd
-(void)onEnrollStateWillChange:(id)onEnrollState;	// 0x20df5
-(BOOL)application:(id)application willFinishLaunchingWithOptions:(id)options;	// 0x20d65
-(void)application:(id)application performActionForShortcutItem:(id)shortcutItem completionHandler:(id)handler;	// 0x20d11
-(BOOL)handleShortCutItem:(id)item;	// 0x208a9
-(void)test;	// 0x208a5
@end
