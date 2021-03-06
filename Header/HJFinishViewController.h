/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DSViewController.h"

@class UIImage, Feeds, NSLayoutConstraint, UILabel, UIImageView, UIButton, UIView, HJLivingShareView, HJLiveCloseParamsModel;
@protocol HJFinishViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface HJFinishViewController : DSViewController {
	UIButton* _avatarImageButton;
	UILabel* nickName;
	UILabel* signature;
	UILabel* consCountLabel;
	UILabel* consCount;
	UILabel* liveTime;
	UILabel* audience;
	UILabel* praiseCount;
	UIView* shareContent;
	UIView* _bgView;
	Feeds* _feeds;
	UIButton* _exitButton;
	BOOL hasFinishedReplay;
	UIImage* _shareSnap;
	HJLivingShareView* livingShareView;
	UIView* _headView;
	NSLayoutConstraint* consT;
	NSLayoutConstraint* timeT;
	NSLayoutConstraint* shareT;
	NSLayoutConstraint* avatarT;
	NSLayoutConstraint* signatureT;
	NSLayoutConstraint* consB;
	NSLayoutConstraint* audienceT;
	NSLayoutConstraint* shareContentT;
	id<HJFinishViewControllerDelegate> _delegate;
	HJLiveCloseParamsModel* _liveCloseParamsModel;
	int _dataCount;
	UIImageView* _bottomMaskView;
}
@property(retain, nonatomic) UIImageView* bottomMaskView;	// G=0xd7831; S=0xd7841; 
@property(assign, nonatomic) int dataCount;	// G=0xd7811; S=0xd7821; 
@property(retain, nonatomic) HJLiveCloseParamsModel* liveCloseParamsModel;	// G=0xd77d9; S=0xd77e9; 
@property(assign, nonatomic) __weak id<HJFinishViewControllerDelegate> delegate;	// G=0xd77a5; S=0xd77c5; 
+(id)createFinishVC;	// 0xd5289
-(void).cxx_destruct;	// 0xd7869
-(void)updateFramesWithKeyboardNotification:(id)keyboardNotification;	// 0xd72cd
-(void)handleAction:(id)action;	// 0xd7269
-(void)setupUI;	// 0xd66c1
-(id)createLogoView;	// 0xd6029
-(id)shareImage;	// 0xd5cdd
-(id)imageWithScreenContents;	// 0xd5bdd
-(void)viewDidLoad;	// 0xd5b89
-(void)viewWillDisappear:(BOOL)view;	// 0xd5b25
-(void)viewWillAppear:(BOOL)view;	// 0xd5ac1
-(void)dismissFinishView;	// 0xd5971
-(void)showFinishInView:(id)view With:(id)with;	// 0xd52e9
-(id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0xd5241
@end

