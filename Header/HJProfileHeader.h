/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface HJProfileHeader : XXUnknownSuperclass {
	UIImageView* _imageView;
	UIView* _coverView;
	float _offsetY;
	UIView* _bgView;
}
@property(retain, nonatomic) UIView* bgView;	// G=0x16a691; S=0x16a6a1; 
@property(assign, nonatomic) float offsetY;	// G=0x16a681; S=0x16a39d; 
@property(retain, nonatomic) UIView* coverView;	// G=0x16a649; S=0x16a659; 
@property(retain, nonatomic) UIImageView* imageView;	// G=0x16a611; S=0x16a621; 
-(void).cxx_destruct;	// 0x16a6c9
-(void)setFrame:(CGRect)frame;	// 0x16a221
-(id)initWithFrame:(CGRect)frame;	// 0x169f19
@end

