/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "DSViewController.h"

@class NSString, UIBarButtonItem, UIActivityIndicatorView, HJUserProfilesResponse, HJVerifiedDetail, UITableView, UIViewController;

__attribute__((visibility("hidden")))
@interface CertifyInfoViewController : DSViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, UIAlertViewDelegate> {
	HJUserProfilesResponse* _userProfile;
	UIViewController* _contextViewcontroller;
	UITableView* _tableView;
	HJVerifiedDetail* _verifiedDetail;
	HJVerifiedDetail* _oneDetail;
	UIBarButtonItem* _nextStep;
	UIActivityIndicatorView* _loadingView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIActivityIndicatorView* loadingView;	// G=0x3f8cc1; S=0x3fcb89; 
@property(retain, nonatomic) UIBarButtonItem* nextStep;	// G=0x3fcb51; S=0x3fcb61; 
@property(retain, nonatomic) HJVerifiedDetail* oneDetail;	// G=0x3fcb19; S=0x3fcb29; 
@property(retain, nonatomic) HJVerifiedDetail* verifiedDetail;	// G=0x3fcae1; S=0x3fcaf1; 
@property(retain, nonatomic) UITableView* tableView;	// G=0x3fcaa9; S=0x3fcab9; 
@property(retain, nonatomic) UIViewController* contextViewcontroller;	// G=0x3fca71; S=0x3fca81; 
@property(retain, nonatomic) HJUserProfilesResponse* userProfile;	// G=0x3fca61; S=0x3fa0ed; 
-(void).cxx_destruct;	// 0x3fcbb1
-(id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x3fc7e5
-(float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x3fc7dd
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x3fc7d5
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x3fc261
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3fafb5
-(void)onSwitchChanged:(id)changed;	// 0x3fae81
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3fa689
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3fa679
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x3fa675
-(void)refreshUserInfo;	// 0x3fa3d1
-(void)setupTableView;	// 0x3fa115
-(void)didReceiveMemoryWarning;	// 0x3fa0c1
-(void)viewWillAppear:(BOOL)view;	// 0x3fa095
-(void)nextStepAction:(id)action;	// 0x3f92c1
-(void)refreshRightBarButtonItemEable;	// 0x3f90fd
-(void)viewDidLoad;	// 0x3f8e29
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3f8c6d
-(void)onBack:(id)back;	// 0x3f8609
@end

