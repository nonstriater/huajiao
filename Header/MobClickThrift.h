/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UMTActivateMsg, UMTAppInfo, UMTDeviceInfo, UMTClientStats, UMTMiscInfo, UMTUALogEntry, NSMutableArray, UMTIdTracking;

@interface MobClickThrift : XXUnknownSuperclass {
	UMTUALogEntry* _UALogEntry;
	UMTDeviceInfo* _deviceInfo;
	UMTAppInfo* _appInfo;
	UMTMiscInfo* _miscInfo;
	UMTIdTracking* _idTracking;
	UMTActivateMsg* _activateMsg;
	UMTClientStats* _clientStats;
	NSMutableArray* _sessions;
	NSMutableArray* _instantMessages;
}
+(id)imprintPropertyValueWithKey:(id)key;	// 0xb0c0c9
+(id)generateImprintChecksum:(id)checksum;	// 0xb0bed1
+(BOOL)validateImprintChecksum:(id)checksum;	// 0xb0be71
+(id)sharedInstance;	// 0xb0a661
-(void)dealloc;	// 0xb0eead
-(void)buildDeviceInfo;	// 0xb0eca5
-(void)buildAppInfo;	// 0xb0ea99
-(void)buildMiscInfo;	// 0xb0e909
-(void)clearControlPolicy;	// 0xb0e8e1
-(void)buildControlPolicy;	// 0xb0e6f5
-(void)buildLogEntry;	// 0xb0e655
-(void)setActivateMsgFlag;	// 0xb0e585
-(void)writeIdTracking;	// 0xb0deb9
-(void)buildActivateMsg;	// 0xb0ddc9
-(void)buildClientStats;	// 0xb0dc59
-(id)fromData:(id)data;	// 0xb0dab5
-(id)entityData;	// 0xb0da35
-(id)toData;	// 0xb0d7d1
-(void)buildInstantMessageFromEvent:(id)event;	// 0xb0d3d9
-(void)buildInstantMessageFromError:(id)error;	// 0xb0d261
-(void)buildInstantMessageFromEkv:(id)ekv;	// 0xb0cd31
-(void)buildSessionFrom:(id)from;	// 0xb0c7a1
-(void)buildSessionsFromMobClickInternal;	// 0xb0c6b1
-(void)buildInstantMessages;	// 0xb0c441
-(void)buildSessions;	// 0xb0c3e9
-(void)buildSessionsAndInstantMessages;	// 0xb0c2ed
-(void)updateImprint:(id)imprint;	// 0xb0b941
-(BOOL)verifyResponseData:(id)data;	// 0xb0b701
-(void)buildImprint;	// 0xb0b4c1
-(void)saveIdTracking;	// 0xb0b29d
-(void)buildIdTracking;	// 0xb0a941
-(void)buildActiveUser;	// 0xb0a841
-(id)init;	// 0xb0a745
@end

