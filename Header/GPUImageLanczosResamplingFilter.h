/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageTwoPassTextureSamplingFilter.h"
#import "living-Structs.h"


@interface GPUImageLanczosResamplingFilter : GPUImageTwoPassTextureSamplingFilter {
	CGSize _originalImageSize;
}
@property(assign, nonatomic) CGSize originalImageSize;	// G=0x7f00e9; S=0x7f0105; 
-(void)renderToTextureWithVertices:(const float*)vertices textureCoordinates:(const float*)coordinates;	// 0x7efc21
-(void)setupFilterForSize:(CGSize)size;	// 0x7efad5
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x7efa89
-(id)init;	// 0x7efa25
@end

