/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageFilter.h"


@interface GPUImageGaussianSelectiveBlurHelperFilter : GPUImageFilter {
	float _excludeCircleRadius;
	float _excludeBlurSize;
	float _blurRadiusInPixels;
	float _aspectRatio;
	CGPoint _excludeCirclePoint;
}
@property(assign, nonatomic) float aspectRatio;	// G=0x82c1f9; S=0x82c209; 
@property(assign, nonatomic) float blurRadiusInPixels;	// G=0x82c1d9; S=0x82c1e9; 
@property(assign, nonatomic) float excludeBlurSize;	// G=0x82c1c9; S=0x82c171; 
@property(assign, nonatomic) CGPoint excludeCirclePoint;	// G=0x82c19d; S=0x82c109; 
@property(assign, nonatomic) float excludeCircleRadius;	// G=0x82c1b9; S=0x82c145; 
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x82c011
-(id)init;	// 0x82bf61
@end
