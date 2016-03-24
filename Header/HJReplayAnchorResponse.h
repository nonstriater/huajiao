/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJResponse.h"

@class NSString, NSNumber, HJVerifiedInfo;

__attribute__((visibility("hidden")))
@interface HJReplayAnchorResponse : HJResponse {
	BOOL _verified;
	NSString* _uid;
	NSString* _nickname;
	NSString* _location;
	NSString* _avatar;
	NSNumber* _followed;
	HJVerifiedInfo* _verifiedInfo;
}
@property(retain, nonatomic) HJVerifiedInfo* verifiedInfo;	// G=0x13a381; S=0x13a391; 
@property(assign, nonatomic, getter=isVerified) BOOL verified;	// G=0x13a371; S=0x139ee5; 
@property(retain, nonatomic) NSNumber* followed;	// G=0x13a339; S=0x13a349; 
@property(copy, nonatomic) NSString* avatar;	// G=0x13a315; S=0x13a329; 
@property(copy, nonatomic) NSString* location;	// G=0x13a2f1; S=0x13a305; 
@property(copy, nonatomic) NSString* nickname;	// G=0x13a2cd; S=0x13a2e1; 
@property(copy, nonatomic) NSString* uid;	// G=0x13a2a9; S=0x13a2bd; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x139bcd
+(id)replayAnchorWithSeedItemResponseExt:(id)seedItemResponseExt;	// 0x139965
-(void).cxx_destruct;	// 0x13a3b9
-(id)toUserProfilesResponse;	// 0x13a075
-(id)propertys;	// 0x139fe1
@end

