/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageTwoInputFilter.h"
#import "living-Structs.h"

@class GPUImageFramebuffer;

@interface GPUImageThreeInputFilter : GPUImageTwoInputFilter {
	GPUImageFramebuffer* thirdInputFramebuffer;
	int filterThirdTextureCoordinateAttribute;
	int filterInputTextureUniform3;
	int inputRotation3;
	unsigned filterSourceTexture3;
	XXStruct_pwHToB thirdFrameTime;
	BOOL hasSetSecondTexture;
	BOOL hasReceivedThirdFrame;
	BOOL thirdFrameWasVideo;
	BOOL thirdFrameCheckDisabled;
}
-(void).cxx_destruct;	// 0x802cbd
-(void)newFrameReadyAtTime:(XXStruct_pwHToB)time atIndex:(int)index;	// 0x802a15
-(CGSize)rotatedSize:(CGSize)size forIndex:(int)index;	// 0x8029b9
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x802989
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x8028c1
-(void)setInputFramebuffer:(id)framebuffer atIndex:(int)index;	// 0x802809
-(int)nextAvailableTextureIndex;	// 0x8027d9
-(void)renderToTextureWithVertices:(const float*)vertices textureCoordinates:(const float*)coordinates;	// 0x8023a9
-(void)disableThirdFrameCheck;	// 0x802395
-(void)initializeAttributes;	// 0x80233d
-(id)initWithVertexShaderFromString:(id)string fragmentShaderFromString:(id)string2;	// 0x802185
-(id)initWithFragmentShaderFromString:(id)string;	// 0x802149
@end
