/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJLiveBaseController.h"

@class NSString, HJUserIntf, UIView, NSMutableArray, HJDiscEmptyView;

__attribute__((visibility("hidden")))
@interface HJUserFollowedViewController : HJLiveBaseController {
	HJUserIntf* _refreshIntf;
	HJUserIntf* _loadmoreIntf;
	BOOL _isMyself;
	UIView* _emtpyView;
	HJDiscEmptyView* _theEmptyView;
	NSString* _userId;
	NSMutableArray* _dataArray;
}
@property(retain, nonatomic) NSMutableArray* dataArray;	// G=0xdf83d; S=0xdf84d; 
@property(assign, nonatomic) BOOL isMyself;	// G=0xdf81d; S=0xdf82d; 
@property(retain, nonatomic) NSString* userId;	// G=0xdf7e5; S=0xdf7f5; 
@property(retain, nonatomic) HJDiscEmptyView* theEmptyView;	// G=0xdf7ad; S=0xdf7bd; 
@property(retain, nonatomic) UIView* emtpyView;	// G=0xde599; S=0xdf785; 
-(void).cxx_destruct;	// 0xdf875
-(void)onUserFollowStatusChangedNotification:(id)notification;	// 0xdf579
-(void)doLoadmore;	// 0xdf249
-(void)handleRefresh:(id)refresh;	// 0xdee41
-(void)doRefresh;	// 0xdedf1
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0xdede9
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0xdec99
-(int)numberOfSectionsInTableView:(id)tableView;	// 0xdec95
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0xdec59
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0xdeb71
-(void)showTable;	// 0xde535
-(void)showEmpty;	// 0xde4d1
-(id)itemArray;	// 0xde471
-(void)viewDidDisappear:(BOOL)view;	// 0xde3e5
-(void)viewWillAppear:(BOOL)view;	// 0xde325
-(void)viewWillLayoutSubviews;	// 0xde219
-(void)onClickBack;	// 0xde1d5
-(void)setupNavigationBar;	// 0xddec9
-(void)onUserInfoChangedNotification:(id)notification;	// 0xddb6d
-(void)viewDidLoad;	// 0xdd8bd
-(void)setTitle:(id)title;	// 0xdd731
-(void)dealloc;	// 0xdd6c5
-(id)initWithUserId:(id)userId;	// 0xdd4d1
@end

