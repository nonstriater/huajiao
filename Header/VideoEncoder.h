/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

@interface VideoEncoder : XXUnknownSuperclass {
	AVAssetWriter* _writer;
	AVAssetWriterInput* _writerInput;
	AVAssetWriterInputPixelBufferAdaptor* _adaptor;
	NSString* _path;
	XXStruct_pwHToB _liveBroadcastStartTime;
}
@property(assign, nonatomic) XXStruct_pwHToB liveBroadcastStartTime;	// G=0x7ed7e9; S=0x7ed809; 
@property(retain) NSString* path;	// G=0x7ed7c5; S=0x7ed7d9; 
+(id)encoderForPath:(id)path Height:(int)height andWidth:(int)width bitrate:(int)bitrate keyFrameInterval:(int)interval adaptorHeight:(long)height6 adaptorWidth:(long)width7;	// 0x7ec561
-(void).cxx_destruct;	// 0x7ed82d
-(void)shutdownWithFinishHandler:(id)finishHandler;	// 0x7ed68d
-(CVBufferRef)pixelBufferFromCGImage:(CGImageRef)cgimage;	// 0x7ed4b1
-(BOOL)encodeFrameWithImage:(id)image andPTS:(XXStruct_pwHToB)pts;	// 0x7ed31d
-(BOOL)encodeFrame:(opaqueCMSampleBuffer*)frame fromFile:(BOOL)file isWritingHeader:(BOOL)header;	// 0x7ed091
-(id)rotateImage:(id)image fromOrientation:(int)orientation;	// 0x7ecca1
-(id)imageFromSampleBuffer:(opaqueCMSampleBuffer*)sampleBuffer;	// 0x7ecbed
-(void)finishWithCompletionHandler:(id)completionHandler;	// 0x7ecba1
-(void)initPath:(id)path Height:(int)height andWidth:(int)width bitrate:(int)bitrate keyFrameInterval:(int)interval adaptorHeight:(int)height6 adaptorWidth:(int)width7;	// 0x7ec5d9
@end

