/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TencentRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, TCAPIRequest, TencentRequest;
@protocol APIBaseDelegate;

@interface APIBase : XXUnknownSuperclass <TencentRequestDelegate> {
	TencentRequest* _request;
	NSString* _httpMethod;
	id _target;
	SEL _selector;
	int _seq;
	id<APIBaseDelegate> _delegate;
	id _userData;
	TCAPIRequest* _cgiRequest;
	int _needTriedCounts;
	int _hasTriedCounts;
	BOOL _allowProgress;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int hasTriedCounts;	// G=0xb2d299; S=0xb2d2a9; 
@property(assign, nonatomic) int needTriedCounts;	// G=0xb2d289; S=0xb2c549; 
@property(assign, nonatomic) BOOL allowProgress;	// G=0xb2d2b9; S=0xb2d2c9; 
@property(retain, nonatomic) TCAPIRequest* cgiRequest;	// G=0xb2d255; S=0xb2d265; 
@property(retain, nonatomic) id userData;	// G=0xb2d221; S=0xb2d231; 
@property(assign, nonatomic) id<APIBaseDelegate> delegate;	// G=0xb2d201; S=0xb2d211; 
@property(assign, nonatomic) int seq;	// G=0xb2d1e1; S=0xb2d1f1; 
@property(assign, nonatomic) SEL selector;	// G=0xb2d18d; S=0xb2d19d; 
@property(assign, nonatomic) id target;	// G=0xb2d16d; S=0xb2d17d; 
@property(retain, nonatomic) NSString* httpMethod;	// G=0xb2d1ad; S=0xb2d1bd; 
+(int)getApiBaseSeq;	// 0xb2c561
-(id)parsePermissionFromURL:(id)url;	// 0xb2d059
-(void)request:(id)request didLoad:(id)load dat:(id)dat;	// 0xb2cc4d
-(void)request:(id)request didReceiveResponse:(id)response;	// 0xb2cc49
-(void)request:(id)request didFailWithError:(id)error;	// 0xb2cb09
-(void)request:(id)request didWriteData:(long long)data totalBytesWritten:(long long)written expectedTotalBytes:(long long)bytes;	// 0xb2cab1
-(void)request:(id)request didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0xb2ca59
-(void)dealloc;	// 0xb2c979
-(void)cancel;	// 0xb2c915
-(id)openUrlBySkey:(id)skey skey:(id)skey2 uin:(id)uin appid:(id)appid params:(id)params;	// 0xb2c739
-(id)openUrl:(id)url token:(id)token openid:(id)openid appid:(id)appid params:(id)params;	// 0xb2c571
-(id)initWithTarget:(id)target andSelector:(SEL)selector andHttpMethod:(id)method andAPIBaseDelegate:(id)delegate andUserData:(id)data;	// 0xb2c441
-(id)initWithTarget:(id)target andSelector:(SEL)selector andHttpMethod:(id)method andUserData:(id)data;	// 0xb2c351
@end

