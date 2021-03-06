/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DSViewController.h"

@class UIButton, SCCaptureSessionManager, UIView;

__attribute__((visibility("hidden")))
@interface HJTakePhotoViewController : DSViewController {
	BOOL _isFrontCamera;
	SCCaptureSessionManager* _captureSessionMgr;
	UIView* _preView;
	UIButton* _flashBtn;
	UIButton* _takePhotoBtn;
	UIButton* _photoLibrayBtn;
	UIButton* _cameraBtn;
	int _flashMode;
}
@property(assign, nonatomic) BOOL isFrontCamera;	// G=0x18da59; S=0x18da69; 
@property(assign, nonatomic) int flashMode;	// G=0x18da39; S=0x18da49; 
@property(assign, nonatomic) __weak UIButton* cameraBtn;	// G=0x18da05; S=0x18da25; 
@property(assign, nonatomic) __weak UIButton* photoLibrayBtn;	// G=0x18d9d1; S=0x18d9f1; 
@property(assign, nonatomic) __weak UIButton* takePhotoBtn;	// G=0x18d99d; S=0x18d9bd; 
@property(assign, nonatomic) __weak UIButton* flashBtn;	// G=0x18d969; S=0x18d989; 
@property(assign, nonatomic) __weak UIView* preView;	// G=0x18d935; S=0x18d955; 
@property(retain, nonatomic) SCCaptureSessionManager* captureSessionMgr;	// G=0x18d8fd; S=0x18d90d; 
-(void).cxx_destruct;	// 0x18da79
-(void)flashBtnAction:(id)action;	// 0x18d859
-(void)cameraBtnAction:(id)action;	// 0x18d72d
-(void)photoLibraryBtnAction:(id)action;	// 0x18d6b9
-(void)takePhotoBtnAction:(id)action;	// 0x18d479
-(void)setFlashBtnIcon;	// 0x18d389
-(void)onBack:(id)back;	// 0x18d375
-(void)dealloc;	// 0x18d331
-(void)viewWillDisappear:(BOOL)view;	// 0x18d2bd
-(void)viewWillAppear:(BOOL)view;	// 0x18d249
-(void)viewDidLoad;	// 0x18cf15
@end

