/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class Invitee, NSString;

__attribute__((visibility("hidden")))
@interface InviteActiveInfo : XXUnknownSuperclass {
	BOOL _reward;
	NSString* _inviteid;
	NSString* _inviter;
	Invitee* _inviterItem;
}
@property(retain, nonatomic) Invitee* inviterItem;	// G=0x15339; S=0x15349; 
@property(assign, nonatomic) BOOL reward;	// G=0x15319; S=0x15329; 
@property(retain, nonatomic) NSString* inviter;	// G=0x152e1; S=0x152f1; 
@property(retain, nonatomic) NSString* inviteid;	// G=0x152a9; S=0x152b9; 
+(id)responseWithInfo:(id)info;	// 0x15035
-(void).cxx_destruct;	// 0x15371
@end

