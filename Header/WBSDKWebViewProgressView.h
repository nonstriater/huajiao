/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIColor, WBProgressComponentView;

@interface WBSDKWebViewProgressView : XXUnknownSuperclass {
	BOOL _autoSetCornerRadiusToHalfHeight;
	BOOL _animateFromCurrentState;
	WBProgressComponentView* _container;
	WBProgressComponentView* _fillView;
	float _cornerRadius;
	float _progress;
	UIEdgeInsets _progressEdgeInsets;
}
@property(assign, nonatomic) BOOL animateFromCurrentState;	// G=0xd25635; S=0xd25645; 
@property(retain, nonatomic) WBProgressComponentView* fillView;	// G=0xd25595; S=0xd255a5; 
@property(retain, nonatomic) WBProgressComponentView* container;	// G=0xd2555d; S=0xd2556d; 
@property(assign, nonatomic) BOOL autoSetCornerRadiusToHalfHeight;	// G=0xd255e5; S=0xd255f5; 
@property(assign, nonatomic) float progress;	// G=0xd25625; S=0xd24cc5; 
@property(retain, nonatomic) UIImage* progressImage;	// G=0xd25349; S=0xd252f9; 
@property(retain, nonatomic) UIImage* containerImage;	// G=0xd252b1; S=0xd25261; 
@property(retain, nonatomic) UIColor* borderColor;	// G=0xd251d9; S=0xd25149; 
@property(retain, nonatomic) UIColor* containerColor;	// G=0xd25101; S=0xd250b1; 
@property(retain, nonatomic) UIColor* progressColor;	// G=0xd25069; S=0xd25019; 
@property(assign, nonatomic) UIEdgeInsets progressEdgeInsets;	// G=0xd255cd; S=0xd24f7d; 
@property(assign, nonatomic) float cornerRadius;	// G=0xd25605; S=0xd25615; 
@property(assign, nonatomic) float borderWidth;	// G=0xd24f21; S=0xd24ec5; 
-(void).cxx_destruct;	// 0xd25655
-(void)setContainerShadowColor:(id)color offset:(CGSize)offset radius:(float)radius opacity:(float)opacity;	// 0xd254c5
-(void)setProgressShadowColor:(id)color offset:(CGSize)offset radius:(float)radius opacity:(float)opacity;	// 0xd2542d
-(void)setShadowColor:(id)color offset:(CGSize)offset radius:(float)radius opacity:(float)opacity forLayer:(id)layer;	// 0xd25391
-(void)setProgress:(float)progress animationDuration:(double)duration completion:(id)completion;	// 0xd24d49
-(void)setProgress:(float)progress animated:(BOOL)animated completion:(id)completion;	// 0xd24d01
-(void)setProgress:(float)progress animated:(BOOL)animated;	// 0xd24cd9
-(void)resetProgress;	// 0xd24c21
-(void)_setProgress:(float)progress;	// 0xd24b6d
-(void)setFrame:(CGRect)frame;	// 0xd24ac9
-(void)layoutSubviews;	// 0xd2488d
-(CGRect)fillViewFrame;	// 0xd24741
-(float)validCornerRadiusForView:(id)view;	// 0xd246ad
-(id)initWithFrame:(CGRect)frame;	// 0xd24469
@end
