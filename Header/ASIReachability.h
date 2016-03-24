/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ASIReachability : XXUnknownSuperclass {
	BOOL _alwaysReturnLocalWiFiStatus;
	SCNetworkReachabilityRef _reachabilityRef;
}
+(id)reachabilityForLocalWiFi;	// 0x9db371
+(id)reachabilityForInternetConnection;	// 0x9db325
+(id)reachabilityWithAddress:(const sockaddr_in*)address;	// 0x9db2b5
+(id)reachabilityWithHostName:(id)hostName;	// 0x9db229
-(int)currentReachabilityStatus;	// 0x9db815
-(BOOL)connectionRequired;	// 0x9db729
-(int)networkStatusForFlags:(unsigned)flags;	// 0x9db6e5
-(int)localWiFiStatusForFlags:(unsigned)flags;	// 0x9db621
-(void)dealloc;	// 0x9db5c9
-(void)stopNotifier;	// 0x9db591
-(BOOL)startNotifier;	// 0x9db3d5
@end
