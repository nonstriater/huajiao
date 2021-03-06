/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString, NSCondition, BizContext, APayProcessor, APayRoute;

@interface AlipaySDK : XXUnknownSuperclass <UIAlertViewDelegate> {
	NSString* _schemeStr;
	NSString* _executingOrderStr;
	id _completionBlock;
	APayRoute* _route;
	APayProcessor* _processor;
	NSDictionary* _alertOkAction;
	NSDictionary* _alertCancelAction;
	BizContext* _bizContext;
	NSCondition* _tidCondition;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSCondition* tidCondition;	// G=0xce016d; S=0xce017d; 
@property(retain, nonatomic) BizContext* bizContext;	// G=0xce0135; S=0xce0145; 
@property(retain, nonatomic) NSDictionary* alertCancelAction;	// G=0xce00fd; S=0xce010d; 
@property(retain, nonatomic) NSDictionary* alertOkAction;	// G=0xce00c5; S=0xce00d5; 
@property(readonly, assign, nonatomic) APayProcessor* processor;	// G=0xce00b5; 
@property(readonly, assign, nonatomic) APayRoute* route;	// G=0xce00a5; 
@property(copy, nonatomic) id completionBlock;	// G=0xce0081; S=0xce0095; 
@property(copy, nonatomic) NSString* executingOrderStr;	// G=0xce005d; S=0xce0071; 
@property(copy, nonatomic) NSString* schemeStr;	// G=0xce0039; S=0xce004d; 
+(id)defaultService;	// 0xcdc6e5
-(void).cxx_destruct;	// 0xce01a5
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0xcdfe65
-(void)cleanInfoWhenGoPortal;	// 0xcdfe31
-(void)cleanData;	// 0xcdfdc1
-(void)processResultUrl:(id)url callback:(id)callback;	// 0xcdfa71
-(void)processAuth_V2Result:(id)result standbyCallback:(id)callback;	// 0xcdf9b1
-(void)auth_V2WithInfo:(id)info fromScheme:(id)scheme callback:(id)callback;	// 0xcdec91
-(void)authWithInfo:(id)info callback:(id)callback;	// 0xcde73d
-(void)onAdapterFinished;	// 0xcde695
-(void)queryTid;	// 0xcde309
-(id)queryTidFactor:(int)factor;	// 0xcdde11
-(id)currentVersion;	// 0xcdddf5
-(BOOL)isLogined;	// 0xcdddbd
-(id)dictionaryFromRegular:(id)regular pattern:(id)pattern;	// 0xcddbc1
-(void)processAuthResult:(id)result standbyCallback:(id)callback;	// 0xcdd96d
-(void)processOrderWithPaymentResult:(id)paymentResult standbyCallback:(id)callback;	// 0xcdd8ad
-(void)callbackWithResult:(id)result;	// 0xcdd83d
-(void)setUrl:(id)url;	// 0xcdd7e5
-(int)routeTypeWithConfig:(id)config;	// 0xcdd775
-(void)payOrder:(id)order fromScheme:(id)scheme callback:(id)callback;	// 0xcdc83d
-(id)init;	// 0xcdc771
@end

