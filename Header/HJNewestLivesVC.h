/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJLiveAniController.h"
#import "HJAniProtocol.h"
#import "HJBaseCellDelegate.h"

@class NSString, HJLeadingRolesResponse, HJFollowHeaderView, NSTimer, NSNumber, HJPlayBackManager, NSMutableArray, NSIndexPath, YIFullScreenScroll;

__attribute__((visibility("hidden")))
@interface HJNewestLivesVC : HJLiveAniController <HJAniProtocol, HJBaseCellDelegate> {
	double _refreshInterval;
	BOOL _refreshing;
	int _preRow;
	NSIndexPath* _preIndex;
	long _lastOperationTime;
	BOOL _appear;
	BOOL _loadEnd;
	BOOL _more;
	BOOL _isAddAds;
	BOOL _hasHeader;
	BOOL _isNiewDiscovery;
	NSMutableArray* _groupArr;
	NSTimer* _refreshTimer;
	HJPlayBackManager* _manager;
	NSNumber* _replayCount;
	HJFollowHeaderView* _headerView;
	NSString* _strOffset;
	NSMutableArray* _adQueue;
	NSMutableArray* _adPositionQueue;
	NSMutableArray* _popularLiveIds;
	int _totalLives;
	HJLeadingRolesResponse* _leadingRoles;
	int _defaultFeedCount;
	YIFullScreenScroll* _fullScreenDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isNiewDiscovery;	// G=0x2518e1; S=0x2518f1; 
@property(retain, nonatomic) YIFullScreenScroll* fullScreenDelegate;	// G=0x2518a9; S=0x2518b9; 
@property(assign, nonatomic) int defaultFeedCount;	// G=0x251889; S=0x251899; 
@property(retain, nonatomic) HJLeadingRolesResponse* leadingRoles;	// G=0x251851; S=0x251861; 
@property(assign, nonatomic) BOOL hasHeader;	// G=0x251831; S=0x251841; 
@property(assign, nonatomic) int totalLives;	// G=0x251811; S=0x251821; 
@property(retain, nonatomic) NSMutableArray* popularLiveIds;	// G=0x2517d9; S=0x2517e9; 
@property(retain, nonatomic) NSMutableArray* adPositionQueue;	// G=0x2517a1; S=0x2517b1; 
@property(retain, nonatomic) NSMutableArray* adQueue;	// G=0x251769; S=0x251779; 
@property(assign, nonatomic) BOOL isAddAds;	// G=0x251749; S=0x251759; 
@property(retain, nonatomic) NSString* strOffset;	// G=0x251711; S=0x251721; 
@property(assign, nonatomic) BOOL more;	// G=0x2516f1; S=0x251701; 
@property(assign, nonatomic) BOOL loadEnd;	// G=0x2516d1; S=0x2516e1; 
@property(retain, nonatomic) HJFollowHeaderView* headerView;	// G=0x251699; S=0x2516a9; 
@property(retain, nonatomic) NSNumber* replayCount;	// G=0x251661; S=0x251671; 
@property(retain, nonatomic) HJPlayBackManager* manager;	// G=0x251629; S=0x251639; 
@property(retain, nonatomic) NSTimer* refreshTimer;	// G=0x2515f1; S=0x251601; 
@property(retain, nonatomic) NSMutableArray* groupArr;	// G=0x251529; S=0x2515c9; 
-(BOOL)isAppear;	// 0x2515b9
-(void).cxx_destruct;	// 0x251901
-(void)pullUpRefreshPath:(id)path currentPath:(id)path2 hasMore:(BOOL)more;	// 0x251491
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x251191
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x251125
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x251121
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x251095
-(void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x250ffd
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x250f65
-(void)scrollViewDidScrollToTop:(id)scrollView;	// 0x250f31
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;	// 0x250ef5
-(void)scrollViewDidScroll:(id)scrollView;	// 0x250e99
-(void)scrollViewWillBeginDragging:(id)scrollView;	// 0x250e15
-(void)setupProperty;	// 0x250d35
-(void)loadNewestMultMedias:(BOOL)medias;	// 0x25037d
-(void)loadDataMore:(BOOL)more;	// 0x25027d
-(void)checkError:(id)error;	// 0x2501f1
-(void)doRefresh;	// 0x250151
-(void)checkEmpty;	// 0x2500c5
-(void)dealloc;	// 0x24fff9
-(void)onLogout;	// 0x24ffe5
-(void)handleRefresh:(id)refresh;	// 0x24ff65
-(void)endRefresh;	// 0x24fe25
-(void)initRefresh;	// 0x24fc05
-(void)viewDidAppear:(BOOL)view;	// 0x24fbc1
-(void)refreshIfNecessary:(id)necessary;	// 0x24fb51
-(void)viewWillDisappear:(BOOL)view;	// 0x24fa89
-(void)viewWillAppear:(BOOL)view;	// 0x24f9e5
-(void)viewDidLoad;	// 0x24f735
-(void)setAppear:(BOOL)appear;	// 0x24f67d
-(void)registerCells;	// 0x24f635
-(void)setupbackgroundImage;	// 0x24f5d1
-(void)loadDataWithSuperVC:(id)superVC view:(id)view;	// 0x24f4ed
-(void)renewLastOperationTime;	// 0x24f4d1
-(id)initWithDiscoveryType:(BOOL)discoveryType;	// 0x24f491
@end
