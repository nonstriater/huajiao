/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APURLConnectionOperation.h"

@class NSHTTPURLResponse, NSRecursiveLock, NSObject, NSURLRequest, NSError;
@protocol OS_dispatch_queue;

@interface APHTTPRequestOperation : APURLConnectionOperation {
	NSError* _HTTPError;
	NSObject<OS_dispatch_queue>* _successCallbackQueue;
	NSObject<OS_dispatch_queue>* _failureCallbackQueue;
}
@property(retain, nonatomic) NSRecursiveLock* lock;
@property(retain, nonatomic) NSError* HTTPError;	// G=0xce4995; S=0xce49a5; 
@property(retain, nonatomic) NSURLRequest* request;
@property(assign, nonatomic) NSObject<OS_dispatch_queue>* failureCallbackQueue;	// G=0xce49dd; S=0xce4241; 
@property(assign, nonatomic) NSObject<OS_dispatch_queue>* successCallbackQueue;	// G=0xce49cd; S=0xce421d; 
@property(readonly, assign, nonatomic) BOOL hasAcceptableContentType;	// G=0xce4115; 
@property(readonly, assign, nonatomic) BOOL hasAcceptableStatusCode;	// G=0xce3ff1; 
@property(retain, nonatomic) NSHTTPURLResponse* response;
+(BOOL)canProcessRequest:(id)request;	// 0xce48bd
+(void)addAcceptableContentTypes:(id)types;	// 0xce47a1
+(id)acceptableContentTypes;	// 0xce479d
+(void)addAcceptableStatusCodes:(id)codes;	// 0xce4609
+(id)acceptableStatusCodes;	// 0xce45e9
-(void).cxx_destruct;	// 0xce49ed
-(void)setCompletionBlockWithSuccess:(id)success failure:(id)failure;	// 0xce4265
-(void)pause;	// 0xce3d19
-(unsigned)responseStringEncoding;	// 0xce3ab9
-(id)error;	// 0xce3361
-(void)dealloc;	// 0xce3309
@end

