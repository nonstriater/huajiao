/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface GCDAsyncWritePacket : XXUnknownSuperclass {
	NSData* buffer;
	unsigned bytesDone;
	long tag;
	double timeout;
}
-(void).cxx_destruct;	// 0xa2abb1
-(id)initWithData:(id)data timeout:(double)timeout tag:(long)tag;	// 0xa2ab05
@end

