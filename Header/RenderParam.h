/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"


@interface RenderParam : XXUnknownSuperclass {
	unsigned long* actionFlags;
	AudioTimeStamp* timeStamp;
	unsigned long busNumber;
	unsigned long numberFrames;
	AudioBufferList* data;
	BOOL isAlloc;
}
@property(assign) AudioBufferList* data;	// G=0x49acbd; S=0x49accd; 
@property(readonly, assign) unsigned long numberFrames;	// G=0x49acdd; 
@property(readonly, assign) unsigned long busNumber;	// G=0x49ac9d; 
@property(readonly, assign) AudioTimeStamp* timeStamp;	// G=0x49acad; 
@property(assign) unsigned long* actionFlags;	// G=0x49ac7d; S=0x49ac8d; 
-(id)description;	// 0x49abe9
-(void)dealloc;	// 0x49ab69
-(id)initWithNew:(AudioStreamBasicDescription*)aNew numFrames:(unsigned long)frames;	// 0x49aa31
-(id)initWithParams:(unsigned long*)params inTimeStamp:(AudioTimeStamp*)timeStamp inBusNumber:(unsigned long)busNumber inNumberFrames:(unsigned long)numberFrames ioData:(AudioBufferList*)data;	// 0x49a991
@end

