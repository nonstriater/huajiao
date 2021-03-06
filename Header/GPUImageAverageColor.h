/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageFilter.h"
#import "living-Structs.h"


@interface GPUImageAverageColor : GPUImageFilter {
	int texelWidthUniform;
	int texelHeightUniform;
	unsigned numberOfStages;
	char* rawImagePixels;
	CGSize finalStageSize;
	id _colorAverageProcessingFinishedBlock;
}
@property(copy, nonatomic) id colorAverageProcessingFinishedBlock;	// G=0x7fc689; S=0x7fc69d; 
-(void).cxx_destruct;	// 0x7fc6ad
-(void)extractAverageColorAtFrameTime:(XXStruct_pwHToB)frameTime;	// 0x7fc495
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x7fc481
-(void)renderToTextureWithVertices:(const float*)vertices textureCoordinates:(const float*)coordinates;	// 0x7fc021
-(void)dealloc;	// 0x7fbfd9
-(id)init;	// 0x7fbe89
@end

