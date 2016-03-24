/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class AFHTTPResponseSerializer, NSOperationQueue, NSURLCredential, AFSecurityPolicy, AFHTTPRequestSerializer, NSObject, NSURL, AFNetworkReachabilityManager;
@protocol OS_dispatch_group, OS_dispatch_queue, AFURLRequestSerialization, AFURLResponseSerialization;

__attribute__((visibility("hidden")))
@interface AFHTTPRequestOperationManager : XXUnknownSuperclass <NSSecureCoding, NSCopying> {
	BOOL _shouldUseCredentialStorage;
	NSURL* _baseURL;
	AFHTTPRequestSerializer<AFURLRequestSerialization>* _requestSerializer;
	AFHTTPResponseSerializer<AFURLResponseSerialization>* _responseSerializer;
	NSOperationQueue* _operationQueue;
	NSURLCredential* _credential;
	AFSecurityPolicy* _securityPolicy;
	AFNetworkReachabilityManager* _reachabilityManager;
	NSObject<OS_dispatch_queue>* _completionQueue;
	NSObject<OS_dispatch_group>* _completionGroup;
}
@property(retain, nonatomic) NSObject<OS_dispatch_group>* completionGroup;	// G=0xb9ed1; S=0xb9ee1; 
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* completionQueue;	// G=0xb9e99; S=0xb9ea9; 
@property(retain, nonatomic) AFNetworkReachabilityManager* reachabilityManager;	// G=0xb9e61; S=0xb9e71; 
@property(retain, nonatomic) AFSecurityPolicy* securityPolicy;	// G=0xb9e29; S=0xb9e39; 
@property(retain, nonatomic) NSURLCredential* credential;	// G=0xb9df1; S=0xb9e01; 
@property(assign, nonatomic) BOOL shouldUseCredentialStorage;	// G=0xb9dd1; S=0xb9de1; 
@property(retain, nonatomic) NSOperationQueue* operationQueue;	// G=0xb9d99; S=0xb9da9; 
@property(retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization>* responseSerializer;	// G=0xb9d89; S=0xb8d4d; 
@property(retain, nonatomic) AFHTTPRequestSerializer<AFURLRequestSerialization>* requestSerializer;	// G=0xb9d79; S=0xb8d25; 
@property(retain, nonatomic) NSURL* baseURL;	// G=0xb9d41; S=0xb9d51; 
+(BOOL)supportsSecureCoding;	// 0xb99d1
+(id)manager;	// 0xb8a79
-(void).cxx_destruct;	// 0xb9f09
-(id)copyWithZone:(NSZone*)zone;	// 0xb9c39
-(void)encodeWithCoder:(id)coder;	// 0xb9b45
-(id)initWithCoder:(id)coder;	// 0xb99d5
-(id)description;	// 0xb98f5
-(id)DELETE:(id)aDelete parameters:(id)parameters success:(id)success failure:(id)failure;	// 0xb9849
-(id)PATCH:(id)patch parameters:(id)parameters success:(id)success failure:(id)failure;	// 0xb979d
-(id)PUT:(id)put parameters:(id)parameters success:(id)success failure:(id)failure;	// 0xb96f1
-(id)POST:(id)post parameters:(id)parameters constructingBodyWithBlock:(id)block success:(id)success failure:(id)failure;	// 0xb9431
-(id)POST:(id)post parameters:(id)parameters success:(id)success failure:(id)failure;	// 0xb9385
-(id)HEAD:(id)head parameters:(id)parameters success:(id)success failure:(id)failure;	// 0xb924d
-(id)GET:(id)get parameters:(id)parameters success:(id)success failure:(id)failure;	// 0xb91a1
-(id)HTTPRequestOperationWithRequest:(id)request success:(id)success failure:(id)failure;	// 0xb8fe9
-(id)HTTPRequestOperationWithHTTPMethod:(id)httpmethod URLString:(id)string parameters:(id)parameters success:(id)success failure:(id)failure;	// 0xb8d75
-(id)initWithBaseURL:(id)baseURL;	// 0xb8abd
-(id)init;	// 0xb8aa9
@end
