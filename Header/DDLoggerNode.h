/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol DDLogger, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DDLoggerNode : XXUnknownSuperclass {
	id<DDLogger> _logger;
	unsigned _level;
	NSObject<OS_dispatch_queue>* _loggerQueue;
}
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* loggerQueue;	// G=0xccca1; 
@property(readonly, assign, nonatomic) unsigned level;	// G=0xccc91; 
@property(readonly, assign, nonatomic) id<DDLogger> logger;	// G=0xccc81; 
+(id)nodeWithLogger:(id)logger loggerQueue:(id)queue level:(unsigned)level;	// 0xccbe1
-(void).cxx_destruct;	// 0xcccb1
-(void)dealloc;	// 0xccc55
-(id)initWithLogger:(id)logger loggerQueue:(id)queue level:(unsigned)level;	// 0xccb3d
@end

