/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface HJForetellForwarderResponse : XXUnknownSuperclass {
	NSString* _uid;
	NSString* _nickname;
	long long _praises;
}
@property(assign, nonatomic) long long praises;	// G=0x301a81; S=0x301a99; 
@property(retain, nonatomic) NSString* nickname;	// G=0x301a49; S=0x301a59; 
@property(retain, nonatomic) NSString* uid;	// G=0x301a11; S=0x301a21; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x301875
-(void).cxx_destruct;	// 0x301aad
@end

