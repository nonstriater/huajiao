/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class Invitee, NSString;

__attribute__((visibility("hidden")))
@interface InviteeItem : XXUnknownSuperclass {
	NSString* _invitid;
	Invitee* _invitee;
	NSString* _amount;
	NSString* _received;
	NSString* _reward;
}
@property(retain, nonatomic) NSString* reward;	// G=0x152ebd; S=0x152ecd; 
@property(retain, nonatomic) NSString* received;	// G=0x152e85; S=0x152e95; 
@property(retain, nonatomic) NSString* amount;	// G=0x152e4d; S=0x152e5d; 
@property(retain, nonatomic) Invitee* invitee;	// G=0x152e15; S=0x152e25; 
@property(retain, nonatomic) NSString* invitid;	// G=0x152ddd; S=0x152ded; 
+(id)responseWithInfo:(id)info;	// 0x152b6d
-(void).cxx_destruct;	// 0x152ef5
@end

