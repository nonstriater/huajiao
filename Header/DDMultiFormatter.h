/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DDLogFormatter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DDMultiFormatter : XXUnknownSuperclass <DDLogFormatter> {
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableArray* _formatters;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) NSArray* formatters;	// G=0x291e21; 
-(void).cxx_destruct;	// 0x292291
-(BOOL)isFormattingWithFormatter:(id)formatter;	// 0x29216d
-(void)removeAllFormatters;	// 0x2920e1
-(void)removeFormatter:(id)formatter;	// 0x29200d
-(void)addFormatter:(id)formatter;	// 0x291f39
-(id)logMessageForLine:(id)line originalMessage:(id)message;	// 0x291ddd
-(id)formatLogMessage:(id)message;	// 0x291b6d
-(id)init;	// 0x291ae1
@end
