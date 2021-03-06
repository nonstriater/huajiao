/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageFilter.h"
#import "living-Structs.h"


@interface GPUImageSharpenFilter : GPUImageFilter {
	int sharpnessUniform;
	int imageWidthFactorUniform;
	int imageHeightFactorUniform;
	float _sharpness;
}
@property(assign, nonatomic) float sharpness;	// G=0x7f8631; S=0x7f85d9; 
-(void)setupFilterForSize:(CGSize)size;	// 0x7f84a1
-(id)init;	// 0x7f83b9
@end

