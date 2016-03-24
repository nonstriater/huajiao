/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageFilter.h"
#import "living-Structs.h"


@interface GPUImageJFAVoronoiFilter : GPUImageFilter {
	unsigned secondFilterOutputTexture;
	unsigned secondFilterFramebuffer;
	int sampleStepUniform;
	int sizeUniform;
	unsigned numPasses;
	int currentPass;
	CGSize _sizeInPixels;
}
@property(assign, nonatomic) CGSize sizeInPixels;	// G=0x7f6369; S=0x7f5ecd; 
-(void)renderToTextureWithVertices:(const float*)vertices textureCoordinates:(const float*)coordinates;	// 0x7f6015
-(unsigned)nextPowerOfTwo:(CGPoint)two;	// 0x7f5fdd
-(id)init;	// 0x7f5e09
@end

