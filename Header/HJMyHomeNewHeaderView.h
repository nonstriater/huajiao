/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "PPLabelDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLayoutConstraint, HJUserProfilesResponse, GWButtonWithImageOnRight, NewsFeeds, NSString, NSArray, PPLabel, UILabel, UIImageView, UIButton, UIView;
@protocol HJMyHomeNewHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface HJMyHomeNewHeaderView : XXUnknownSuperclass <PPLabelDelegate> {
	BOOL _resetHeadImage;
	HJUserProfilesResponse* userProfilesResponse;
	BOOL _isYunKong;
	HJUserProfilesResponse* _userInfo;
	NewsFeeds* _newsFeeds;
	id<HJMyHomeNewHeaderViewDelegate> _delegate;
	UIButton* _walletButton;
	GWButtonWithImageOnRight* _nickName;
	UILabel* _experience;
	PPLabel* _signature;
	UILabel* _praises;
	UILabel* _followers;
	UILabel* _followersTipLabel;
	UILabel* _followings;
	UILabel* _followingTipLabel;
	UIImageView* _shareImageV;
	unsigned _followButtonState;
	UIButton* _followSegment;
	UIButton* _followedSegment;
	UIButton* _experienceButton;
	float _offsetY;
	UIView* _coverView;
	UIButton* _avatorImageBtn;
	UIButton* _backgroundBtn;
	NSLayoutConstraint* _waletHeight;
	NSLayoutConstraint* _guanzhuBottom;
	NSLayoutConstraint* _guanzhuNumBottom;
	NSLayoutConstraint* _nicknameBottom;
	NSLayoutConstraint* _avatarToTop;
	NSLayoutConstraint* _signbottom;
	NSLayoutConstraint* _fensiLeft;
	NSLayoutConstraint* _fensiNumLeft;
	UIImageView* _blurImageView;
	NSLayoutConstraint* _nickTopToAvaBott;
	NSArray* _matches;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSArray* matches;	// G=0x110c81; S=0x110c91; 
@property(assign, nonatomic) __weak NSLayoutConstraint* nickTopToAvaBott;	// G=0x110c4d; S=0x110c6d; 
@property(assign, nonatomic) __weak UIImageView* blurImageView;	// G=0x110c19; S=0x110c39; 
@property(retain, nonatomic) NSLayoutConstraint* fensiNumLeft;	// G=0x110be1; S=0x110bf1; 
@property(retain, nonatomic) NSLayoutConstraint* fensiLeft;	// G=0x110ba9; S=0x110bb9; 
@property(retain, nonatomic) NSLayoutConstraint* signbottom;	// G=0x110b71; S=0x110b81; 
@property(retain, nonatomic) NSLayoutConstraint* avatarToTop;	// G=0x110b39; S=0x110b49; 
@property(retain, nonatomic) NSLayoutConstraint* nicknameBottom;	// G=0x110b01; S=0x110b11; 
@property(retain, nonatomic) NSLayoutConstraint* guanzhuNumBottom;	// G=0x110ac9; S=0x110ad9; 
@property(retain, nonatomic) NSLayoutConstraint* guanzhuBottom;	// G=0x110a91; S=0x110aa1; 
@property(retain, nonatomic) NSLayoutConstraint* waletHeight;	// G=0x110a59; S=0x110a69; 
@property(retain, nonatomic) UIButton* backgroundBtn;	// G=0x110a21; S=0x110a31; 
@property(retain, nonatomic) UIButton* avatorImageBtn;	// G=0x1109e9; S=0x1109f9; 
@property(retain, nonatomic) UIView* coverView;	// G=0x1109b1; S=0x1109c1; 
@property(assign, nonatomic) float offsetY;	// G=0x110991; S=0x1109a1; 
@property(assign, nonatomic) __weak UIButton* experienceButton;	// G=0x11095d; S=0x11097d; 
@property(retain, nonatomic) UIButton* followedSegment;	// G=0x110925; S=0x110935; 
@property(retain, nonatomic) UIButton* followSegment;	// G=0x1108ed; S=0x1108fd; 
@property(assign, nonatomic) unsigned followButtonState;	// G=0x1108dd; S=0x10c459; 
@property(retain, nonatomic) UIImageView* shareImageV;	// G=0x1108a5; S=0x1108b5; 
@property(assign, nonatomic) __weak UILabel* followingTipLabel;	// G=0x110871; S=0x110891; 
@property(retain, nonatomic) UILabel* followings;	// G=0x110839; S=0x110849; 
@property(assign, nonatomic) __weak UILabel* followersTipLabel;	// G=0x110805; S=0x110825; 
@property(retain, nonatomic) UILabel* followers;	// G=0x1107cd; S=0x1107dd; 
@property(retain, nonatomic) UILabel* praises;	// G=0x110795; S=0x1107a5; 
@property(retain, nonatomic) PPLabel* signature;	// G=0x11075d; S=0x11076d; 
@property(assign, nonatomic) __weak UILabel* experience;	// G=0x110729; S=0x110749; 
@property(retain, nonatomic) GWButtonWithImageOnRight* nickName;	// G=0x1106f1; S=0x110701; 
@property(assign, nonatomic) BOOL isYunKong;	// G=0x1106d1; S=0x1106e1; 
@property(assign, nonatomic) __weak UIButton* walletButton;	// G=0x11069d; S=0x1106bd; 
@property(assign, nonatomic) __weak id<HJMyHomeNewHeaderViewDelegate> delegate;	// G=0x110669; S=0x110689; 
@property(retain, nonatomic) NewsFeeds* newsFeeds;	// G=0x110659; S=0x10cf35; 
@property(retain, nonatomic) HJUserProfilesResponse* userInfo;	// G=0x110649; S=0x10d679; 
-(void).cxx_destruct;	// 0x110cb9
-(void)stretchZoom:(float)zoom withOffset:(float)offset;	// 0x110491
-(void)walletButtonAction:(id)action;	// 0x11037d
-(void)setBalance:(int)balance;	// 0x110215
-(id)fetchMarkImage;	// 0x10d55d
-(id)imageWithLabel:(id)label;	// 0x10d499
-(id)imageWithView:(id)view;	// 0x10d3c5
-(void)highlightLinksWithIndex:(long)index;	// 0x10d131
-(BOOL)isIndex:(long)index inRange:(NSRange)range;	// 0x10d11d
-(void)label:(id)label didCancelTouch:(id)touch;	// 0x10d109
-(void)label:(id)label didEndTouch:(id)touch onCharacterAtIndex:(long)index;	// 0x10cf61
-(void)label:(id)label didMoveTouch:(id)touch onCharacterAtIndex:(long)index;	// 0x10cf4d
-(void)label:(id)label didBeginTouch:(id)touch onCharacterAtIndex:(long)index;	// 0x10cf39
-(void)buttonAction:(id)action;	// 0x10ce09
-(void)followUser;	// 0x10c45d
-(id)headImageView;	// 0x10c39d
-(void)awakeFromNib;	// 0x10bc7d
-(void)fuzhilabel:(id)fuzhilabel;	// 0x10bb79
-(id)initWithFrame:(CGRect)frame;	// 0x10bb41
@end

