/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "IQFeatureOverlayDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class IQFeatureOverlay, UITapGestureRecognizer, IQ_DPMeterView, NSString, UIPanGestureRecognizer, UILongPressGestureRecognizer, NSTimer, AVCaptureSession, UIView;
@protocol IQMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface IQMediaView : XXUnknownSuperclass <IQFeatureOverlayDelegate, UIGestureRecognizerDelegate> {
	IQFeatureOverlay* focusView;
	IQFeatureOverlay* exposureView;
	NSTimer* updateTimer;
	UIView* overlayView;
	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	BOOL _blur;
	id<IQMediaViewDelegate> _delegate;
	AVCaptureSession* _previewSession;
	float _meteringLevel;
	int _focusMode;
	int _exposureMode;
	int _captureMode;
	IQ_DPMeterView* _levelMeter;
	CGPoint _focusPointOfInterest;
	CGPoint _exposurePointOfInterest;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain) IQ_DPMeterView* levelMeter;	// G=0xf8509; S=0xf851d; 
@property(assign, nonatomic) int captureMode;	// G=0xf84f9; S=0xf7bf9; 
@property(assign, nonatomic) CGPoint exposurePointOfInterest;	// G=0xf84dd; S=0xf81d1; 
@property(assign, nonatomic) CGPoint focusPointOfInterest;	// G=0xf84c1; S=0xf8121; 
@property(assign, nonatomic) int exposureMode;	// G=0xf84b1; S=0xf80e5; 
@property(assign, nonatomic) int focusMode;	// G=0xf84a1; S=0xf80a9; 
@property(assign, nonatomic) float meteringLevel;	// G=0xf8491; S=0xf7d89; 
@property(assign, nonatomic) BOOL blur;	// G=0xf8481; S=0xf7e29; 
@property(assign, nonatomic) __weak AVCaptureSession* previewSession;	// G=0xf8461; S=0xf7dc5; 
@property(assign, nonatomic) id<IQMediaViewDelegate> delegate;	// G=0xf8441; S=0xf8451; 
+(Class)layerClass;	// 0xf6e01
-(void).cxx_destruct;	// 0xf852d
-(void)featureOverlay:(id)overlay didEndWithCenter:(CGPoint)center;	// 0xf8281
-(void)awakeFromNib;	// 0xf7bb9
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0xf7bb5
-(void)longPressGestureRecognizer:(id)recognizer;	// 0xf7a39
-(void)panGestureRecognizer:(id)recognizer;	// 0xf78c5
-(void)tapGestureRecognizer:(id)recognizer;	// 0xf775d
-(id)initWithFrame:(CGRect)frame;	// 0xf7705
-(void)initialize;	// 0xf6e1d
@end

