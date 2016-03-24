/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageColorMatrixFilter.h"


@interface GPUImageHSBFilter : GPUImageColorMatrixFilter {
	float matrix[4][4];
}
-(void)_updateColorMatrix;	// 0x7f6c11
-(void)adjustBrightness:(float)brightness;	// 0x7f6b99
-(void)adjustSaturation:(float)saturation;	// 0x7f6aa9
-(void)rotateHue:(float)hue;	// 0x7f6769
-(void)reset;	// 0x7f671d
-(id)init;	// 0x7f66d9
@end

