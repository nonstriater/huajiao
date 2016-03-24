/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageAverageColor.h"

@class GLProgram;

@interface GPUImageLuminosity : GPUImageAverageColor {
	GLProgram* secondFilterProgram;
	int secondFilterPositionAttribute;
	int secondFilterTextureCoordinateAttribute;
	int secondFilterInputTextureUniform;
	int secondFilterInputTextureUniform2;
	int secondFilterTexelWidthUniform;
	int secondFilterTexelHeightUniform;
	id _luminosityProcessingFinishedBlock;
}
@property(copy, nonatomic) id luminosityProcessingFinishedBlock;	// G=0x83d1a1; S=0x83d1b5; 
-(void).cxx_destruct;	// 0x83d1c5
-(void)extractLuminosityAtFrameTime:(XXStruct_pwHToB)frameTime;	// 0x83cfe1
-(void)initializeSecondaryAttributes;	// 0x83cf99
-(id)init;	// 0x83cb59
@end
