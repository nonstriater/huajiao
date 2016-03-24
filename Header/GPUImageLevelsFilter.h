/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageFilter.h"


@interface GPUImageLevelsFilter : GPUImageFilter {
	int minUniform;
	int midUniform;
	int maxUniform;
	int minOutputUniform;
	int maxOutputUniform;
	GPUVector3 minVector;
	GPUVector3 midVector;
	GPUVector3 maxVector;
	GPUVector3 minOutputVector;
	GPUVector3 maxOutputVector;
}
-(void)setBlueMin:(float)min gamma:(float)gamma max:(float)max;	// 0x7f5165
-(void)setBlueMin:(float)min gamma:(float)gamma max:(float)max minOut:(float)anOut maxOut:(float)anOut5;	// 0x7f50ed
-(void)setGreenMin:(float)min gamma:(float)gamma max:(float)max;	// 0x7f50b1
-(void)setGreenMin:(float)min gamma:(float)gamma max:(float)max minOut:(float)anOut maxOut:(float)anOut5;	// 0x7f5039
-(void)setRedMin:(float)min gamma:(float)gamma max:(float)max;	// 0x7f4ffd
-(void)setRedMin:(float)min gamma:(float)gamma max:(float)max minOut:(float)anOut maxOut:(float)anOut5;	// 0x7f4f89
-(void)setMin:(float)min gamma:(float)gamma max:(float)max;	// 0x7f4f4d
-(void)setMin:(float)min gamma:(float)gamma max:(float)max minOut:(float)anOut maxOut:(float)anOut5;	// 0x7f4ebd
-(void)updateUniforms;	// 0x7f4d91
-(id)init;	// 0x7f4c1d
@end
