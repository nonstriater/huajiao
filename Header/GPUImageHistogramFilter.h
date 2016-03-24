/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageFilter.h"
#import "living-Structs.h"

@class GLProgram;

@interface GPUImageHistogramFilter : GPUImageFilter {
	int histogramType;
	char* vertexSamplingCoordinates;
	GLProgram* secondFilterProgram;
	GLProgram* thirdFilterProgram;
	int secondFilterPositionAttribute;
	int thirdFilterPositionAttribute;
	unsigned _downsamplingFactor;
}
@property(assign, nonatomic) unsigned downsamplingFactor;	// G=0x7ef981; S=0x7ef991; 
-(void).cxx_destruct;	// 0x7ef9a1
-(void)renderToTextureWithVertices:(const float*)vertices textureCoordinates:(const float*)coordinates;	// 0x7ef555
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x7ef541
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x7ef505
-(CGSize)outputFrameSize;	// 0x7ef4e5
-(void)newFrameReadyAtTime:(XXStruct_pwHToB)time atIndex:(int)index;	// 0x7ef499
-(CGSize)sizeOfFBO;	// 0x7ef489
-(void)dealloc;	// 0x7ef421
-(void)initializeSecondaryAttributes;	// 0x7ef3d5
-(id)init;	// 0x7ef3a1
-(id)initWithHistogramType:(int)histogramType;	// 0x7eee51
@end
