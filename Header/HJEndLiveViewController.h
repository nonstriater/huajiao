/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, Feeds, HJSeedLiveResponse, NSLayoutConstraint, HJSeedAnchorResponse, UILabel, UIImageView, UIButton, UIView, HJBlurView;

__attribute__((visibility("hidden")))
@interface HJEndLiveViewController : XXUnknownSuperclass {
	HJBlurView* _blurView;
	UIView* _centerContainer;
	UIView* _iconMask;
	UIImageView* _largeImage;
	UIImageView* _icon;
	UILabel* _smallTitle;
	UILabel* _bigTitle;
	UILabel* _liveTimeLabel;
	UILabel* _audienceCountLabel;
	UILabel* _praiseCountLabel;
	UILabel* _commentCountLabel;
	UIView* _bottomView;
	UIImage* _snap;
	NSLayoutConstraint* _centerHeightConstraint;
	NSLayoutConstraint* _centerWidthConstraint;
	NSLayoutConstraint* _iconTopConstraint;
	NSLayoutConstraint* _bigTitleBottomConstraint;
	NSLayoutConstraint* _centerTopConstraint;
	NSLayoutConstraint* _smallTitleTopConstraint;
	NSLayoutConstraint* _smallTitleBottomConstraint;
	NSLayoutConstraint* _btnsViewBottomConstraint;
	id _commentBlock;
	id _replayBlock;
	id _profileBlock;
	id _shareBlock;
	id _closeBtnBlock;
	Feeds* _Feeds;
	HJSeedLiveResponse* _live;
	HJSeedAnchorResponse* _anchor;
	int _comments;
	UIButton* _closeBtn;
}
@property(assign, nonatomic) __weak UIButton* closeBtn;	// G=0x259cbd; S=0x259cdd; 
@property(assign, nonatomic) int comments;	// G=0x259cad; S=0x2596cd; 
@property(retain, nonatomic) HJSeedAnchorResponse* anchor;	// G=0x259c75; S=0x259c85; 
@property(retain, nonatomic) HJSeedLiveResponse* live;	// G=0x259c3d; S=0x259c4d; 
@property(retain, nonatomic) Feeds* Feeds;	// G=0x259c2d; S=0x25929d; 
@property(copy, nonatomic) id closeBtnBlock;	// G=0x259c09; S=0x259c1d; 
@property(copy, nonatomic) id shareBlock;	// G=0x259be5; S=0x259bf9; 
@property(copy, nonatomic) id profileBlock;	// G=0x259bc1; S=0x259bd5; 
@property(copy, nonatomic) id replayBlock;	// G=0x259b9d; S=0x259bb1; 
@property(copy, nonatomic) id commentBlock;	// G=0x259b79; S=0x259b8d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* btnsViewBottomConstraint;	// G=0x259b45; S=0x259b65; 
@property(assign, nonatomic) __weak NSLayoutConstraint* smallTitleBottomConstraint;	// G=0x259b11; S=0x259b31; 
@property(assign, nonatomic) __weak NSLayoutConstraint* smallTitleTopConstraint;	// G=0x259add; S=0x259afd; 
@property(assign, nonatomic) __weak NSLayoutConstraint* centerTopConstraint;	// G=0x259aa9; S=0x259ac9; 
@property(assign, nonatomic) __weak NSLayoutConstraint* bigTitleBottomConstraint;	// G=0x259a75; S=0x259a95; 
@property(assign, nonatomic) __weak NSLayoutConstraint* iconTopConstraint;	// G=0x259a41; S=0x259a61; 
@property(assign, nonatomic) __weak NSLayoutConstraint* centerWidthConstraint;	// G=0x259a0d; S=0x259a2d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* centerHeightConstraint;	// G=0x2599d9; S=0x2599f9; 
@property(retain, nonatomic) UIImage* snap;	// G=0x2599c9; S=0x257ca5; 
@property(assign, nonatomic) __weak UIView* bottomView;	// G=0x259995; S=0x2599b5; 
@property(assign, nonatomic) __weak UILabel* commentCountLabel;	// G=0x259961; S=0x259981; 
@property(assign, nonatomic) __weak UILabel* praiseCountLabel;	// G=0x25992d; S=0x25994d; 
@property(assign, nonatomic) __weak UILabel* audienceCountLabel;	// G=0x2598f9; S=0x259919; 
@property(assign, nonatomic) __weak UILabel* liveTimeLabel;	// G=0x2598c5; S=0x2598e5; 
@property(assign, nonatomic) __weak UILabel* bigTitle;	// G=0x259891; S=0x2598b1; 
@property(assign, nonatomic) __weak UILabel* smallTitle;	// G=0x25985d; S=0x25987d; 
@property(assign, nonatomic) __weak UIImageView* icon;	// G=0x259829; S=0x259849; 
@property(assign, nonatomic) __weak UIImageView* largeImage;	// G=0x2597f5; S=0x259815; 
@property(assign, nonatomic) __weak UIView* iconMask;	// G=0x2597c1; S=0x2597e1; 
@property(assign, nonatomic) __weak UIView* centerContainer;	// G=0x25978d; S=0x2597ad; 
@property(assign, nonatomic) __weak HJBlurView* blurView;	// G=0x259759; S=0x259779; 
+(id)creatEndLiveViewControllerHasCommentBtn:(BOOL)btn;	// 0x257881
-(void).cxx_destruct;	// 0x259cf1
-(int)preferredInterfaceOrientationForPresentation;	// 0x259755
-(unsigned)supportedInterfaceOrientations;	// 0x259751
-(BOOL)shouldAutorotate;	// 0x25974d
-(void)btnDidClick:(id)btn;	// 0x259175
-(void)viewDidLayoutSubviews;	// 0x258d79
-(void)addBottomBtns;	// 0x258785
-(void)setIsHalf:(BOOL)half;	// 0x258769
-(void)updateConstraints;	// 0x257de9
-(void)viewWillAppear:(BOOL)view;	// 0x257d81
-(void)viewDidLoad;	// 0x257981
-(void)closeBtnAction;	// 0x257935
@end
