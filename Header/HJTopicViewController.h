/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DSTableViewController.h"
#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, HJTopicHeaderView, UIButton, UIActivityIndicatorView, HJTopicInfo, NSMutableArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface HJTopicViewController : DSTableViewController <UITableViewDataSource, UITableViewDelegate> {
	int _preRow;
	NSIndexPath* _preIndex;
	BOOL _canAdd;
	BOOL _hasMore;
	BOOL _refreshing;
	BOOL _showIWantJoinBtn;
	NSMutableArray* _videoArrM;
	HJTopicHeaderView* _topicView;
	NSString* _offset;
	UIActivityIndicatorView* _activityView;
	HJTopicInfo* _info;
	float _contentHeight;
	UIButton* _playButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* playButton;	// G=0x1a937d; S=0x1a938d; 
@property(assign, nonatomic) float contentHeight;	// G=0x1a935d; S=0x1a936d; 
@property(retain, nonatomic) HJTopicInfo* info;	// G=0x1a9325; S=0x1a9335; 
@property(assign, nonatomic) BOOL showIWantJoinBtn;	// G=0x1a9315; S=0x1a730d; 
@property(assign, nonatomic) BOOL refreshing;	// G=0x1a92f5; S=0x1a9305; 
@property(retain, nonatomic) UIActivityIndicatorView* activityView;	// G=0x1a92bd; S=0x1a92cd; 
@property(assign, nonatomic) BOOL hasMore;	// G=0x1a929d; S=0x1a92ad; 
@property(copy, nonatomic) NSString* offset;	// G=0x1a9279; S=0x1a928d; 
@property(retain, nonatomic) HJTopicHeaderView* topicView;	// G=0x1a9241; S=0x1a9251; 
@property(retain, nonatomic) NSMutableArray* videoArrM;	// G=0x1a90e1; S=0x1a9219; 
+(id)topicViewWithTopicInfo:(id)topicInfo;	// 0x1a6e69
-(void).cxx_destruct;	// 0x1a93b5
-(void)didStartSeed;	// 0x1a9131
-(void)loadMore;	// 0x1a8ca9
-(void)getTopic;	// 0x1a8651
-(void)handRefresh;	// 0x1a8629
-(void)getVideo;	// 0x1a80ad
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x1a7e01
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x1a7d41
-(float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x1a7d35
-(void)pullUpRefreshPath:(id)path currentPath:(id)path2 hasMore:(BOOL)more;	// 0x1a7c9d
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x1a78f1
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x1a78b5
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x1a78b1
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x1a77f9
-(id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x1a778d
-(void)didHandleRefresh:(id)refresh;	// 0x1a777d
-(void)didReceiveMemoryWarning;	// 0x1a7751
-(void)setUpPlayButton;	// 0x1a7469
-(void)viewDidDisappear:(BOOL)view;	// 0x1a7411
-(void)viewWillDisappear:(BOOL)view;	// 0x1a735d
-(void)viewWillAppear:(BOOL)view;	// 0x1a72cd
-(void)viewDidLoad;	// 0x1a7089
-(void)setTitle:(id)title;	// 0x1a6f09
-(void)viewDidAppear:(BOOL)view;	// 0x1a6ef5
@end

