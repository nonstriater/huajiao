/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HJMsgQueue : XXUnknownSuperclass {
	NSMutableArray* aryMsg;
	NSObject<OS_dispatch_queue>* msgCurrentQueue;
	id _msgPopOut;
}
@property(copy, nonatomic) id msgPopOut;	// G=0x319d1; S=0x319e5; 
+(id)sharedMsgQueue;	// 0x31509
-(void).cxx_destruct;	// 0x319f5
-(void)msgPush:(id)push;	// 0x317e5
-(void)msgPop;	// 0x316b5
-(void)refreshMsgQueue;	// 0x31629
-(id)init;	// 0x31599
@end

