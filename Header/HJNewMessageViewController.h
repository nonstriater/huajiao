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
@interface HJNewMessageViewController : DSViewController <UITableViewDataSource, UITableViewDelegate> {
	NSArray* _cellTitleArray;
	UITableView* _tableView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UITableView* tableView;	// G=0x124511; S=0x124521; 
@property(retain, nonatomic) NSArray* cellTitleArray;	// G=0x1244d9; S=0x1244e9; 
-(void).cxx_destruct;	// 0x124549
-(void)onSwitchChanged:(id)changed;	// 0x124045
-(id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x123d29
-(float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x123ca5
-(id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x123c21
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x123c19
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x1238b9
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x123829
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x1237ed
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x1237e5
-(void)setupTableView;	// 0x1233ed
-(void)didReceiveMemoryWarning;	// 0x1233c1
-(void)viewDidLoad;	// 0x12303d
@end

