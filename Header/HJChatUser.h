/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJMessage.h"

@class NSString, HJVerifiedInfo;

__attribute__((visibility("hidden")))
@interface HJChatUser : HJMessage {
	BOOL _isVerified;
	NSString* _uid;
	NSString* _nickname;
	NSString* _avatar;
	HJVerifiedInfo* _verifiedInfo;
	unsigned _rank;
	NSString* _level;
	NSString* _exp;
}
@property(copy, nonatomic) NSString* exp;	// G=0x33e815; S=0x33e829; 
@property(copy, nonatomic) NSString* level;	// G=0x33e7f1; S=0x33e805; 
@property(assign) unsigned rank;	// G=0x33e7d1; S=0x33e7e1; 
@property(retain, nonatomic) HJVerifiedInfo* verifiedInfo;	// G=0x33e799; S=0x33e7a9; 
@property(assign, nonatomic) BOOL isVerified;	// G=0x33e779; S=0x33e789; 
@property(copy, nonatomic) NSString* avatar;	// G=0x33e755; S=0x33e769; 
@property(copy, nonatomic) NSString* nickname;	// G=0x33e731; S=0x33e745; 
@property(copy, nonatomic) NSString* uid;	// G=0x33e70d; S=0x33e721; 
+(id)chatUserWithDictionary:(id)dictionary;	// 0x33e1ed
-(void).cxx_destruct;	// 0x33e839
-(BOOL)valid;	// 0x33e0dd
-(id)description;	// 0x33e02d
@end

