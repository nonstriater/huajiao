/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UPHttpsConnectDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString, UPHttpsConnect;
@protocol UPMPServiceDelegate;

@interface UPMPService : XXUnknownSuperclass <UPHttpsConnectDelegate> {
	int _currentCMD;
	NSString* _queryType;
	NSTimer* _queryTimer;
	BOOL _queryTimeout;
	int _queryForType;
	UPHttpsConnect* _httpConnection;
	UPXProguardUtil* _cryptUtil;
	id<UPMPServiceDelegate> delegate;
	NSString* queryNumber;
	NSString* queryType;
	NSString* queryRequest;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* queryType;	// G=0xc583f5; S=0xc58405; 
@property(retain, nonatomic) NSString* queryNumber;	// G=0xc583bd; S=0xc583cd; 
@property(copy, nonatomic) NSString* queryRequest;	// G=0xc5842d; S=0xc58441; 
@property(assign, nonatomic) __weak id<UPMPServiceDelegate> delegate;	// G=0xc58389; S=0xc583a9; 
+(void)nowTestMode:(id)mode andKeyType:(BOOL)type;	// 0xc55209
+(void)nowTestMode:(id)mode;	// 0xc550c9
-(void).cxx_destruct;	// 0xc58471
-(id)decryptString:(id)string;	// 0xc5824d
-(id)encryptString:(id)string;	// 0xc58111
-(id)userDefaultPayMode;	// 0xc58005
-(void)storageUserDefaultPayMode:(id)mode;	// 0xc57f01
-(void)httpsConnectFailed:(id)failed;	// 0xc57ed1
-(void)httpsRecvDataFinished:(id)finished;	// 0xc57a45
-(BOOL)parseUPMPResponse:(id)response;	// 0xc57915
-(void)parseQueryResponse:(id)response;	// 0xc572a1
-(void)parseSmsResponse:(id)response;	// 0xc571c5
-(void)parseInitResponse:(id)response;	// 0xc56db1
-(void)handleNetworkError:(id)error;	// 0xc56cad
-(void)handleResponseError:(id)error;	// 0xc56aa1
-(void)handleResponseFormatError;	// 0xc569d5
-(void)startQueryWithResponse:(id)response;	// 0xc567b9
-(void)postQueryRequest:(id)request;	// 0xc565f5
-(void)postSmsRequestWithFlag:(id)flag params:(id)params;	// 0xc56455
-(void)postInitRequestWithTn:(id)tn uid:(id)uid locale:(id)locale terminalVersion:(id)version terminalResolution:(id)resolution osName:(id)name osVersion:(id)version7 deviceMode:(id)mode terminalType:(id)type;	// 0xc55ed1
-(void)postTempRequestWithCmd:(id)cmd elements:(id)elements;	// 0xc55d01
-(void)postRequestWithCmd:(id)cmd elements:(id)elements;	// 0xc55b31
-(void)postPreCmd:(id)cmd elements:(id)elements;	// 0xc55961
-(void)postHttpsRequest:(id)request;	// 0xc55939
-(void)sendFrontNotification:(id)notification to:(id)to;	// 0xc55769
-(id)dictionaryToJson:(id)json;	// 0xc5549d
-(id)getParamsFormResponse:(id)response;	// 0xc5538d
-(void)releaseCommon;	// 0xc55389
-(void)cancelCurNetwork;	// 0xc550a9
-(void)startQueryTimer;	// 0xc55021
-(void)startQuery;	// 0xc54f51
-(void)stopQueryTimerWhenTimeout;	// 0xc54f11
-(void)stopQueryTimer;	// 0xc54edd
-(id)init;	// 0xc54d69
-(void)dealloc;	// 0xc54ba1
@end
