/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIWebView;

@interface TCWebViewLoadJs : XXUnknownSuperclass <UIWebViewDelegate> {
	NSString* _key;
	NSString* _openId;
	NSString* _appId;
	UIWebView* _webView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)clear;	// 0xb41f05
+(id)getInstance;	// 0xb41eb1
-(void).cxx_destruct;	// 0xb4254d
-(void)dealloc;	// 0xb424f5
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;	// 0xb42399
-(void)webView:(id)view didFailLoadWithError:(id)error;	// 0xb42329
-(void)webViewDidFinishLoad:(id)webView;	// 0xb42199
-(void)webViewDidStartLoad:(id)webView;	// 0xb42195
-(void)loadJS:(id)js openId:(id)anId andKey:(id)key;	// 0xb41f19
@end

