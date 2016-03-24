/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageGaussianBlurFilter.h"


@interface GPUImageBilateralFilter : GPUImageGaussianBlurFilter {
	float firstDistanceNormalizationFactorUniform;
	float secondDistanceNormalizationFactorUniform;
	float _distanceNormalizationFactor;
}
@property(assign, nonatomic) float distanceNormalizationFactor;	// G=0x7ff835; S=0x7ff7a1; 
-(id)init;	// 0x7ff695
@end
