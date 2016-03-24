/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJTPUManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "UIApplicationDelegate.h"

@class NSString, LogOrRegiButton, NSLayoutConstraint, UIImageView, UIButton, UIWindow;
@protocol RegistAndLogViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface RegistAndLogViewController : XXUnknownSuperclass <UIApplicationDelegate, HJTPUManagerDelegate> {
	BOOL isQQlogin;
	id<RegistAndLogViewControllerDelegate> _delegate;
	UIButton* _weiboBtn;
	UIButton* _weixinBtn;
	UIImageView* _backgroundImageView;
	LogOrRegiButton* _qqBtn;
	UIButton* _qihuBtn;
	UIButton* _otherBtn;
	NSLayoutConstraint* _weiboHeight;
	NSLayoutConstraint* _weixinHeight;
	NSLayoutConstraint* _qqHeight;
	NSLayoutConstraint* _bottomPadding;
}
@property(retain, nonatomic) UIWindow* window;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak NSLayoutConstraint* bottomPadding;	// G=0x169c85; S=0x169ca5; 
@property(assign, nonatomic) __weak NSLayoutConstraint* qqHeight;	// G=0x169c51; S=0x169c71; 
@property(assign, nonatomic) __weak NSLayoutConstraint* weixinHeight;	// G=0x169c1d; S=0x169c3d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* weiboHeight;	// G=0x169be9; S=0x169c09; 
@property(assign, nonatomic) __weak UIButton* otherBtn;	// G=0x169bb5; S=0x169bd5; 
@property(assign, nonatomic) __weak UIButton* qihuBtn;	// G=0x169b81; S=0x169ba1; 
@property(assign, nonatomic) __weak LogOrRegiButton* qqBtn;	// G=0x169b4d; S=0x169b6d; 
@property(retain, nonatomic) UIImageView* backgroundImageView;	// G=0x169b15; S=0x169b25; 
@property(retain, nonatomic) UIButton* weixinBtn;	// G=0x169add; S=0x169aed; 
@property(retain, nonatomic) UIButton* weiboBtn;	// G=0x169aa5; S=0x169ab5; 
@property(assign, nonatomic) __weak id<RegistAndLogViewControllerDelegate> delegate;	// G=0x169a71; S=0x169a91; 
-(void).cxx_destruct;	// 0x169cb9
-(BOOL)shouldAutorotate;	// 0x169a6d
-(void)TPUManagerDidFinishAuthentication:(BOOL)tpumanager shouldShowRecom:(BOOL)recom;	// 0x169a41
-(void)TPUManagerDidFinishAuthentication:(BOOL)tpumanager shouldShowRecom:(BOOL)recom shouldShowHongbao:(BOOL)hongbao;	// 0x16993d
-(void)didReceiveMemoryWarning;	// 0x169911
-(void)qihuLoginPressed:(id)pressed;	// 0x169899
-(void)otherLoginPressed:(id)pressed;	// 0x1696c5
-(void)weixinLoginButtonTapped:(id)tapped;	// 0x169635
-(void)QQLoginButtonTapped:(id)tapped;	// 0x1695a5
-(void)weiboLoginButtonTapped:(id)tapped;	// 0x169515
-(void)viewWillDisappear:(BOOL)view;	// 0x169465
-(void)viewWillAppear:(BOOL)view;	// 0x169351
-(void)viewDidAppear:(BOOL)view;	// 0x169325
-(void)dealloc;	// 0x169245
-(void)doRefreshWhenTabBarChanged;	// 0x169241
-(void)handleTabBarNotification:(id)notification;	// 0x1690d9
-(void)viewDidLoad;	// 0x168a3d
-(void)cloudUpdate;	// 0x1688a9
@end
