/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"


__attribute__((visibility("hidden")))
@interface DDASLLogCapture : XXUnknownSuperclass {
}
+(void)captureAslLogs;	// 0x9d99
+(void)aslMessageReceived:(asl_object_s*)received;	// 0x9b91
+(void)configureAslQuery:(asl_object_s*)query;	// 0x9b41
+(void)setCaptureLevel:(unsigned)level;	// 0x9b31
+(unsigned)captureLevel;	// 0x9b21
+(void)stop;	// 0x9b11
+(void)start;	// 0x9a85
+(void)initialize;	// 0x9a81
@end

