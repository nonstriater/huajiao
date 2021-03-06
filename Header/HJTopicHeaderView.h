/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, NSLayoutConstraint, HJTopicInfo;

__attribute__((visibility("hidden")))
@interface HJTopicHeaderView : XXUnknownSuperclass {
	HJTopicInfo* _data;
	UILabel* _contentLabel;
	NSLayoutConstraint* _bgViewHeight;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _videoCountLabel;
	UILabel* _userCountLabel;
	UIImageView* _blurView;
}
@property(assign, nonatomic) __weak UIImageView* blurView;	// G=0x199b2d; S=0x199b4d; 
@property(assign, nonatomic) __weak UILabel* userCountLabel;	// G=0x199af9; S=0x199b19; 
@property(assign, nonatomic) __weak UILabel* videoCountLabel;	// G=0x199ac5; S=0x199ae5; 
@property(assign, nonatomic) __weak UILabel* titleLabel;	// G=0x199a91; S=0x199ab1; 
@property(assign, nonatomic) __weak UIImageView* iconView;	// G=0x199a5d; S=0x199a7d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* bgViewHeight;	// G=0x199a29; S=0x199a49; 
@property(assign, nonatomic) __weak UILabel* contentLabel;	// G=0x1999f5; S=0x199a15; 
@property(retain, nonatomic) HJTopicInfo* data;	// G=0x1999e5; S=0x1995c5; 
+(id)headerView;	// 0x1994a5
-(void).cxx_destruct;	// 0x199b61
-(void)layoutSubviews;	// 0x199981
-(void)awakeFromNib;	// 0x19952d
@end

