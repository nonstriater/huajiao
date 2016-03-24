/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface WBSDKReachability : XXUnknownSuperclass {
	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;
}
+(id)reachabilityForLocalWiFi;	// 0xd3801d
+(id)reachabilityForInternetConnection;	// 0xd37fd1
+(id)reachabilityWithAddress:(const sockaddr_in*)address;	// 0xd37f61
+(id)reachabilityWithHostName:(id)hostName;	// 0xd37ed5
-(int)currentReachabilityStatus;	// 0xd381a5
-(BOOL)connectionRequired;	// 0xd380bd
-(int)networkStatusForFlags:(unsigned)flags;	// 0xd38091
-(int)localWiFiStatusForFlags:(unsigned)flags;	// 0xd38081
-(void)dealloc;	// 0xd37e7d
-(void)stopNotifier;	// 0xd37e45
-(BOOL)startNotifier;	// 0xd37b65
@end
