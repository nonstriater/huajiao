/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread;

@interface DTRpcAsyncCaller : XXUnknownSuperclass {
	BOOL _cancelled;
	BOOL _finished;
	NSThread* _asyncThread;
}
@property(assign, nonatomic) __weak NSThread* asyncThread;	// G=0xd11451; S=0xd11471; 
@property(assign, getter=isFinished) BOOL finished;	// G=0xd1142d; S=0xd11441; 
@property(assign, getter=isCancelled) BOOL cancelled;	// G=0xd11409; S=0xd1141d; 
+(id)callAsyncBlock:(id)block completion:(id)completion;	// 0xd10d71
-(void).cxx_destruct;	// 0xd11485
-(void)handleException:(id)exception;	// 0xd112b1
-(void)afterCompleteAction;	// 0xd112ad
-(void)beforeCompleteAction;	// 0xd112a9
-(void)startAsyncBlock:(id)block completion:(id)completion;	// 0xd10ee5
-(void)cancel;	// 0xd10e4d
-(id)init;	// 0xd10df1
@end
