/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface HJRedPacketRewardIteminfo : XXUnknownSuperclass {
	NSString* _ts_id;
	NSString* _comment;
	long long _type;
	long long _amount;
	long long _shares;
}
@property(copy, nonatomic) NSString* comment;	// G=0x340451; S=0x340465; 
@property(assign, nonatomic) long long shares;	// G=0x340425; S=0x34043d; 
@property(assign, nonatomic) long long amount;	// G=0x3403f9; S=0x340411; 
@property(assign, nonatomic) long long type;	// G=0x3403cd; S=0x3403e5; 
@property(copy, nonatomic) NSString* ts_id;	// G=0x3403a9; S=0x3403bd; 
+(id)itemInfoWithDictionary:(id)dictionary;	// 0x3400b5
-(void).cxx_destruct;	// 0x340475
@end
