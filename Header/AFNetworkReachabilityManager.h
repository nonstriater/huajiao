/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AFNetworkReachabilityManager : XXUnknownSuperclass {
	int _networkReachabilityStatus;
	SCNetworkReachabilityRef _networkReachability;
	unsigned _networkReachabilityAssociation;
	id _networkReachabilityStatusBlock;
}
@property(copy, nonatomic) id networkReachabilityStatusBlock;	// G=0x37d699; S=0x37d6ad; 
@property(assign, nonatomic) unsigned networkReachabilityAssociation;	// G=0x37d679; S=0x37d689; 
@property(assign, nonatomic) SCNetworkReachabilityRef networkReachability;	// G=0x37d659; S=0x37d669; 
@property(readonly, assign, nonatomic, getter=isReachableViaWiFi) BOOL reachableViaWiFi;	// G=0x37d001; 
@property(readonly, assign, nonatomic, getter=isReachableViaWWAN) BOOL reachableViaWWAN;	// G=0x37cfe5; 
@property(readonly, assign, nonatomic, getter=isReachable) BOOL reachable;	// G=0x37cfa5; 
@property(assign, nonatomic) int networkReachabilityStatus;	// G=0x37d639; S=0x37d649; 
+(id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x37d56d
+(id)managerForAddress:(const void*)address;	// 0x37ce79
+(id)managerForDomain:(id)domain;	// 0x37cdf1
+(id)sharedManager;	// 0x37cd09
-(void).cxx_destruct;	// 0x37d6bd
-(void)setReachabilityStatusChangeBlock:(id)block;	// 0x37d55d
-(id)localizedNetworkReachabilityStatusString;	// 0x37d541
-(void)stopMonitoring;	// 0x37d4f5
-(void)startMonitoring;	// 0x37d021
-(void)dealloc;	// 0x37cf4d
-(id)initWithReachability:(SCNetworkReachabilityRef)reachability;	// 0x37ced9
@end

