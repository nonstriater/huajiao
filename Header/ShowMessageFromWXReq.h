/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface ShowMessageFromWXReq : BaseReq {
	WXMediaMessage* message;
	NSString* country;
	NSString* lang;
}
@property(retain, nonatomic) NSString* country;	// G=0xcc6d3d; S=0xcc6d4d; 
@property(retain, nonatomic) NSString* lang;	// G=0xcc6d71; S=0xcc6d81; 
@property(retain, nonatomic) WXMediaMessage* message;	// G=0xcc6d09; S=0xcc6d19; 
-(void)dealloc;	// 0xcc6c9d
-(id)init;	// 0xcc6c41
@end

