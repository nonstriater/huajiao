/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface AVObject : XXUnknownSuperclass {
	int _type;
	int _command;
	NSData* _data;
	opaqueCMSampleBuffer* _sampleBuffer;
	XXStruct_pwHToB _audioTimeStamp;
}
@property(readonly, assign, nonatomic) opaqueCMSampleBuffer* sampleBuffer;	// G=0x819e71; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB audioTimeStamp;	// G=0x819e51; 
@property(readonly, assign, nonatomic) NSData* data;	// G=0x819e41; 
@property(readonly, assign, nonatomic) int command;	// G=0x819e31; 
@property(readonly, assign, nonatomic) int type;	// G=0x819e21; 
-(void).cxx_destruct;	// 0x819e81
-(id)initWithFinishCommand;	// 0x819dd1
-(id)initWithVideoData:(opaqueCMSampleBuffer*)videoData;	// 0x819d81
-(id)initWithAudioData:(id)audioData timeStamp:(XXStruct_pwHToB)stamp;	// 0x819c55
@end

