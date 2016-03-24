/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HJReplay, HJFinishViewController, HJSeedingViewController_v2, HJSeedLiveResponse, HJSeedAnchorResponse, HJPlayingViewController_v2, UIWindow, QHIVCamera, HJBlurView, HJLiveFinishViewController;

__attribute__((visibility("hidden")))
@interface HJLiveManager : XXUnknownSuperclass {
	HJPlayingViewController_v2* _playingVC;
	HJSeedingViewController_v2* _seedingVC;
	HJLiveFinishViewController* _liveFinishVC;
	HJBlurView* _blurView;
	HJFinishViewController* _finishVC;
	BOOL _isHost;
	UIWindow* _liveWindow;
	HJSeedLiveResponse* _live;
	HJSeedAnchorResponse* _anchor;
	HJReplay* _replay;
	NSString* _tid;
	NSString* _placeholderString;
}
@property(copy, nonatomic) NSString* placeholderString;	// G=0x1a1b4d; S=0x1a1b61; 
@property(retain, nonatomic) NSString* tid;	// G=0x1a1b15; S=0x1a1b25; 
@property(readonly, assign, nonatomic) HJReplay* replay;	// G=0x1a1b05; 
@property(readonly, assign, nonatomic) HJSeedAnchorResponse* anchor;	// G=0x1a1af5; 
@property(readonly, assign, nonatomic) HJSeedLiveResponse* live;	// G=0x1a1ae5; 
@property(retain, nonatomic) UIWindow* liveWindow;	// G=0x1a1aad; S=0x1a1abd; 
@property(assign, nonatomic) BOOL isHost;	// G=0x1a1a8d; S=0x1a1a9d; 
@property(readonly, assign, nonatomic) QHIVCamera* seedingViewControllerCameraView;	// G=0x1a1365; 
+(id)sharedManager;	// 0x19d309
-(void).cxx_destruct;	// 0x1a1b71
-(void)startPlayingWithRelatedid:(id)relatedid userId:(id)anId withType:(int)type WithDic:(id)dic;	// 0x1a1931
-(void)_updateBlurWithURL:(id)url;	// 0x1a1869
-(void)clean;	// 0x1a1821
-(void)releaseWindow;	// 0x1a1545
-(void)createWindow;	// 0x1a1439
-(void)releaseAll;	// 0x1a1385
-(void)releaseSeeding;	// 0x1a1331
-(void)releaseChat;	// 0x1a12b9
-(void)releasePlaying;	// 0x1a11d9
-(void)_showRootViewControoler;	// 0x1a0fcd
-(void)_presentRootViewController;	// 0x1a0d11
-(void)enterChatRoom:(id)room replayID:(id)anId snap:(id)snap title:(id)title;	// 0x1a0729
-(void)enterLiveFinishVCWith:(id)with;	// 0x1a06ad
-(void)enterChatRoom:(id)room;	// 0x1a036d
-(void)restartSeedingWithTitle:(id)title;	// 0x19fa8d
-(void)_showIndicatorView:(BOOL)view;	// 0x19f9d1
-(void)adStartSeeding:(id)seeding tid:(id)tid;	// 0x19f42d
-(void)_startSeedingSkipPrepare;	// 0x19eb41
-(void)_startSeeding;	// 0x19e6b9
-(void)presentSeedingModalViewController:(id)controller;	// 0x19e555
-(void)startSeedingWithTid:(id)tid placeholderString:(id)string;	// 0x19e441
-(void)startSeedingSkipPrepare;	// 0x19e399
-(void)startSeeding;	// 0x19e32d
-(void)_setupPlayingWithBlurImage:(id)blurImage;	// 0x19e105
-(void)_setupPlaying;	// 0x19df0d
-(void)startPlayingFromChatLive:(id)chatLive anchor:(id)anchor;	// 0x19dd09
-(void)pushToPlayingVC;	// 0x19db39
-(void)startPlayingLive:(id)live anchor:(id)anchor blurImage:(id)image switchArray:(id)array;	// 0x19d6c5
-(void)startPlayingLive:(id)live anchor:(id)anchor blurImage:(id)image;	// 0x19d679
-(void)startPlayingLive:(id)live anchor:(id)anchor;	// 0x19d641
-(void)closeWithAnimating:(BOOL)animating;	// 0x19d529
-(void)closeLiveWithAnimating:(BOOL)animating;	// 0x19d3f5
-(id)init;	// 0x19d3c9
@end
