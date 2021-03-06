/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PLCrashReportFormatter.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLCrashReportTextFormatter : XXUnknownSuperclass <PLCrashReportFormatter> {
	int _textFormat;
	unsigned _stringEncoding;
}
+(id)stringValueForCrashReport:(id)crashReport withTextFormat:(int)textFormat;	// 0xcb3941
+(id)formatStackFrame:(id)frame frameIndex:(unsigned)index report:(id)report lp64:(BOOL)a64;	// 0xcb4bf1
-(id)formatReport:(id)report error:(id*)error;	// 0xcb4b9d
-(id)initWithTextFormat:(int)textFormat stringEncoding:(unsigned)encoding;	// 0xcb4b49
@end

