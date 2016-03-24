/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "HJInviteHeaderDelegate.h"
#import "DSViewController.h"

@class NSString, UILabel, UIView, NSMutableArray, NSIndexPath, UITableView, HJInviteHeader;

__attribute__((visibility("hidden")))
@interface InvitePacketViewController : DSViewController <UITableViewDataSource, UITableViewDelegate, HJInviteHeaderDelegate> {
	HJInviteHeader* _headerView;
	NSMutableArray* _inviteelist;
	NSString* _offset;
	NSIndexPath* _preIndex;
	UILabel* _label;
	BOOL _pushToWebView;
	NSString* _currentBalance;
	NSString* _giftName;
	UITableView* _tableView;
	UIView* _emtpyView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView* emtpyView;	// G=0x146e1; S=0x14d29; 
@property(retain, nonatomic) UITableView* tableView;	// G=0x14cf1; S=0x14d01; 
+(void)pushToInvitePacketVCWith:(id)with;	// 0x128f9
-(void).cxx_destruct;	// 0x14d51
-(void)removeEmptyView;	// 0x14cb9
-(void)showEmptyView;	// 0x14a95
-(void)pushToWebViewWithTitle:(id)title URL:(id)url;	// 0x145d5
-(void)HJInviteHeader:(id)header HandleAction:(id)action object:(id)object;	// 0x13f75
-(void)didReceiveMemoryWarning;	// 0x13f49
-(void)pullUpRefreshPath:(id)path currentPath:(id)path2 hasMore:(BOOL)more;	// 0x13ea1
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x13d2d
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x13d25
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x13cfd
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x13cf9
-(void)setupTableHeaderView;	// 0x13969
-(void)onBack:(id)back;	// 0x13891
-(void)loadData:(id)data;	// 0x132c5
-(void)viewDidAppear:(BOOL)view;	// 0x13299
-(void)viewDidLayoutSubviews;	// 0x1326d
-(void)viewWillDisappear:(BOOL)view;	// 0x131f9
-(void)viewWillAppear:(BOOL)view;	// 0x13185
-(void)viewDidLoad;	// 0x12cb1
-(void)handleAction:(id)action;	// 0x12bcd
-(void)setupRightItem;	// 0x12a01
@end

