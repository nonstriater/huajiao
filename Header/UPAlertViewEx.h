/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class NSString, UIImage, CALayer, UILabel, UIImageView, UIButton, UIView, UIActivityIndicatorView, UIFont;
@protocol UPAlertViewExDelegate;

@interface UPAlertViewEx : XXUnknownSuperclass {
	BOOL _loadingStyle;
	float mWidth;
	float mHeight;
	CGSize mTitleSize;
	CGSize mMsgSize;
	CGSize mImgSize;
	UIView* mBaseView;
	UIFont* mTitleFont;
	UIFont* mMsgFont;
	UIImage* mLogo;
	UIView* _opacityView;
	CALayer* _subLayer;
	UIImageView* _logoView;
	UIButton* _ok;
	UIButton* _cancel;
	UILabel* _title;
	UILabel* _message;
	UIActivityIndicatorView* _loadingView;
	UIImageView* _loadingImageView;
	id<UPAlertViewExDelegate> mDelegate;
	id button_action_block;
	NSString* ok_block_action;
	NSString* cancel_block_action;
}
@property(copy, nonatomic) NSString* cancel_block_action;	// G=0xc9f28d; S=0xc9f2a1; 
@property(copy, nonatomic) NSString* ok_block_action;	// G=0xc9f249; S=0xc9f25d; 
@property(copy, nonatomic) id button_action_block;	// G=0xc9f205; S=0xc9f219; 
-(void).cxx_destruct;	// 0xc9f2d1
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xc9eab5
-(void)buttonOKClicked:(id)clicked;	// 0xc9e9d5
-(void)buttonCancelClicked:(id)clicked;	// 0xc9e8f5
-(void)resetLayer:(id)layer;	// 0xc9e6cd
-(id)imageWithR:(float)r G:(float)g B:(float)b;	// 0xc9e665
-(id)imageWithColor:(id)color;	// 0xc9e5e5
-(void)addOKButton:(id)button cancelButton:(id)button2;	// 0xc9df45
-(void)addWaitIndicator;	// 0xc9ddf9
-(void)addMessage:(id)message waiting:(BOOL)waiting;	// 0xc9db59
-(void)addTitle:(id)title;	// 0xc9d92d
-(void)addImageView;	// 0xc9d851
-(void)addBaseView;	// 0xc9d65d
-(id)backgroundView;	// 0xc9d479
-(void)caculateSizeWithWaiting:(BOOL)waiting title:(id)title message:(id)message btnOK:(id)ok btnCancel:(id)cancel;	// 0xc9d159
-(void)dismissAlertView;	// 0xc9d149
-(void)showAlertViewWithItem:(id)item actionBlock:(id)block;	// 0xc9cf69
-(void)showAlertViewWithTitle:(id)title message:(id)message btnOk:(id)ok btnCancel:(id)cancel delegate:(id)delegate;	// 0xc9ce99
-(void)showLoadingViewWithMessage:(id)message delegate:(id)delegate;	// 0xc9cded
-(id)initWithFrame:(CGRect)frame;	// 0xc9cc35
-(void)dealloc;	// 0xc9cbc9
@end

