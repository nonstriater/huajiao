/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HJUserProfilesResponse;

__attribute__((visibility("hidden")))
@interface HJRankUserResponse : XXUnknownSuperclass {
	NSString* _praise;
	NSString* _uid;
	HJUserProfilesResponse* _userInfo;
}
@property(retain, nonatomic) HJUserProfilesResponse* userInfo;	// G=0x4a91d; S=0x4a92d; 
@property(retain, nonatomic) NSString* uid;	// G=0x4a8e5; S=0x4a8f5; 
@property(retain, nonatomic) NSString* praise;	// G=0x4a8ad; S=0x4a8bd; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x4a721
-(void).cxx_destruct;	// 0x4a955
@end
