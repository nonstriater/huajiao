/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageFilterGroup.h"

@class GPUImageTwoInputFilter, GPUImageLowPassFilter, GPUImageAverageColor;

@interface GPUImageMotionDetector : GPUImageFilterGroup {
	GPUImageLowPassFilter* lowPassFilter;
	GPUImageTwoInputFilter* frameComparisonFilter;
	GPUImageAverageColor* averageColor;
	float lowPassFilterStrength;
	id motionDetectionBlock;
}
@property(copy, nonatomic) id motionDetectionBlock;	// G=0x7fbe05; S=0x7fbe19; 
@property(assign, nonatomic) float lowPassFilterStrength;	// G=0x7fbde5; S=0x7fbdc5; 
-(void).cxx_destruct;	// 0x7fbe29
-(id)init;	// 0x7fbad5
@end
