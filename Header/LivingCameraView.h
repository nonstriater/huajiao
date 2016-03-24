/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIImageView, UIButton, UIView;
@protocol LivingCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface LivingCameraView : XXUnknownSuperclass {
	UIImageView* _snapshotView;
	UIButton* _closeImageButton;
	UIView* _lineView;
	UIView* _maskView;
	UIView* alphaMask;
	UIImage* _cameraImage;
	unsigned _buttonState;
	UIButton* _timeButton;
	id<LivingCameraViewDelegate> _delegate;
	UIButton* _cameraButton;
}
@property(retain, nonatomic) UIButton* cameraButton;	// G=0x2fd939; S=0x2fd881; 
@property(assign, nonatomic) __weak id<LivingCameraViewDelegate> delegate;	// G=0x2fd905; S=0x2fd925; 
@property(retain, nonatomic) UIButton* timeButton;	// G=0x2fd8cd; S=0x2fd8dd; 
@property(assign, nonatomic) unsigned buttonState;	// G=0x2fd8bd; S=0x2fce49; 
@property(retain, nonatomic) UIImage* cameraImage;	// G=0x2fd885; S=0x2fd895; 
-(void).cxx_destruct;	// 0x2fd949
-(void)createCameraButton;	// 0x2fd6e1
-(void)showSnapshot;	// 0x2fd69d
-(void)hideSnapshot;	// 0x2fd645
-(void)btnAction:(id)action;	// 0x2fd53d
-(void)closeThumbnailButton;	// 0x2fd51d
-(void)drawRect:(CGRect)rect;	// 0x2fd0c9
-(void)createCloseButton;	// 0x2fcd1d
-(void)createSnapshot;	// 0x2fc8d9
-(void)setThumbnailWithImage:(id)image;	// 0x2fc841
-(id)init;	// 0x2fc6a9
@end
