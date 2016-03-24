/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "HJBaseCellDelegate.h"
#import "DSViewController.h"

@class NSString, NSOperation, InviteActiveInfo, HJPopularAll, HJUserProfilesResponse, NSMutableArray, UITableViewController;

__attribute__((visibility("hidden")))
@interface HJFollowingRecommendViewController : DSViewController <HJBaseCellDelegate, UITableViewDataSource, UITableViewDelegate> {
	NSOperation* _operation;
	NSString* _categoryID;
	BOOL _loading;
	BOOL _firstLoad;
	BOOL _addPanObserver;
	BOOL _pullUp;
	BOOL _pullDown;
	int _preRow;
	BOOL _canReload;
	HJPopularAll* _popularAll;
	BOOL _isInvited;
	BOOL _isGuanzhuYaoqingren;
	NSMutableArray* _groupArr;
	UITableViewController* _tableViewController;
	int _offset;
	HJUserProfilesResponse* _inviterResponse;
	InviteActiveInfo* _activeInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isGuanzhuYaoqingren;	// G=0x27baed; S=0x27bafd; 
@property(retain, nonatomic) InviteActiveInfo* activeInfo;	// G=0x27bab5; S=0x27bac5; 
@property(assign, nonatomic) BOOL isInvited;	// G=0x27ba95; S=0x27baa5; 
@property(retain, nonatomic) HJUserProfilesResponse* inviterResponse;	// G=0x27ba5d; S=0x27ba6d; 
@property(assign, nonatomic) int offset;	// G=0x27ba3d; S=0x27ba4d; 
@property(retain, nonatomic) UITableViewController* tableViewController;	// G=0x27abad; S=0x27ba15; 
@property(retain, nonatomic) NSMutableArray* groupArr;	// G=0x27b6e5; S=0x27b9ed; 
-(void).cxx_destruct;	// 0x27bb0d
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x27b9c1
-(id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x27b741
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x27b739
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x27b735
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x27b2e9
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x27b275
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x27b251
-(void)rightButtonHandle:(id)handle;	// 0x27b1d9
-(void)setupRightButton;	// 0x27b00d
-(void)didReceiveMemoryWarning;	// 0x27afe1
-(void)btnAction:(id)action;	// 0x27ad31
-(void)clear;	// 0x27ab85
-(void)loadDataMore:(BOOL)more;	// 0x27a67d
-(void)inviterUserData:(id)data;	// 0x27a3b1
-(void)pressedHongbaoWithID:(id)anId;	// 0x27a1bd
-(void)viewDidAppear:(BOOL)view;	// 0x27a191
-(void)viewDidLoad;	// 0x27958d
-(void)viewWillDisappear:(BOOL)view;	// 0x279519
-(void)viewWillAppear:(BOOL)view;	// 0x279419
-(void)setTitle:(id)title;	// 0x279219
@end
