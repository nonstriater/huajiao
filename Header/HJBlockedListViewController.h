/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface HJBlockedListViewController : XXUnknownSuperclass {
	NSArray* _blockedList;
}
@property(retain, nonatomic) NSArray* blockedList;	// G=0xafa1; S=0xa839; 
-(void).cxx_destruct;	// 0xafb1
-(void)setTitle:(id)title;	// 0xadad
-(void)onBack:(id)back;	// 0xad69
-(void)setupBackBarButton;	// 0xab79
-(void)gotoMainPageWith:(id)with;	// 0xaad1
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0xaa41
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0xaa25
-(id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0xa9a9
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0xa8dd
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0xa8a1
-(int)numberOfSectionsInTableView:(id)tableView;	// 0xa89d
-(void)loadBlockedList;	// 0xa72d
-(void)initial;	// 0xa5b9
-(void)dealloc;	// 0xa54d
-(void)didReceiveMemoryWarning;	// 0xa521
-(void)viewWillDisappear:(BOOL)view;	// 0xa4ad
-(void)viewWillAppear:(BOOL)view;	// 0xa439
-(void)loadBlockedListRefresh:(id)refresh;	// 0xa0ed
-(void)viewDidLoad;	// 0xa03d
@end

