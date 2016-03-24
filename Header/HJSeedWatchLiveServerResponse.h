/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class HJSeedLiveServerResponse, HJSeedLiveInfoResponse, HJSeedAnchorResponse;

__attribute__((visibility("hidden")))
@interface HJSeedWatchLiveServerResponse : XXUnknownSuperclass {
	BOOL _reposted;
	HJSeedLiveServerResponse* _server;
	HJSeedAnchorResponse* _anchor;
	HJSeedLiveInfoResponse* _liveInfo;
	long _serviceTime;
}
@property(assign, nonatomic) long serviceTime;	// G=0x4caed; S=0x4cafd; 
@property(assign, nonatomic, getter=isReposted) BOOL reposted;	// G=0x4cacd; S=0x4cadd; 
@property(retain, nonatomic) HJSeedLiveInfoResponse* liveInfo;	// G=0x4ca95; S=0x4caa5; 
@property(retain, nonatomic) HJSeedAnchorResponse* anchor;	// G=0x4ca5d; S=0x4ca6d; 
@property(retain, nonatomic) HJSeedLiveServerResponse* server;	// G=0x4ca25; S=0x4ca35; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x4c745
-(void).cxx_destruct;	// 0x4cb0d
@end

