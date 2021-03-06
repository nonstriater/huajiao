/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DSWatchingTabBarDelegate.h"
#import "DSWatchingTabBarDataSource.h"
#import "HJLiveContainerViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "HJLiveBaseControllerDelegate.h"
#import "living-Structs.h"
#import "DSViewController.h"

@class NSString, HJLiveContainerView, HJLivePrevueController, NSArray, HJLiveWatchController, DSWatchingTabBar, HJLiveGlobalController;

__attribute__((visibility("hidden")))
@interface HJLiveContainerController : DSViewController <DSWatchingTabBarDelegate, DSWatchingTabBarDataSource, UIScrollViewDelegate, HJLiveContainerViewDelegate, HJLiveBaseControllerDelegate> {
	DSWatchingTabBar* _tabBar;
	HJLiveContainerView* _containerView;
	HJLiveWatchController* _watchVC;
	HJLiveGlobalController* _globalVC;
	HJLivePrevueController* _prevueVC;
	NSArray* _subControllers;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;	// 0x171261
-(void)stopAutoRefreshPageAtIndex:(int)index;	// 0x171209
-(void)startAutoRefreshPageAtIndex:(int)index;	// 0x171149
-(void)updatePageAtIndex:(int)index;	// 0x1710e9
-(void)containerView:(id)view didScrolledToPageIndex:(int)pageIndex;	// 0x171081
-(void)tabBar:(id)bar willSelectIndex:(int)index;	// 0x17103d
-(void)tabBar:(id)bar didSelectIndex:(int)index;	// 0x171019
-(id)tabBar:(id)bar titleAtIndex:(int)index;	// 0x170ecd
-(int)numberOfTabBar:(id)tabBar;	// 0x170ec9
-(void)controller:(id)controller scrollToPageIndex:(int)pageIndex;	// 0x170ea5
-(void)doRefreshWhenTabBarChanged;	// 0x170e59
-(void)scrollToPageIndex:(int)pageIndex;	// 0x170e39
-(void)setupNavigationBar;	// 0x170af9
-(void)setupSubControllers;	// 0x170901
-(void)setupContainerView;	// 0x17079d
-(void)viewWillDisappear:(BOOL)view;	// 0x170711
-(void)viewDidAppear:(BOOL)view;	// 0x1706b1
-(void)viewWillAppear:(BOOL)view;	// 0x170671
-(void)resetNavigationBar;	// 0x1704f5
-(void)viewDidDisappear:(BOOL)view;	// 0x1704b5
-(void)viewDidLoad;	// 0x170461
@end

