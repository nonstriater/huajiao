/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMFeatureBase.h"


@interface IMFeaturePeerChat : IMFeatureBase {
}
-(int)sendPeerMessageToReceiver:(id)receiver Body:(id)body BodyType:(int)type sessionID:(id)anId sn:(unsigned long long)sn;	// 0xa29595
-(int)sendCreateChannelRequestWithCaller:(id)caller callee:(id)callee sessionID:(id)anId sn:(unsigned long long)sn;	// 0xa293d5
-(int)queryUserPresenceWithPhoneNumbers:(id)phoneNumbers sessionType:(int)type sessionID:(id)anId sn:(unsigned long long)sn;	// 0xa2920d
@end
