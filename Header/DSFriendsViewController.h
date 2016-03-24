/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJLiveBaseController.h"

@class HJUserIntf, UIView, HJUserProfilesResponse, NSMutableArray, HJDiscEmptyView;

__attribute__((visibility("hidden")))
@interface DSFriendsViewController : HJLiveBaseController {
	BOOL _otherProfileLoaded;
	int _fType;
	HJUserProfilesResponse* _userProfile;
	HJUserIntf* _userInterface;
	NSMutableArray* _dataArray;
	UIView* _emtpyView;
	HJDiscEmptyView* _theEmptyView;
	int _offset;
}
@property(assign, nonatomic) BOOL otherProfileLoaded;	// G=0x104f39; S=0x104f49; 
@property(assign, nonatomic) int offset;	// G=0x104f19; S=0x104f29; 
@property(retain, nonatomic) HJDiscEmptyView* theEmptyView;	// G=0x104ee1; S=0x104ef1; 
@property(retain, nonatomic) UIView* emtpyView;	// G=0x103d8d; S=0x104eb9; 
@property(retain, nonatomic) NSMutableArray* dataArray;	// G=0x104e81; S=0x104e91; 
@property(retain, nonatomic) HJUserIntf* userInterface;	// G=0x1049f9; S=0x104e59; 
@property(retain, nonatomic) HJUserProfilesResponse* userProfile;	// G=0x104e21; S=0x104e31; 
@property(assign, nonatomic) int fType;	// G=0x104e01; S=0x104e11; 
-(void).cxx_destruct;	// 0x104f59
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x104d21
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x104d19
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x104bb1
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x104b75
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x104b71
-(void)didReceiveMemoryWarning;	// 0x104b45
-(void)searchHandle:(id)handle;	// 0x104a49
-(void)doLoadmore;	// 0x1044f5
-(void)reloadData;	// 0x103fd5
-(void)showTable;	// 0x103d29
-(void)showEmpty;	// 0x103cc5
-(void)stopRefresh;	// 0x103c6d
-(void)onRefresh:(id)refresh;	// 0x103c15
-(void)setupSearch;	// 0x103ad1
-(void)onClickBack;	// 0x103a8d
-(void)setupNavigationBar;	// 0x103721
-(void)viewDidDisappear:(BOOL)view;	// 0x1036d9
-(void)viewWillAppear:(BOOL)view;	// 0x10365d
-(void)viewDidLoad;	// 0x1032d1
-(id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x103289
@end
