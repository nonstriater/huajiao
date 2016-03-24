/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIAppearance.h"
#import "living-Structs.h"

@class UIColor, NSString, CADisplayLink, CMMotionManager, CAGradientLayer;

__attribute__((visibility("hidden")))
@interface IQ_DPMeterView : XXUnknownSuperclass <UIAppearance> {
	int _meterType;
	UIColor* _trackTintColor;
	UIColor* _progressTintColor;
	float _progress;
	CMMotionManager* _motionManager;
	CADisplayLink* _motionDisplayLink;
	float _motionLastYaw;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float motionLastYaw;	// G=0x2def19; S=0x2def29; 
@property(retain, nonatomic) CADisplayLink* motionDisplayLink;	// G=0x2deee1; S=0x2deef1; 
@property(retain, nonatomic) CMMotionManager* motionManager;	// G=0x2deea9; S=0x2deeb9; 
@property(readonly, assign, nonatomic) CAGradientLayer* gradientLayer;	// G=0x2dce9d; 
@property(assign, nonatomic) float progress;	// G=0x2dee99; S=0x2de569; 
@property(retain, nonatomic) UIColor* progressTintColor;	// G=0x2dee89; S=0x2dd565; 
@property(retain, nonatomic) UIColor* trackTintColor;	// G=0x2dee79; S=0x2dd50d; 
@property(assign, nonatomic) int meterType;	// G=0x2dee69; S=0x2dd3c9; 
+(id)intersectionPointsOfLineOrientedBy:(float)lineOrientedBy withBox:(CGRect)box;	// 0x2ddb01
+(Class)layerClass;	// 0x2dce81
-(void).cxx_destruct;	// 0x2def39
-(void)stopGravity;	// 0x2ded51
-(void)startGravity;	// 0x2deb61
-(BOOL)isGravityActive;	// 0x2deb35
-(void)motionRefresh:(id)refresh;	// 0x2de991
-(float)currentYaw;	// 0x2de929
-(void)add:(float)add animated:(BOOL)animated;	// 0x2de8e5
-(void)add:(float)add;	// 0x2de8d1
-(void)minus:(float)minus animated:(BOOL)animated;	// 0x2de88d
-(void)minus:(float)minus;	// 0x2de879
-(void)setProgress:(float)progress animated:(BOOL)animated;	// 0x2de57d
-(void)setGradientOrientationAngle:(float)angle;	// 0x2de41d
-(id)gradientPoints:(float)points;	// 0x2de289
-(float)gradientOrientationAngle;	// 0x2dd969
-(id)gradientLocations:(float)locations;	// 0x2dd8a1
-(float)rescaledProgress:(float)progress;	// 0x2dd5c1
-(void)updateGradientColors;	// 0x2dd3f1
-(CGRect)shapeBounds;	// 0x2dd365
-(void)setShape:(CGPathRef)shape;	// 0x2dd2b1
-(void)didMoveToWindow;	// 0x2dd239
-(void)initialGradientOrientation;	// 0x2dd1f5
-(void)commonInit;	// 0x2dd051
-(id)initWithFrame:(CGRect)frame shape:(CGPathRef)shape gravity:(BOOL)gravity;	// 0x2dcfc1
-(id)initWithFrame:(CGRect)frame shape:(CGPathRef)shape;	// 0x2dcf89
-(id)initWithFrame:(CGRect)frame;	// 0x2dcf5d
-(id)initWithCoder:(id)coder;	// 0x2dcf05
-(id)init;	// 0x2dcead
@end
