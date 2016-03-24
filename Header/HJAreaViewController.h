/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "DSViewController.h"

@class NSString, NSArray, NSMutableArray, HJUserProfilesResponse, NSMutableString, UITableView, UIViewController;

__attribute__((visibility("hidden")))
@interface HJAreaViewController : DSViewController <UITableViewDelegate, UITableViewDataSource> {
	NSString* _PID;
	NSArray* _area;
	UIViewController* _contextViewcontroller;
	NSMutableString* _areaString;
	HJUserProfilesResponse* _userProfile;
	UITableView* _tableView;
	NSMutableArray* _showedArea;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* showedArea;	// G=0x37fac1; S=0x38df0d; 
@property(retain, nonatomic) UITableView* tableView;	// G=0x38ded5; S=0x38dee5; 
@property(retain, nonatomic) HJUserProfilesResponse* userProfile;	// G=0x38de9d; S=0x38dead; 
@property(retain, nonatomic) NSMutableString* areaString;	// G=0x38de65; S=0x38de75; 
@property(retain, nonatomic) UIViewController* contextViewcontroller;	// G=0x38de2d; S=0x38de3d; 
@property(retain, nonatomic) NSArray* area;	// G=0x37fedd; S=0x38de05; 
@property(retain, nonatomic) NSString* PID;	// G=0x38ddcd; S=0x38dddd; 
-(void).cxx_destruct;	// 0x38df35
-(BOOL)exsitChildWithID:(id)anId;	// 0x37fc41
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x37f361
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x37f0ed
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x37f0b1
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x37f0a9
-(void)setupTableView;	// 0x37edc9
-(void)viewDidLoad;	// 0x37ecbd
@end
