/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface WBSDKJKSerializer : XXUnknownSuperclass {
	WBSDKJKEncodeState* encodeState;
}
+(id)serializeObject:(id)object options:(unsigned)options encodeOption:(unsigned)option block:(id)block delegate:(id)delegate selector:(SEL)selector error:(id*)error;	// 0xd61a2d
-(void)dealloc;	// 0xd63b4d
-(void)releaseState;	// 0xd63ae9
-(id)serializeObject:(id)object options:(unsigned)options encodeOption:(unsigned)option block:(id)block delegate:(id)delegate selector:(SEL)selector error:(id*)error;	// 0xd61a7d
@end
