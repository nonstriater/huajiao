/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "IPAYBaseController.h"

@class NSString, NSArray, IPAYResultSchema, UITableView;

@interface IPAYRechrTypeListController : IPAYBaseController <UITableViewDelegate, UITableViewDataSource> {
	UITableView* myTableView;
	IPAYResultSchema* _resultInfo;
	NSArray* _payTypeList;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSArray* payTypeList;	// G=0xbaa251; S=0xbaa261; 
@property(retain, nonatomic) IPAYResultSchema* resultInfo;	// G=0xbaa219; S=0xbaa229; 
-(void).cxx_destruct;	// 0xbaa289
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0xba9efd
-(id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0xba9ad9
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0xba9ad1
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0xba99c1
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0xba9985
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0xba997d
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0xba98dd
-(void)backButtonMethod:(id)method;	// 0xba972d
-(void)createRechrTypeListView;	// 0xba882d
-(void)createRechrNavigationView;	// 0xba8659
-(void)loadAllRechrTypeListData;	// 0xba85b1
-(void)didReceiveMemoryWarning;	// 0xba8585
-(void)viewDidLoad;	// 0xba8521
@end

