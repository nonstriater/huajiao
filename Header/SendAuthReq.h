/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseReq.h"

@class NSString;

@interface SendAuthReq : BaseReq {
	NSString* scope;
	NSString* state;
}
@property(retain, nonatomic) NSString* state;	// G=0xcc64f5; S=0xcc6505; 
@property(retain, nonatomic) NSString* scope;	// G=0xcc64c1; S=0xcc64d1; 
-(void)dealloc;	// 0xcc6469
-(id)init;	// 0xcc641d
@end

