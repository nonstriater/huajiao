/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, HJUserProfileInfo, UIImageView, UIButton, HJSeedAnchorResponse;

__attribute__((visibility("hidden")))
@interface HJChatingHeadView : XXUnknownSuperclass {
	HJUserProfileInfo* userProfile;
	HJSeedAnchorResponse* _anchorResponse;
	UIImageView* _userHeadView;
	UILabel* _userWelcomeView;
	UIButton* _userButton;
	UIButton* _startNewLivingButton;
	id _newLivingButtonClicked;
	id _newLivingHeadClicked;
}
@property(copy, nonatomic) id newLivingHeadClicked;	// G=0xb3add; S=0xb3af1; 
@property(copy, nonatomic) id newLivingButtonClicked;	// G=0xb3ab9; S=0xb3acd; 
@property(retain, nonatomic) UIButton* startNewLivingButton;	// G=0xb3a81; S=0xb3a91; 
@property(retain, nonatomic) UIButton* userButton;	// G=0xb3a49; S=0xb3a59; 
@property(retain, nonatomic) UILabel* userWelcomeView;	// G=0xb3a11; S=0xb3a21; 
@property(retain, nonatomic) UIImageView* userHeadView;	// G=0xb39d9; S=0xb39e9; 
@property(retain, nonatomic) HJSeedAnchorResponse* anchorResponse;	// G=0xb39a1; S=0xb39b1; 
+(id)chatingHeadViewWithFrame:(CGRect)frame anchor:(id)anchor;	// 0xb2bad
-(void).cxx_destruct;	// 0xb3b01
-(void)setHeadImageWithURL:(id)url;	// 0xb35bd
-(void)tapHead:(id)head;	// 0xb34fd
-(void)onClickNewLivingButton:(id)button;	// 0xb34d1
-(void)loadUserInfo;	// 0xb32bd
@end
