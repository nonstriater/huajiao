/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IQCaptureSessionDelegate.h"
#import "IQPartitionBarDelegate.h"
#import "IQMediaViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class NSOperationQueue, IQPartitionBar, IQCaptureSession, NSString, UIImageView, CADisplayLink, UIButton, IQMediaView, UIView, NSMutableArray, IQBottomContainerView;
@protocol IQMediaCaptureControllerDelegate;

__attribute__((visibility("hidden")))
@interface IQMediaCaptureController : XXUnknownSuperclass <IQCaptureSessionDelegate, IQPartitionBarDelegate, IQMediaViewDelegate> {
	int _expectedCaptureMode;
	int _expectedCameraDevice;
	CADisplayLink* displayDuratioUpdate;
	NSMutableArray* videoURLs;
	NSMutableArray* audioURLs;
	NSMutableArray* arrayImagesAttribute;
	unsigned videoCounter;
	unsigned audioCounter;
	unsigned imageCounter;
	BOOL _previousNavigationBarHidden;
	BOOL _previousStatusBarHidden;
	NSOperationQueue* operationQueue;
	BOOL _allowsCapturingMultipleItems;
	IQCaptureSession* _session;
	IQMediaView* _mediaView;
	UIView* _settingsContainerView;
	IQPartitionBar* _partitionBar;
	UIImageView* _imageViewProcessing;
	UIButton* _buttonCancel;
	UIButton* _buttonCapture;
	UIButton* _buttonToggleMedia;
	UIButton* _buttonSelect;
	UIButton* _buttonDelete;
	IQBottomContainerView* _bottomContainerView;
	UIButton* _buttonSettings;
	UIButton* _buttonFlash;
	UIButton* _buttonTorch;
	UIButton* _buttonFocus;
	UIButton* _buttonExposure;
	UIButton* _buttonToggleCamera;
	id<IQMediaCaptureControllerDelegate> _delegate;
	int _captureMode;
	int _captureDevice;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) IQCaptureSession* session;	// G=0x2ea8a1; 
@property(readonly, assign, nonatomic) UIButton* buttonDelete;	// G=0x2eb995; 
@property(readonly, assign, nonatomic) UIButton* buttonSelect;	// G=0x2eb841; 
@property(readonly, assign, nonatomic) UIButton* buttonToggleMedia;	// G=0x2eb769; 
@property(readonly, assign, nonatomic) UIButton* buttonCapture;	// G=0x2eb691; 
@property(readonly, assign, nonatomic) UIButton* buttonCancel;	// G=0x2eb585; 
@property(readonly, assign, nonatomic) UIImageView* imageViewProcessing;	// G=0x2eb4cd; 
@property(readonly, assign, nonatomic) IQPartitionBar* partitionBar;	// G=0x2eb40d; 
@property(readonly, assign, nonatomic) IQBottomContainerView* bottomContainerView;	// G=0x2eb1a9; 
@property(readonly, assign, nonatomic) UIButton* buttonToggleCamera;	// G=0x2eb0b5; 
@property(readonly, assign, nonatomic) UIButton* buttonExposure;	// G=0x2eafc1; 
@property(readonly, assign, nonatomic) UIButton* buttonFocus;	// G=0x2eaecd; 
@property(readonly, assign, nonatomic) UIButton* buttonTorch;	// G=0x2eadd9; 
@property(readonly, assign, nonatomic) UIButton* buttonFlash;	// G=0x2eaced; 
@property(readonly, assign, nonatomic) UIButton* buttonSettings;	// G=0x2eabfd; 
@property(readonly, assign, nonatomic) UIView* settingsContainerView;	// G=0x2eaa05; 
@property(readonly, assign, nonatomic) IQMediaView* mediaView;	// G=0x2ea925; 
@property(assign, nonatomic) BOOL allowsCapturingMultipleItems;	// G=0x2ebd65; S=0x2ebd75; 
@property(assign, nonatomic) int captureDevice;	// G=0x2ebd55; S=0x2e7051; 
@property(assign, nonatomic) int captureMode;	// G=0x2ebd45; S=0x2e78b5; 
@property(assign, nonatomic) id<IQMediaCaptureControllerDelegate> delegate;	// G=0x2ebd25; S=0x2ebd35; 
+(id)temporaryImageStoragePath;	// 0x2ebc3d
+(id)temporaryAudioStoragePath;	// 0x2ebb55
+(id)temporaryVideoStoragePath;	// 0x2eba6d
+(void)load;	// 0x2e4c41
-(void).cxx_destruct;	// 0x2ebd85
-(void)partitionBar:(id)bar didSelectPartitionIndex:(unsigned)index;	// 0x2ea7cd
-(void)captureSession:(id)session didFinishMediaWithInfo:(id)info error:(id)error;	// 0x2e9e89
-(void)captureSession:(id)session didUpdateMeterLevel:(float)level;	// 0x2e9e4d
-(void)mediaView:(id)view exposurePointOfInterest:(CGPoint)interest;	// 0x2e9e0d
-(void)mediaView:(id)view focusPointOfInterest:(CGPoint)interest;	// 0x2e9dcd
-(void)deleteAction:(id)action;	// 0x2e9c19
-(void)selectAction:(id)action;	// 0x2e9841
-(void)cancelAction:(id)action;	// 0x2e97ad
-(void)captureAction:(id)action;	// 0x2e8621
-(void)whiteBalance:(id)balance;	// 0x2e840d
-(void)toggleExposure:(id)exposure;	// 0x2e81fd
-(void)toggleFocus:(id)focus;	// 0x2e80a9
-(void)toggleTorch:(id)torch;	// 0x2e7f81
-(void)toggleFlash:(id)flash;	// 0x2e7d71
-(void)toggleCaptureMode:(id)mode;	// 0x2e7c9d
-(void)toggleCameraAction:(id)action;	// 0x2e7c41
-(void)setCaptureDevice:(int)device animated:(BOOL)animated;	// 0x2e78c9
-(void)setCaptureMode:(int)mode animated:(BOOL)animated;	// 0x2e7065
-(void)updateDuration;	// 0x2e6c91
-(void)updateUI;	// 0x2e5f31
-(void)showSettings:(BOOL)settings animated:(BOOL)animated;	// 0x2e5759
-(void)settingTriggerAction:(id)action;	// 0x2e5701
-(void)viewWillDisappear:(BOOL)view;	// 0x2e5571
-(void)viewWillAppear:(BOOL)view;	// 0x2e534d
-(void)viewDidLoad;	// 0x2e514d
-(void)loadView;	// 0x2e4f59
-(id)init;	// 0x2e4df9
-(void)dealloc;	// 0x2e4d39
@end

