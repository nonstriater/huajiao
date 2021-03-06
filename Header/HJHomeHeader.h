/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIButton, UIView, UIViewController, NSLayoutConstraint, Feeds;

__attribute__((visibility("hidden")))
@interface HJHomeHeader : XXUnknownSuperclass {
	Feeds* _feed;
	UIViewController* _homeVc;
	NSLayoutConstraint* _titleMarginTop;
	UIView* _mainContent;
	UILabel* _timeLabel;
	UILabel* _titleLabel;
	UILabel* _locationLabel;
	UIButton* _avatarBtn;
}
@property(assign, nonatomic) __weak UIButton* avatarBtn;	// G=0xfbd2d; S=0xfbd4d; 
@property(assign, nonatomic) __weak UILabel* locationLabel;	// G=0xfbcf9; S=0xfbd19; 
@property(assign, nonatomic) __weak UILabel* titleLabel;	// G=0xfbcc5; S=0xfbce5; 
@property(assign, nonatomic) __weak UILabel* timeLabel;	// G=0xfbc91; S=0xfbcb1; 
@property(assign, nonatomic) __weak UIView* mainContent;	// G=0xfbc5d; S=0xfbc7d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* titleMarginTop;	// G=0xfbc29; S=0xfbc49; 
@property(assign, nonatomic) __weak UIViewController* homeVc;	// G=0xfbbf5; S=0xfbc15; 
@property(retain, nonatomic) Feeds* feed;	// G=0xfbbe5; S=0xfb085; 
-(void).cxx_destruct;	// 0xfbd61
-(void)avatarClick:(id)click;	// 0xfb92d
-(void)addSeporator;	// 0xfb7e5
-(void)setup;	// 0xfadbd
-(void)awakeFromNib;	// 0xfad7d
@end

