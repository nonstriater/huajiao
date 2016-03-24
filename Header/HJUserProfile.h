/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HJVerifiedResult, HJVerifiedInfo;

__attribute__((visibility("hidden")))
@interface HJUserProfile : XXUnknownSuperclass {
	BOOL _isVerified;
	BOOL _isNewUser;
	NSString* _userID;
	int _userType;
	NSString* _nickname;
	NSString* _avatar;
	NSString* _avatarLargeURL;
	NSString* _avatarOriginalUrl;
	NSString* _level;
	NSString* _exp;
	NSString* _signature;
	int _lives;
	int _watches;
	int _praises;
	int _followings;
	int _followers;
	int _gender;
	HJVerifiedInfo* _verifiedInfo;
	HJVerifiedResult* _verifiedResult;
	NSString* _astro;
	NSString* _location;
}
@property(assign, nonatomic) BOOL isNewUser;	// G=0x12d4cd; S=0x12d4dd; 
@property(retain, nonatomic) NSString* location;	// G=0x12d495; S=0x12d4a5; 
@property(retain, nonatomic) NSString* astro;	// G=0x12d45d; S=0x12d46d; 
@property(retain, nonatomic) HJVerifiedResult* verifiedResult;	// G=0x12d425; S=0x12d435; 
@property(retain, nonatomic) HJVerifiedInfo* verifiedInfo;	// G=0x12d3ed; S=0x12d3fd; 
@property(assign, nonatomic) BOOL isVerified;	// G=0x12d3cd; S=0x12d3dd; 
@property(assign, nonatomic) int gender;	// G=0x12d3ad; S=0x12d3bd; 
@property(assign, nonatomic) int followers;	// G=0x12d38d; S=0x12d39d; 
@property(assign, nonatomic) int followings;	// G=0x12d36d; S=0x12d37d; 
@property(assign, nonatomic) int praises;	// G=0x12d34d; S=0x12d35d; 
@property(assign, nonatomic) int watches;	// G=0x12d32d; S=0x12d33d; 
@property(assign, nonatomic) int lives;	// G=0x12d30d; S=0x12d31d; 
@property(retain, nonatomic) NSString* signature;	// G=0x12d2d5; S=0x12d2e5; 
@property(retain, nonatomic) NSString* exp;	// G=0x12d29d; S=0x12d2ad; 
@property(retain, nonatomic) NSString* level;	// G=0x12d265; S=0x12d275; 
@property(retain, nonatomic) NSString* avatarOriginalUrl;	// G=0x12d22d; S=0x12d23d; 
@property(retain, nonatomic) NSString* avatarLargeURL;	// G=0x12d1f5; S=0x12d205; 
@property(retain, nonatomic) NSString* avatar;	// G=0x12d1bd; S=0x12d1cd; 
@property(retain, nonatomic) NSString* nickname;	// G=0x12d185; S=0x12d195; 
@property(assign, nonatomic) int userType;	// G=0x12d165; S=0x12d175; 
@property(retain, nonatomic) NSString* userID;	// G=0x12d12d; S=0x12d13d; 
+(BOOL)isVUser;	// 0x12cfc1
+(id)userProfileWithInfo:(id)info;	// 0x12c06d
-(void).cxx_destruct;	// 0x12d4ed
-(id)dictionary;	// 0x12c899
@end

