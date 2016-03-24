/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIButton, HJImageUploadModel, UIView, NSLayoutConstraint, HJHomeContentViewController;

__attribute__((visibility("hidden")))
@interface HJNewUploadCell : XXUnknownSuperclass {
	HJImageUploadModel* _imageUploadModel;
	HJHomeContentViewController* _homevc;
	NSLayoutConstraint* _prograssHeight;
	NSLayoutConstraint* _buttonContentWidth;
	NSLayoutConstraint* _shareViewWidth;
	NSLayoutConstraint* _prograsViewWidth;
	UIButton* _tryAgainBtn;
	UIButton* _closeBtn;
	UIImageView* _image;
	UILabel* _label;
	UIView* _progressView;
	float _progress;
}
@property(assign, nonatomic) float progress;	// G=0x29cbdd; S=0x29b54d; 
@property(assign, nonatomic) __weak UIView* progressView;	// G=0x29cba9; S=0x29cbc9; 
@property(assign, nonatomic) __weak UILabel* label;	// G=0x29cb75; S=0x29cb95; 
@property(assign, nonatomic) __weak UIImageView* image;	// G=0x29cb41; S=0x29cb61; 
@property(assign, nonatomic) __weak UIButton* closeBtn;	// G=0x29cb0d; S=0x29cb2d; 
@property(assign, nonatomic) __weak UIButton* tryAgainBtn;	// G=0x29cad9; S=0x29caf9; 
@property(assign, nonatomic) __weak NSLayoutConstraint* prograsViewWidth;	// G=0x29caa5; S=0x29cac5; 
@property(assign, nonatomic) __weak NSLayoutConstraint* shareViewWidth;	// G=0x29ca71; S=0x29ca91; 
@property(assign, nonatomic) __weak NSLayoutConstraint* buttonContentWidth;	// G=0x29ca3d; S=0x29ca5d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* prograssHeight;	// G=0x29ca09; S=0x29ca29; 
@property(assign, nonatomic) __weak HJHomeContentViewController* homevc;	// G=0x29c9d5; S=0x29c9f5; 
@property(retain, nonatomic) HJImageUploadModel* imageUploadModel;	// G=0x29c9c5; S=0x29b4b1; 
-(void).cxx_destruct;	// 0x29cbed
-(void)shareToQQ:(id)qq;	// 0x29c9c1
-(void)shareToWechat:(id)wechat;	// 0x29c9bd
-(void)shareToMoment:(id)moment;	// 0x29c9b9
-(void)shareToSina:(id)sina;	// 0x29c9b5
-(void)shareInSite:(id)site;	// 0x29c9b1
-(void)tryAgain:(id)again;	// 0x29c9a1
-(void)close:(id)close;	// 0x29c991
-(void)uploadShortVideo;	// 0x29c731
-(void)uploadImage;	// 0x29be21
-(void)finishiUpload;	// 0x29baa9
-(void)uploadFailed;	// 0x29b789
-(void)startUpload;	// 0x29b5fd
-(void)awakeFromNib;	// 0x29b3b9
@end

