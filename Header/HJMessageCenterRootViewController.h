/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DSViewController.h"

@class HJSegmentedView, UIView, UIScrollView, UITableView;

__attribute__((visibility("hidden")))
@interface HJMessageCenterRootViewController : DSViewController {
	HJSegmentedView* _segmentedView;
	UIView* _segmentedContainerView;
	UITableView* _myTableView;
	UITableView* _followedTableView;
	UIScrollView* _mainScrollView;
	UIView* _noFollowedView;
	UIView* _noYoursView;
}
@property(assign, nonatomic) __weak UIView* noYoursView;	// G=0x2e20c9; S=0x2e20e9; 
@property(assign, nonatomic) __weak UIView* noFollowedView;	// G=0x2e2095; S=0x2e20b5; 
@property(assign, nonatomic) __weak UIScrollView* mainScrollView;	// G=0x2e2061; S=0x2e2081; 
@property(assign, nonatomic) __weak UITableView* followedTableView;	// G=0x2e202d; S=0x2e204d; 
@property(assign, nonatomic) __weak UITableView* myTableView;	// G=0x2e1ff9; S=0x2e2019; 
@property(assign, nonatomic) __weak UIView* segmentedContainerView;	// G=0x2e1fc5; S=0x2e1fe5; 
-(void).cxx_destruct;	// 0x2e20fd
-(void)gotoNotification;	// 0x2e1f55
-(unsigned)supportedInterfaceOrientations;	// 0x2e1f51
-(BOOL)shouldAutorotate;	// 0x2e1f4d
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x2e1d75
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x2e1905
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2e14f1
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x2e13f1
-(void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x2e1311
-(void)segmentedViewValueChanged:(id)changed;	// 0x2e0f69
-(void)viewDidLayoutSubviews;	// 0x2e0ce1
-(void)viewWillDisappear:(BOOL)view;	// 0x2e0c3d
-(void)viewWillAppear:(BOOL)view;	// 0x2e0b79
-(void)viewDidLoad;	// 0x2e0691
-(void)dealloc;	// 0x2e0625
-(void)onReadAll:(id)all;	// 0x2e0585
-(void)messageCenterStatusChanged;	// 0x2e03b1
-(void)hideNoYoursView;	// 0x2e0375
-(void)showNoYoursView;	// 0x2e0339
-(void)hideNoFollowingFollowedView;	// 0x2e02fd
-(void)showNoFollowingFollowedView;	// 0x2e02c1
-(void)loadSegmentedView;	// 0x2dfdb9
@end

