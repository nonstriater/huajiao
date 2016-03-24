/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DDLogFormatter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface DDDispatchQueueLogFormatter : XXUnknownSuperclass <DDLogFormatter> {
	unsigned _mode;
	NSString* _dateFormatterKey;
	int _atomicLoggerCount;
	NSDateFormatter* _threadUnsafeDateFormatter;
	int _lock;
	unsigned _minQueueLength;
	unsigned _maxQueueLength;
	NSMutableDictionary* _replacements;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) unsigned maxQueueLength;	// G=0x28d5b1; S=0x28d5c1; 
@property(assign) unsigned minQueueLength;	// G=0x28d591; S=0x28d5a1; 
-(void).cxx_destruct;	// 0x28d5d1
-(void)willRemoveFromLogger:(id)logger;	// 0x28d579
-(void)didAddToLogger:(id)logger;	// 0x28d565
-(id)formatLogMessage:(id)message;	// 0x28d499
-(id)queueThreadLabelForLogMessage:(id)logMessage;	// 0x28d0d9
-(id)stringFromDate:(id)date;	// 0x28cf91
-(void)configureDateFormatter:(id)formatter;	// 0x28cea5
-(id)createDateFormatter;	// 0x28ce51
-(void)setReplacementString:(id)string forQueueLabel:(id)queueLabel;	// 0x28cdc9
-(id)replacementStringForQueueLabel:(id)queueLabel;	// 0x28cd5d
-(id)initWithMode:(unsigned)mode;	// 0x28cd31
-(id)init;	// 0x28cb81
@end
