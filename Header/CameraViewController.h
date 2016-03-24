/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UINavigationControllerDelegate.h"
#import "living-Structs.h"
#import "UIImagePickerControllerDelegate.h"

@class NSString, AVCaptureStillImageOutput, UIButton, UIView;
@protocol CameraViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CameraViewController : XXUnknownSuperclass <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
	AVCaptureStillImageOutput* captureOutput;
	CGRect headRect;
	CGRect footRect;
	UIView* _headView;
	UIView* _footView;
	id<CameraViewControllerDelegate> _delegate;
	UIButton* _startTakePhotoButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* startTakePhotoButton;	// G=0x1a2c0d; S=0x1a2c1d; 
@property(retain, nonatomic) id<CameraViewControllerDelegate> delegate;	// G=0x1a2be9; S=0x1a2bf9; 
@property(retain, nonatomic) UIView* footView;	// G=0x1a2bb1; S=0x1a2bc1; 
@property(retain, nonatomic) UIView* headView;	// G=0x1a2b79; S=0x1a2b89; 
-(void).cxx_destruct;	// 0x1a2c45
-(void)didReceiveMemoryWarning;	// 0x1a2b4d
-(void)didClickChangeOrientation:(id)orientation;	// 0x1a2ac9
-(void)didClickCamera:(id)camera;	// 0x1a2a31
-(void)didClickFinishButton:(id)button;	// 0x1a29f9
-(void)viewDidLoad;	// 0x1a29cd
-(void)viewWillAppear:(BOOL)view;	// 0x1a29a1
@end
