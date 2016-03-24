/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJLocationManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextFieldDelegate.h"
#import "living-Structs.h"

@class NSString, HJSeedPosition, UITextField, HJSeedingStartButton, NSLayoutConstraint, UIImageView, UIButton, UIView;
@protocol HJPrepareLivingViewDelegate;

__attribute__((visibility("hidden")))
@interface HJPrepareLivingView : XXUnknownSuperclass <HJLocationManagerDelegate, UITextFieldDelegate> {
	UIView* _seperateLine;
	UIView* _shareViewContent;
	UIImageView* _coverImageView;
	id<HJPrepareLivingViewDelegate> _delegate;
	HJSeedingStartButton* _startButton;
	UITextField* _titleTextField;
	NSLayoutConstraint* _editCoverBtnLayout;
	NSLayoutConstraint* _reselectBtnLayout;
	NSLayoutConstraint* _editCoverBtnWidthLayout;
	NSLayoutConstraint* _reselectBtnWidthLayout;
	UIButton* _weiboBtn;
	UIButton* _reselectedVideoBtn;
	unsigned _coverType;
	unsigned _coverPicType;
	id _systemPhotosBlock;
	id _cameraBlock;
	id _userIconBlock;
	id _screenShotBlock;
	id _reselectVideoBlock;
	UIButton* _locationBtn;
	UIButton* _editCoverBtn;
	UIView* _editCoverBgView;
	NSLayoutConstraint* _share_top;
	NSLayoutConstraint* _title_top;
	NSLayoutConstraint* _cover_top;
	UIButton* _friendCircleBtn;
	UIButton* _weChatBtn;
	UIButton* _QQBtn;
	HJSeedPosition* _position;
	UIView* _imageCover;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UIView* imageCover;	// G=0x15291d; S=0x15293d; 
@property(retain, nonatomic) HJSeedPosition* position;	// G=0x1528e5; S=0x1528f5; 
@property(assign, nonatomic) __weak UIButton* QQBtn;	// G=0x1528b1; S=0x1528d1; 
@property(assign, nonatomic) __weak UIButton* weChatBtn;	// G=0x15287d; S=0x15289d; 
@property(assign, nonatomic) __weak UIButton* friendCircleBtn;	// G=0x152849; S=0x152869; 
@property(retain, nonatomic) NSLayoutConstraint* cover_top;	// G=0x152811; S=0x152821; 
@property(retain, nonatomic) NSLayoutConstraint* title_top;	// G=0x1527d9; S=0x1527e9; 
@property(retain, nonatomic) NSLayoutConstraint* share_top;	// G=0x1527a1; S=0x1527b1; 
@property(assign, nonatomic) __weak UIView* editCoverBgView;	// G=0x15276d; S=0x15278d; 
@property(assign, nonatomic) __weak UIButton* editCoverBtn;	// G=0x152739; S=0x152759; 
@property(assign, nonatomic) __weak UIButton* locationBtn;	// G=0x152705; S=0x152725; 
@property(copy, nonatomic) id reselectVideoBlock;	// G=0x1526e1; S=0x1526f5; 
@property(copy, nonatomic) id screenShotBlock;	// G=0x1526bd; S=0x1526d1; 
@property(copy, nonatomic) id userIconBlock;	// G=0x152699; S=0x1526ad; 
@property(copy, nonatomic) id cameraBlock;	// G=0x152675; S=0x152689; 
@property(copy, nonatomic) id systemPhotosBlock;	// G=0x152651; S=0x152665; 
@property(assign, nonatomic) unsigned coverPicType;	// G=0x152631; S=0x152641; 
@property(assign, nonatomic) unsigned coverType;	// G=0x152611; S=0x152621; 
@property(assign, nonatomic) __weak UIButton* reselectedVideoBtn;	// G=0x1525dd; S=0x1525fd; 
@property(assign, nonatomic) __weak UIButton* weiboBtn;	// G=0x1525a9; S=0x1525c9; 
@property(assign, nonatomic) __weak NSLayoutConstraint* reselectBtnWidthLayout;	// G=0x152575; S=0x152595; 
@property(assign, nonatomic) __weak NSLayoutConstraint* editCoverBtnWidthLayout;	// G=0x152541; S=0x152561; 
@property(assign, nonatomic) __weak NSLayoutConstraint* reselectBtnLayout;	// G=0x15250d; S=0x15252d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* editCoverBtnLayout;	// G=0x1524d9; S=0x1524f9; 
@property(assign, nonatomic) __weak UITextField* titleTextField;	// G=0x1524a5; S=0x1524c5; 
@property(retain, nonatomic) HJSeedingStartButton* startButton;	// G=0x15246d; S=0x15247d; 
@property(assign, nonatomic) __weak id<HJPrepareLivingViewDelegate> delegate;	// G=0x152439; S=0x152459; 
@property(assign, nonatomic) __weak UIImageView* coverImageView;	// G=0x152405; S=0x152425; 
+(id)viewFromNib;	// 0x150639
-(void).cxx_destruct;	// 0x152951
-(void)modifyAvatar;	// 0x1521b9
-(void)setCoverWithUserIcon;	// 0x1521a1
-(BOOL)textFieldShouldReturn:(id)textField;	// 0x152185
-(void)hideEditCoverView;	// 0x151e69
-(void)liveBeginBtnDidClicked:(id)liveBeginBtn;	// 0x151e65
-(void)screenShotBtnDidClicked:(id)screenShotBtn;	// 0x151da1
-(void)userIconBtnDidClicked:(id)userIconBtn;	// 0x151b85
-(void)cameraBtnDidClicked:(id)cameraBtn;	// 0x151b39
-(void)systemPhotosBtnDidClicked:(id)systemPhotosBtn;	// 0x151aed
-(void)editCoverBtnDidClicked:(id)editCoverBtn;	// 0x1518f9
-(void)shared:(id)shared;	// 0x1518f1
-(void)reselectVideoBtnDidClicked:(id)reselectVideoBtn;	// 0x1518a5
-(void)locationBtnDidClicked:(id)locationBtn;	// 0x151779
-(void)dealloc;	// 0x15170d
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;	// 0x1511d1
-(void)awakeFromNib;	// 0x150901
-(void)layoutSubviews;	// 0x1506c1
@end
