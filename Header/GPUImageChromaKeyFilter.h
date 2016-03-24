/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageFilter.h"


@interface GPUImageChromaKeyFilter : GPUImageFilter {
	int colorToReplaceUniform;
	int thresholdSensitivityUniform;
	int smoothingUniform;
	float _thresholdSensitivity;
	float _smoothing;
}
@property(assign, nonatomic) float smoothing;	// G=0x7ec551; S=0x7ec4e9; 
@property(assign, nonatomic) float thresholdSensitivity;	// G=0x7ec541; S=0x7ec491; 
-(void)setColorToReplaceRed:(float)replaceRed green:(float)green blue:(float)blue;	// 0x7ec43d
-(id)init;	// 0x7ec319
@end

