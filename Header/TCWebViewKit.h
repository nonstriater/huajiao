/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "TCWebViewControllerDelegate.h"

@class NSString, UIWindow, TCWebViewController, NSMutableArray;
@protocol TCWebViewKitDelegate;

@interface TCWebViewKit : XXUnknownSuperclass <TCWebViewControllerDelegate> {
	TCWebViewController* _webViewController;
	BOOL _isStatusBarHidden;
	BOOL _isClosing;
	NSString* _requestUrl;
	NSString* _webTitle;
	id<TCWebViewKitDelegate> _delegate;
	UIWindow* _window;
	NSMutableArray* _windowsArray;
	UIWindow* _keywindow;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* windowsArray;	// G=0xb325ed; S=0xb325fd; 
@property(retain, nonatomic) UIWindow* keywindow;	// G=0xb32621; S=0xb32631; 
@property(retain, nonatomic) UIWindow* window;	// G=0xb325b9; S=0xb325c9; 
@property(assign, nonatomic) id<TCWebViewKitDelegate> delegate;	// G=0xb32565; S=0xb32575; 
@property(retain, nonatomic) NSString* webTitle;	// G=0xb32531; S=0xb32541; 
@property(retain, nonatomic) NSString* requestUrl;	// G=0xb324fd; S=0xb3250d; 
@property(retain, nonatomic) TCWebViewController* webViewController;	// G=0xb32585; S=0xb32595; 
-(void)closeWindow;	// 0xb3243d
-(void)animationFinished:(id)finished finished:(BOOL)finished2 context:(void*)context;	// 0xb323f9
-(void)MoveWindowIntoFrame;	// 0xb32321
-(void)MoveWindowOutOfFrame:(BOOL)frame;	// 0xb321c1
-(void)MoveOhterWindowIntoFrame:(BOOL)frame;	// 0xb3216d
-(void)MoveOtherWindowOutOfFrame;	// 0xb31de5
-(BOOL)shouldAutorotateWithWebVC:(id)webVC;	// 0xb31d91
-(unsigned)supportedInterfaceOrientationsWithWebVC:(id)webVC;	// 0xb31d39
-(BOOL)webViewController:(id)controller shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0xb31cd9
-(BOOL)webViewController:(id)controller shouldStartLoadWithRequest:(id)request navigationType:(int)type;	// 0xb319a5
-(void)webViewController:(id)controller didFailLoadWithError:(id)error;	// 0xb31889
-(void)webViewController:(id)controller didCloseWithLastError:(id)lastError;	// 0xb31819
-(void)doCloseWithNotAnimation;	// 0xb317cd
-(void)doClose;	// 0xb31781
-(void)loadReqURL:(id)url webTitle:(id)title delegate:(id)delegate;	// 0xb316b1
-(id)getViewControllerWithUrl:(id)url webTitle:(id)title delegate:(id)delegate;	// 0xb31571
-(void)openWithUrl:(id)url webTitle:(id)title delegate:(id)delegate;	// 0xb31519
-(void)onClickClose;	// 0xb314e1
-(void)onClickBarButton:(id)button;	// 0xb31489
-(void)setNavigationBarHidden:(id)hidden animated:(id)animated;	// 0xb3141d
-(void)setNavigationTitle:(id)title;	// 0xb313e1
-(void)setRightNavigationBarButton:(id)button bindingJS:(id)js;	// 0xb3137d
-(void)setLeftNavigationBarButton:(id)button bindingJS:(id)js;	// 0xb31319
-(id)createNavigationBarButton:(id)button bindingJS:(id)js;	// 0xb31205
-(BOOL)open;	// 0xb30da1
-(CGRect)calcFrameByOrientation:(int)orientation;	// 0xb30cd1
-(void)dealloc;	// 0xb30bf1
-(id)initWithUrl:(id)url webTitle:(id)title delegate:(id)delegate;	// 0xb30b55
-(CGRect)screenRectOrientationIndependent;	// 0xb30ad1
@end

