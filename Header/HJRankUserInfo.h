/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HJVerifiedInfo;

__attribute__((visibility("hidden")))
@interface HJRankUserInfo : XXUnknownSuperclass {
	BOOL _followed;
	BOOL _verified;
	NSString* _uid;
	NSString* _signature;
	NSString* _nickname;
	NSString* _avatar;
	NSString* _avatarLarge;
	NSString* _astro;
	int _praise;
	int _followings;
	int _followers;
	int _rank;
	int _change;
	HJVerifiedInfo* _verifiedInfo;
}
@property(retain, nonatomic) HJVerifiedInfo* verifiedInfo;	// G=0x3cc0b9; S=0x3cc0c9; 
@property(assign, nonatomic) BOOL verified;	// G=0x3cc099; S=0x3cc0a9; 
@property(assign, nonatomic) int change;	// G=0x3cc079; S=0x3cc089; 
@property(assign, nonatomic) int rank;	// G=0x3cc059; S=0x3cc069; 
@property(assign, nonatomic) int followers;	// G=0x3cc039; S=0x3cc049; 
@property(assign, nonatomic) int followings;	// G=0x3cc019; S=0x3cc029; 
@property(assign, nonatomic) BOOL followed;	// G=0x3cbff9; S=0x3cc009; 
@property(assign, nonatomic) int praise;	// G=0x3cbfd9; S=0x3cbfe9; 
@property(retain, nonatomic) NSString* astro;	// G=0x3cbfa1; S=0x3cbfb1; 
@property(retain, nonatomic) NSString* avatarLarge;	// G=0x3cbf69; S=0x3cbf79; 
@property(retain, nonatomic) NSString* avatar;	// G=0x3cbf31; S=0x3cbf41; 
@property(retain, nonatomic) NSString* nickname;	// G=0x3cbef9; S=0x3cbf09; 
@property(retain, nonatomic) NSString* signature;	// G=0x3cbec1; S=0x3cbed1; 
@property(retain, nonatomic) NSString* uid;	// G=0x3cbe89; S=0x3cbe99; 
+(id)responseWithDictionary:(id)dictionary;	// 0x3cb961
-(void).cxx_destruct;	// 0x3cc0f1
@end
