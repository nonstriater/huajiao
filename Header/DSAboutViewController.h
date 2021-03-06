/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DSViewController.h"
#import "UITableViewDataSource.h"
#import "living-Structs.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface DSAboutViewController : DSViewController <UITableViewDataSource, UITableViewDelegate> {
	NSArray* _cellTitleArray;
	UITableView* _tableView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UITableView* tableView;	// G=0x345f85; S=0x345f95; 
@property(retain, nonatomic) NSArray* cellTitleArray;	// G=0x345f4d; S=0x345f5d; 
-(void).cxx_destruct;	// 0x345fbd
-(void)onClickFeedBack;	// 0x345ed5
-(void)onClickUploadLog;	// 0x345e39
-(void)onClickNetDiagnose;	// 0x345db1
-(void)onClickOfficial;	// 0x345d35
-(void)onClickProtocol;	// 0x345cb9
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x345be5
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x345a01
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3459c5
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x3459c1
-(void)setupTableView;	// 0x3456b9
-(void)setTableHeaderView;	// 0x3451a1
-(void)didReceiveMemoryWarning;	// 0x345175
-(void)viewWillDisappear:(BOOL)view;	// 0x345101
-(void)viewWillAppear:(BOOL)view;	// 0x34508d
-(void)viewDidLoad;	// 0x344db9
@end

