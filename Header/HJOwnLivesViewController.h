/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJLiveBaseController.h"

@class HJUserIntf;

__attribute__((visibility("hidden")))
@interface HJOwnLivesViewController : HJLiveBaseController {
	HJUserIntf* _refreshIntf;
	HJUserIntf* _loadmoreIntf;
}
-(void).cxx_destruct;	// 0x2645f1
-(void)doLoadmore;	// 0x2642ed
-(void)handleRefresh:(id)refresh;	// 0x263f5d
-(void)doRefresh;	// 0x263f0d
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x263f05
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x263d9d
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x263d99
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x263d95
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x263d91
-(void)viewDidDisappear:(BOOL)view;	// 0x263d49
-(void)viewWillAppear:(BOOL)view;	// 0x263ccd
-(void)viewWillLayoutSubviews;	// 0x263bc1
-(void)onClickBack;	// 0x263b7d
-(void)viewDidLoad;	// 0x2639a9
-(void)dealloc;	// 0x26393d
-(id)init;	// 0x263819
@end

