/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface LaunchFromWXReq : BaseReq {
	NSString* lang;
	NSString* country;
	WXMediaMessage* message;
}
@property(retain, nonatomic) NSString* country;	// G=0xcc6ef9; S=0xcc6f09; 
@property(retain, nonatomic) NSString* lang;	// G=0xcc6ec5; S=0xcc6ed5; 
@property(retain, nonatomic) WXMediaMessage* message;	// G=0xcc6f2d; S=0xcc6f3d; 
-(void)dealloc;	// 0xcc6e59
-(id)init;	// 0xcc6dfd
@end

