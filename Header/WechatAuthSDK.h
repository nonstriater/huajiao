/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSData, NSString, NSMutableData, NSURLConnection;
@protocol WechatAuthAPIDelegate;

@interface WechatAuthSDK : XXUnknownSuperclass {
	NSString* _sdkVersion;
	id<WechatAuthAPIDelegate> _delegate;
	BOOL _isAuthing;
	NSURLConnection* connection;
	NSMutableData* respData;
	NSString* uuid;
	NSData* qrCodeData;
	NSString* authCode;
	NSTimer* timer;
	int lastState;
	unsigned long _retContentLength;
	unsigned long _status;
	int _httpRetStatusCode;
}
@property(assign, nonatomic) int lastState;	// G=0xcbb3d1; S=0xcbb3e1; 
@property(assign, nonatomic) int httpRetStatusCode;	// G=0xcbb451; S=0xcbb461; 
@property(assign, nonatomic) BOOL isAuthing;	// G=0xcbb431; S=0xcbb441; 
@property(retain, nonatomic) NSTimer* timer;	// G=0xcbb39d; S=0xcbb3ad; 
@property(retain, nonatomic) NSString* authCode;	// G=0xcbb369; S=0xcbb379; 
@property(retain, nonatomic) NSData* qrCodeData;	// G=0xcbb335; S=0xcbb345; 
@property(retain, nonatomic) NSString* uuid;	// G=0xcbb301; S=0xcbb311; 
@property(assign, nonatomic) unsigned long status;	// G=0xcbb411; S=0xcbb421; 
@property(assign, nonatomic) unsigned long retContentLength;	// G=0xcbb3f1; S=0xcbb401; 
@property(retain, nonatomic) NSMutableData* respData;	// G=0xcbb2cd; S=0xcbb2dd; 
@property(retain, nonatomic) NSURLConnection* connection;	// G=0xcbb299; S=0xcbb2a9; 
@property(readonly, assign, nonatomic) NSString* sdkVersion;	// G=0xcbb289; 
@property(assign, nonatomic) __weak id<WechatAuthAPIDelegate> delegate;	// G=0xcbb269; S=0xcbb279; 
-(void)connectionDidFinishLoading:(id)connection;	// 0xcbb159
-(void)connection:(id)connection didFailWithError:(id)error;	// 0xcbb0f9
-(void)connection:(id)connection didReceiveData:(id)data;	// 0xcbb0cd
-(void)connection:(id)connection didReceiveResponse:(id)response;	// 0xcbb009
-(void)handleResponse:(id)response;	// 0xcbabf1
-(void)handleGotQrcode;	// 0xcbaafd
-(void)handleError:(int)error;	// 0xcbaa81
-(void)startPolling;	// 0xcba909
-(void)stopTimeoutCheck;	// 0xcba8b5
-(void)startTimeoutCheck;	// 0xcba84d
-(BOOL)sendAuthRequest:(id)request;	// 0xcba785
-(BOOL)StopAuth;	// 0xcba76d
-(BOOL)Auth:(id)auth nonceStr:(id)str timeStamp:(id)stamp scope:(id)scope signature:(id)signature schemeData:(id)data;	// 0xcba6b5
-(void)resetConnection;	// 0xcba5fd
-(void)resetAll;	// 0xcba569
-(void)dealloc;	// 0xcba515
-(id)init;	// 0xcba479
@end

