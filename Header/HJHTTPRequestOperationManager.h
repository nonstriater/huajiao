/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AFHTTPRequestOperationManager.h"


__attribute__((visibility("hidden")))
@interface HJHTTPRequestOperationManager : AFHTTPRequestOperationManager {
	double _timeoutTime;
}
@property(assign, nonatomic) double timeoutTime;	// G=0x298c0d; S=0x298c25; 
-(id)POST:(id)post parameters:(id)parameters constructingBodyWithBlock:(id)block progress:(id)progress success:(id)success failure:(id)failure;	// 0x2987c1
-(id)requestNeedAddTimeOut;	// 0x298765
-(id)HTTPRequestOperationWithHTTPMethod:(id)httpmethod URLString:(id)string parameters:(id)parameters success:(id)success failure:(id)failure;	// 0x298359
-(id)initWithBaseURL:(id)baseURL;	// 0x2982a5
@end
