/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, HJUserProfilesResponse;

__attribute__((visibility("hidden")))
@interface HJVerifiedUser : XXUnknownSuperclass {
	HJUserProfilesResponse* _userinfo;
	NSArray* _lives;
	NSArray* _forecasts;
	NSArray* _replays;
}
@property(retain, nonatomic) NSArray* replays;	// G=0x1b6fa9; S=0x1b6fb9; 
@property(retain, nonatomic) NSArray* forecasts;	// G=0x1b6f71; S=0x1b6f81; 
@property(retain, nonatomic) NSArray* lives;	// G=0x1b6f39; S=0x1b6f49; 
@property(retain, nonatomic) HJUserProfilesResponse* userinfo;	// G=0x1b6f01; S=0x1b6f11; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x1b6ae9
-(void).cxx_destruct;	// 0x1b6fe1
@end

