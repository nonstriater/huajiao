/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WBSDKWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WBSDKWebView, NSString, WBBaseRequest, UIColor, NSURL;

@interface WBSDKBasicWebViewController : XXUnknownSuperclass <WBSDKWebViewDelegate> {
	BOOL _needResponse;
	NSString* _navigationBarTitle;
	UIColor* _navigationBarTitleColor;
	UIColor* _navigationBarButtonColor;
	UIColor* _navigationBarTintColor;
	WBBaseRequest* _weibosdkRequest;
	WBSDKWebView* _webView;
	NSURL* _loadUrl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* navigationBarTitle;	// G=0xd3ee51; S=0xd3ee9d; 
@property(retain, nonatomic) UIColor* navigationBarTitleColor;	// G=0xd3ec21; S=0xd3ec89; 
@property(retain, nonatomic) UIColor* navigationBarButtonColor;	// G=0xd3ed35; S=0xd3eda5; 
@property(retain, nonatomic) UIColor* navigationBarTintColor;	// G=0xd3eb11; S=0xd3eb75; 
@property(assign, nonatomic) BOOL needResponse;	// G=0xd3f209; S=0xd3f219; 
@property(retain, nonatomic) NSURL* loadUrl;	// G=0xd3f1d1; S=0xd3f1e1; 
@property(retain, nonatomic) WBSDKWebView* webView;	// G=0xd3ef29; S=0xd3f1a9; 
@property(retain, nonatomic) WBBaseRequest* weibosdkRequest;	// G=0xd3f171; S=0xd3f181; 
-(void).cxx_destruct;	// 0xd3f229
-(void)wbsdk_webView:(id)view didPressErrorViewReloadButton:(id)button;	// 0xd3f161
-(void)wbsdk_webView:(id)view didFailLoadWithError:(id)error;	// 0xd3f15d
-(void)wbsdk_webViewDidFinishLoad:(id)wbsdk_webView;	// 0xd3f159
-(void)wbsdk_webViewDidStartLoad:(id)wbsdk_webView;	// 0xd3f155
-(BOOL)wbsdk_webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;	// 0xd3f151
-(void)closeBtnClicked;	// 0xd3f031
-(void)reload;	// 0xd3e981
-(void)startWebViewRequest;	// 0xd3e8fd
-(void)loadWebViewUrl;	// 0xd3e871
-(id)urlRequestFromWeiboSDKRequest:(id)weiboSDKRequest andExtraPara:(id)para;	// 0xd3e86d
-(void)didReceiveMemoryWarning;	// 0xd3e841
-(void)viewDidLoad;	// 0xd3e459
-(void)dealloc;	// 0xd3e3d9
-(id)initWithURL:(id)url andTitle:(id)title;	// 0xd3e349
-(id)initWithWeiboSDKRequest:(id)weiboSDKRequest;	// 0xd3e2f1
@end
