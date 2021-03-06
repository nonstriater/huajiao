/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, WYPopoverBackgroundInnerView, UIColor;
@protocol WYPopoverBackgroundViewDelegate;

__attribute__((visibility("hidden")))
@interface WYPopoverBackgroundView : XXUnknownSuperclass {
	WYPopoverBackgroundInnerView* innerView;
	CGSize contentSize;
	BOOL wantsDefaultContentAppearance;
	BOOL _appearing;
	UIColor* tintColor;
	UIColor* fillTopColor;
	UIColor* fillBottomColor;
	UIColor* glossShadowColor;
	unsigned glossShadowBlurRadius;
	unsigned borderWidth;
	unsigned arrowBase;
	unsigned arrowHeight;
	UIColor* outerShadowColor;
	UIColor* outerStrokeColor;
	unsigned outerShadowBlurRadius;
	unsigned outerCornerRadius;
	unsigned minOuterCornerRadius;
	UIColor* innerShadowColor;
	UIColor* innerStrokeColor;
	unsigned innerShadowBlurRadius;
	unsigned innerCornerRadius;
	unsigned arrowDirection;
	UIView* contentView;
	float arrowOffset;
	float navigationBarHeight;
	UIColor* _overlayColor;
	id<WYPopoverBackgroundViewDelegate> _delegate;
	CGSize glossShadowOffset;
	CGSize outerShadowOffset;
	CGSize innerShadowOffset;
	UIEdgeInsets viewContentInsets;
	UIEdgeInsets outerShadowInsets;
}
@property(assign, nonatomic, getter=isAppearing) BOOL appearing;	// G=0x333779; S=0x333789; 
@property(assign, nonatomic) BOOL wantsDefaultContentAppearance;	// G=0x333701; S=0x333711; 
@property(assign, nonatomic) float arrowOffset;	// G=0x3336e1; S=0x330b95; 
@property(readonly, assign, nonatomic) UIEdgeInsets outerShadowInsets;	// G=0x330ac9; 
@property(readonly, assign, nonatomic) float navigationBarHeight;	// G=0x3336f1; 
@property(readonly, assign, nonatomic) UIView* contentView;	// G=0x3336d1; 
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x3336b1; S=0x3336c1; 
@property(assign, nonatomic) id<WYPopoverBackgroundViewDelegate> delegate;	// G=0x333759; S=0x333769; 
@property(retain, nonatomic) UIColor* overlayColor;	// G=0x333721; S=0x333731; 
@property(assign, nonatomic) UIEdgeInsets viewContentInsets;	// G=0x333675; S=0x33368d; 
@property(assign, nonatomic) unsigned innerCornerRadius;	// G=0x333655; S=0x333665; 
@property(assign, nonatomic) CGSize innerShadowOffset;	// G=0x333625; S=0x333641; 
@property(assign, nonatomic) unsigned innerShadowBlurRadius;	// G=0x333605; S=0x333615; 
@property(retain, nonatomic) UIColor* innerStrokeColor;	// G=0x3335cd; S=0x3335dd; 
@property(retain, nonatomic) UIColor* innerShadowColor;	// G=0x333595; S=0x3335a5; 
@property(assign, nonatomic) unsigned minOuterCornerRadius;	// G=0x333575; S=0x333585; 
@property(assign, nonatomic) unsigned outerCornerRadius;	// G=0x333555; S=0x333565; 
@property(assign, nonatomic) CGSize outerShadowOffset;	// G=0x333525; S=0x333541; 
@property(assign, nonatomic) unsigned outerShadowBlurRadius;	// G=0x333505; S=0x333515; 
@property(retain, nonatomic) UIColor* outerStrokeColor;	// G=0x3334cd; S=0x3334dd; 
@property(retain, nonatomic) UIColor* outerShadowColor;	// G=0x333495; S=0x3334a5; 
@property(assign, nonatomic) unsigned arrowHeight;	// G=0x333475; S=0x333485; 
@property(assign, nonatomic) unsigned arrowBase;	// G=0x333455; S=0x333465; 
@property(assign, nonatomic) unsigned borderWidth;	// G=0x333435; S=0x333445; 
@property(assign, nonatomic) unsigned glossShadowBlurRadius;	// G=0x333415; S=0x333425; 
@property(assign, nonatomic) CGSize glossShadowOffset;	// G=0x3333e5; S=0x333401; 
@property(retain, nonatomic) UIColor* glossShadowColor;	// G=0x3333ad; S=0x3333bd; 
@property(retain, nonatomic) UIColor* fillBottomColor;	// G=0x333375; S=0x333385; 
@property(retain, nonatomic) UIColor* fillTopColor;	// G=0x33333d; S=0x33334d; 
@property(retain, nonatomic) UIColor* tintColor;	// G=0x333305; S=0x333315; 
-(void).cxx_destruct;	// 0x333799
-(void)dealloc;	// 0x33320d
-(BOOL)isTouchedAtPoint:(CGPoint)point;	// 0x33318d
-(CGRect)arrowRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x332f79
-(CGRect)innerRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x332dfd
-(CGRect)outerRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x332c85
-(CGRect)arrowRect;	// 0x332be9
-(CGRect)innerRect;	// 0x332b4d
-(CGRect)outerRect;	// 0x332ab1
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x331749
-(void)setNeedsDisplay;	// 0x331445
-(void)sizeToFit;	// 0x3313e5
-(CGSize)sizeThatFits:(CGSize)fits;	// 0x331309
-(void)setViewController:(id)controller;	// 0x330db1
-(void)touchesBegan:(id)began withEvent:(id)event;	// 0x3309d9
-(id)initWithContentSize:(CGSize)contentSize;	// 0x330795
@end

