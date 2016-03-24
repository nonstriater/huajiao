/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJLiveBaseCell.h"

@class UILabel, UIImageView, UIView, HJSeedItemResponseExt;

__attribute__((visibility("hidden")))
@interface DSLiveSmallCell : HJLiveBaseCell {
	UIView* _topSeparatorLine;
	HJSeedItemResponseExt* _data;
	UIImageView* _bgImageView;
	UIView* _stateView;
	UILabel* _stateLabel;
	UIView* _imageContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _personCountContainerView;
	UIImageView* _personCountIconView;
	UILabel* _personCountLabel;
}
@property(assign, nonatomic) __weak UILabel* personCountLabel;	// G=0x28073d; S=0x28075d; 
@property(assign, nonatomic) __weak UIImageView* personCountIconView;	// G=0x280709; S=0x280729; 
@property(assign, nonatomic) __weak UIView* personCountContainerView;	// G=0x2806d5; S=0x2806f5; 
@property(assign, nonatomic) __weak UILabel* subtitleLabel;	// G=0x2806a1; S=0x2806c1; 
@property(assign, nonatomic) __weak UILabel* titleLabel;	// G=0x28066d; S=0x28068d; 
@property(assign, nonatomic) __weak UIView* imageContainerView;	// G=0x280639; S=0x280659; 
@property(assign, nonatomic) __weak UILabel* stateLabel;	// G=0x280605; S=0x280625; 
@property(assign, nonatomic) __weak UIView* stateView;	// G=0x2805d1; S=0x2805f1; 
@property(assign, nonatomic) __weak UIImageView* bgImageView;	// G=0x28059d; S=0x2805bd; 
-(id)data;	// 0x28058d
-(void).cxx_destruct;	// 0x280771
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x280425
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x2802bd
-(void)layoutSubviews;	// 0x280181
-(void)awakeFromNib;	// 0x280045
-(void)setData:(id)data;	// 0x27f709
@end
