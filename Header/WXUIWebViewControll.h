/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIWebView;
@protocol WXUIWebViewControllDelegate;

@interface WXUIWebViewControll : XXUnknownSuperclass <UIWebViewDelegate> {
	UIWebView* _webView;
	id<WXUIWebViewControllDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)webView:(id)view didFailLoadWithError:(id)error;	// 0xcbbf25
-(void)webViewDidFinishLoad:(id)webView;	// 0xcbbf21
-(void)webViewDidStartLoad:(id)webView;	// 0xcbbf1d
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;	// 0xcbbf19
-(void)dealloc;	// 0xcbbecd
-(void)refresh:(id)refresh;	// 0xcbbe61
-(void)viewDidLoad;	// 0xcbbd39
-(id)initWithDelegate:(id)delegate;	// 0xcbbcf9
@end

