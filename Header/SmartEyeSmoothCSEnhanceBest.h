/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPUImageFilter.h"
#import "living-Structs.h"


@interface SmartEyeSmoothCSEnhanceBest : GPUImageFilter {
	int mLevelUniform;
	int sLevelUniform;
	int mXStepUniform;
	int mYStepUniform;
	int contrastRatio_10bitUniform;
	int contrastKeyPointUniform;
	int saturationRatio_10bitUniform;
	float _mLevel;
	float _mXStep;
	float _mYStep;
	float _sLevel;
	float _contrastRatio_10bit;
	float _contrastKeyPoint;
	float _saturationRatio_10bit;
}
@property(assign, nonatomic) float saturationRatio_10bit;	// G=0x7e2b05; S=0x7e2b15; 
@property(assign, nonatomic) float contrastKeyPoint;	// G=0x7e2ae5; S=0x7e2af5; 
@property(assign, nonatomic) float contrastRatio_10bit;	// G=0x7e2ad5; S=0x7e29bd; 
@property(assign, nonatomic) float mYStep;	// G=0x7e2ab5; S=0x7e2909; 
@property(assign, nonatomic) float mXStep;	// G=0x7e2aa5; S=0x7e28b1; 
@property(assign, nonatomic) float sLevel;	// G=0x7e2ac5; S=0x7e2961; 
@property(assign, nonatomic) float mLevel;	// G=0x7e2a95; S=0x7e2855; 
-(void)setupFilterForSize:(CGSize)size;	// 0x7e2721
-(id)init;	// 0x7e255d
@end

