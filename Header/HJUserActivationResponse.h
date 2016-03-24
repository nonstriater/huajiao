/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJFastLoginResponse.h"


__attribute__((visibility("hidden")))
@interface HJUserActivationResponse : HJFastLoginResponse {
	BOOL _newbie;
	BOOL _newForMarket;
	BOOL _haspass;
}
@property(assign, nonatomic) BOOL haspass;	// G=0x3c6e39; S=0x3c6e49; 
@property(assign, nonatomic, getter=isNewForMarket) BOOL newForMarket;	// G=0x3c6e19; S=0x3c6e29; 
@property(assign, nonatomic, getter=isNewbie) BOOL newbie;	// G=0x3c6df9; S=0x3c6e09; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x3c61f9
-(BOOL)isEqualToResponse:(id)response;	// 0x3c6be5
@end

