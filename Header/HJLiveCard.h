/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UILabel, UIImageView, NSLayoutConstraint, UITapGestureRecognizer, Feeds, UINavigationController;

__attribute__((visibility("hidden")))
@interface HJLiveCard : XXUnknownSuperclass {
	UINavigationController* _nv;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	NSLayoutConstraint* _labelWidthConstraint;
	NSArray* _allFeedsData;
	UIImageView* _img;
	UILabel* _titleLabel;
	Feeds* _data;
	UITapGestureRecognizer* _tap;
}
@property(retain, nonatomic) UITapGestureRecognizer* tap;	// G=0x29e109; S=0x29e119; 
@property(retain, nonatomic) Feeds* data;	// G=0x29e0f9; S=0x29d4e9; 
@property(assign, nonatomic) __weak UILabel* titleLabel;	// G=0x29e0c5; S=0x29e0e5; 
@property(assign, nonatomic) __weak UIImageView* img;	// G=0x29e091; S=0x29e0b1; 
@property(assign, nonatomic) __weak NSArray* allFeedsData;	// G=0x29e05d; S=0x29e07d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* labelWidthConstraint;	// G=0x29e029; S=0x29e049; 
@property(assign, nonatomic) __weak NSLayoutConstraint* imageHeightConstraint;	// G=0x29dff5; S=0x29e015; 
@property(assign, nonatomic) __weak NSLayoutConstraint* imageWidthConstraint;	// G=0x29dfc1; S=0x29dfe1; 
@property(assign, nonatomic) __weak UINavigationController* nv;	// G=0x29df8d; S=0x29dfad; 
-(void).cxx_destruct;	// 0x29e141
-(void)onTap;	// 0x29d6b9
-(void)updateConstraints;	// 0x29d415
-(void)awakeFromNib;	// 0x29d331
@end
