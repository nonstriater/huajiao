/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface THLabel : XXUnknownSuperclass {
	BOOL _automaticallyAdjustTextInsets;
	float _letterSpacing;
	float _lineSpacing;
	float _shadowBlur;
	float _innerShadowBlur;
	UIColor* _innerShadowColor;
	float _strokeSize;
	UIColor* _strokeColor;
	int _strokePosition;
	NSArray* _gradientColors;
	unsigned _fadeTruncatingMode;
	CGSize _innerShadowOffset;
	CGPoint _gradientStartPoint;
	CGPoint _gradientEndPoint;
	UIEdgeInsets _textInsets;
}
@property(assign, nonatomic) BOOL automaticallyAdjustTextInsets;	// G=0x39af6d; S=0x39af7d; 
@property(assign, nonatomic) UIEdgeInsets textInsets;	// G=0x39af55; S=0x39946d; 
@property(assign, nonatomic) unsigned fadeTruncatingMode;	// G=0x39af35; S=0x39af45; 
@property(assign, nonatomic) CGPoint gradientEndPoint;	// G=0x39af05; S=0x39af21; 
@property(assign, nonatomic) CGPoint gradientStartPoint;	// G=0x39aed5; S=0x39aef1; 
@property(copy, nonatomic) NSArray* gradientColors;	// G=0x39aec1; S=0x3993f9; 
@property(retain, nonatomic) UIColor* gradientEndColor;	// G=0x399209; S=0x399251; 
@property(retain, nonatomic) UIColor* gradientStartColor;	// G=0x398ff9; S=0x399075; 
@property(assign, nonatomic) int strokePosition;	// G=0x39aea1; S=0x39aeb1; 
@property(retain, nonatomic) UIColor* strokeColor;	// G=0x39ae69; S=0x39ae79; 
@property(assign, nonatomic) float strokeSize;	// G=0x39ae49; S=0x39ae59; 
@property(retain, nonatomic) UIColor* innerShadowColor;	// G=0x39ae11; S=0x39ae21; 
@property(assign, nonatomic) CGSize innerShadowOffset;	// G=0x39ade1; S=0x39adfd; 
@property(assign, nonatomic) float innerShadowBlur;	// G=0x39adc1; S=0x39add1; 
@property(assign, nonatomic) float shadowBlur;	// G=0x39adb1; S=0x398fd9; 
@property(assign, nonatomic) float lineSpacing;	// G=0x39ad91; S=0x39ada1; 
@property(assign, nonatomic) float letterSpacing;	// G=0x39ad71; S=0x39ad81; 
-(void).cxx_destruct;	// 0x39af8d
-(CGImageRef)linearGradientImageWithRect:(CGRect)rect fadeHead:(BOOL)head fadeTail:(BOOL)tail;	// 0x39ab75
-(CGImageRef)strokeImageWithRect:(CGRect)rect frameRef:(CTFrameRef)ref strokeSize:(float)size strokeColor:(id)color;	// 0x39aa61
-(CGImageRef)inverseMaskFromAlphaMask:(CGImageRef)alphaMask withRect:(CGRect)rect;	// 0x39a9b9
-(UIEdgeInsets)fittingTextInsets;	// 0x39a72d
-(CGRect)textRectFromContentRect:(CGRect)contentRect framesetterRef:(CTFramesetterRef)ref;	// 0x39a429
-(CGRect)contentRectFromSize:(CGSize)size withInsets:(UIEdgeInsets)insets;	// 0x39a3dd
-(unsigned char)CTTextAlignmentFromNSTextAlignment:(int)nstextAlignment;	// 0x39a3c1
-(CTFrameRef)frameRefFromSize:(CGSize)size textRectOutput:(CGRect*)output;	// 0x39a011
-(void)drawRect:(CGRect)rect;	// 0x399559
-(float)strokeSizeDependentOnStrokePosition;	// 0x399519
-(CGSize)intrinsicContentSize;	// 0x398e15
-(CGSize)sizeThatFits:(CGSize)fits;	// 0x398df5
-(BOOL)hasFadeTruncating;	// 0x398dd9
-(BOOL)hasGradient;	// 0x398d99
-(BOOL)hasStroke;	// 0x398cfd
-(BOOL)hasInnerShadow;	// 0x398be1
-(BOOL)hasShadow;	// 0x398ac5
-(void)setDefaults;	// 0x398a41
-(id)initWithCoder:(id)coder;	// 0x3989fd
-(id)initWithFrame:(CGRect)frame;	// 0x398971
@end

