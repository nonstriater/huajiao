/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HJHeartQueue : XXUnknownSuperclass {
	NSMutableArray* aryHeart;
	NSObject<OS_dispatch_queue>* heartCurrentQueue;
	BOOL _popRunning;
	NSTimer* _popTimer;
	id _heartPopOut;
}
@property(copy, nonatomic) id heartPopOut;	// G=0x14a1b9; S=0x14a1cd; 
+(id)sharedHeartQueue;	// 0x149a71
-(void).cxx_destruct;	// 0x14a1dd
-(void)heartPush:(id)push;	// 0x14a061
-(void)heartPop;	// 0x149f31
-(void)_heartPop;	// 0x149ded
-(void)stopPopTimer;	// 0x149db9
-(void)startPopTimer;	// 0x149c35
-(void)refreshHeartQueue;	// 0x149b91
-(id)init;	// 0x149b01
@end

