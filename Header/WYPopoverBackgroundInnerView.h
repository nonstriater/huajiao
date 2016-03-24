/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface WYPopoverBackgroundInnerView : XXUnknownSuperclass {
	BOOL wantsDefaultContentAppearance;
	UIColor* innerStrokeColor;
	UIColor* gradientTopColor;
	UIColor* gradientBottomColor;
	float gradientHeight;
	float gradientTopPosition;
	UIColor* innerShadowColor;
	float innerShadowBlurRadius;
	float innerCornerRadius;
	float navigationBarHeight;
	float borderWidth;
	CGSize innerShadowOffset;
}
@property(assign, nonatomic) float borderWidth;	// G=0x330445; S=0x330455; 
@property(assign, nonatomic) BOOL wantsDefaultContentAppearance;	// G=0x330425; S=0x330435; 
@property(assign, nonatomic) float navigationBarHeight;	// G=0x330405; S=0x330415; 
@property(assign, nonatomic) float innerCornerRadius;	// G=0x3303e5; S=0x3303f5; 
@property(assign, nonatomic) float innerShadowBlurRadius;	// G=0x3303c5; S=0x3303d5; 
@property(assign, nonatomic) CGSize innerShadowOffset;	// G=0x330395; S=0x3303b1; 
@property(retain, nonatomic) UIColor* innerShadowColor;	// G=0x33035d; S=0x33036d; 
@property(assign, nonatomic) float gradientTopPosition;	// G=0x33033d; S=0x33034d; 
@property(assign, nonatomic) float gradientHeight;	// G=0x33031d; S=0x33032d; 
@property(retain, nonatomic) UIColor* gradientBottomColor;	// G=0x3302e5; S=0x3302f5; 
@property(retain, nonatomic) UIColor* gradientTopColor;	// G=0x3302ad; S=0x3302bd; 
@property(retain, nonatomic) UIColor* innerStrokeColor;	// G=0x330275; S=0x330285; 
-(void).cxx_destruct;	// 0x330465
-(void)dealloc;	// 0x3301f5
-(void)drawRect:(CGRect)rect;	// 0x32fd55
-(id)initWithFrame:(CGRect)frame;	// 0x32fcc9
@end

