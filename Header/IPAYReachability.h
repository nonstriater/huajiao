/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

@interface IPAYReachability : XXUnknownSuperclass {
	BOOL reachableOnWWAN;
	SCNetworkReachabilityRef reachabilityRef;
	NSObject<OS_dispatch_queue>* reachabilitySerialQueue;
	id reachableBlock;
	id unreachableBlock;
	id reachabilityObject;
}
@property(retain, nonatomic) id reachabilityObject;	// G=0xb7f56d; S=0xb7f57d; 
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* reachabilitySerialQueue;	// G=0xb7f4cd; S=0xb7f4dd; 
@property(assign, nonatomic) SCNetworkReachabilityRef reachabilityRef;	// G=0xb7f4ad; S=0xb7f4bd; 
@property(assign, nonatomic) BOOL reachableOnWWAN;	// G=0xb7f505; S=0xb7f515; 
@property(copy, nonatomic) id unreachableBlock;	// G=0xb7f549; S=0xb7f55d; 
@property(copy, nonatomic) id reachableBlock;	// G=0xb7f525; S=0xb7f539; 
+(id)reachabilityForLocalWiFi;	// 0xb7ebbd
+(id)reachabilityForInternetConnection;	// 0xb7eb71
+(id)reachabilityWithAddress:(const sockaddr_in*)address;	// 0xb7eb21
+(id)reachabilityWithHostname:(id)hostname;	// 0xb7eab5
+(id)reachabilityWithHostName:(id)hostName;	// 0xb7ea99
-(void).cxx_destruct;	// 0xb7f591
-(id)description;	// 0xb7f441
-(void)reachabilityChanged:(unsigned)changed;	// 0xb7f2f9
-(id)currentReachabilityFlags;	// 0xb7f21d
-(id)currentReachabilityString;	// 0xb7f10d
-(unsigned)reachabilityFlags;	// 0xb7f0e1
-(int)currentReachabilityStatus;	// 0xb7f09d
-(BOOL)isInterventionRequired;	// 0xb7f069
-(BOOL)isConnectionOnDemand;	// 0xb7f031
-(BOOL)connectionRequired;	// 0xb7f005
-(BOOL)isConnectionRequired;	// 0xb7eff5
-(BOOL)isReachableViaWiFi;	// 0xb7efbd
-(BOOL)isReachableViaWWAN;	// 0xb7ef85
-(BOOL)isReachable;	// 0xb7ef45
-(BOOL)isReachableWithFlags:(unsigned)flags;	// 0xb7ef11
-(void)stopNotifier;	// 0xb7ee95
-(BOOL)startNotifier;	// 0xb7ed09
-(void)dealloc;	// 0xb7ec69
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)reachabilityRef;	// 0xb7ec0d
@end
