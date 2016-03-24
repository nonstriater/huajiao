/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WBBaseResponse.h"

@class NSString, NSDate;

@interface WBAuthorizeResponse : WBBaseResponse {
	NSString* userID;
	NSString* accessToken;
	NSDate* expirationDate;
	NSString* refreshToken;
}
@property(retain, nonatomic) NSString* refreshToken;	// G=0xd23f99; S=0xd23fa9; 
@property(retain, nonatomic) NSDate* expirationDate;	// G=0xd23f61; S=0xd23f71; 
@property(retain, nonatomic) NSString* accessToken;	// G=0xd23f29; S=0xd23f39; 
@property(retain, nonatomic) NSString* userID;	// G=0xd23ef1; S=0xd23f01; 
-(void).cxx_destruct;	// 0xd23fd1
-(void)loadFromDictionary:(id)dictionary;	// 0xd23dc5
-(void)storeToDictionary:(id)dictionary;	// 0xd23c25
-(id)validate;	// 0xd23b45
-(BOOL)canBeReceived;	// 0xd23b41
-(BOOL)canBeSent;	// 0xd23b3d
@end

