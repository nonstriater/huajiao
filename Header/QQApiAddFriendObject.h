/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "QQApiObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QQApiAddFriendObject : QQApiObject {
	NSString* _openID;
	NSString* _subID;
	NSString* _remark;
}
@property(retain, nonatomic) NSString* remark;	// G=0xb4a581; S=0xb4a591; 
@property(retain, nonatomic) NSString* subID;	// G=0xb4a54d; S=0xb4a55d; 
@property(retain, nonatomic) NSString* openID;	// G=0xb4a519; S=0xb4a529; 
+(id)objecWithOpenID:(id)openID;	// 0xb4a4dd
-(void)dealloc;	// 0xb4a499
-(id)initWithOpenID:(id)openID;	// 0xb4a451
@end

