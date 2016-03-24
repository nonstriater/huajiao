/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageFilterGroup.h"

@class GPUImageDifferenceBlendFilter, GPUImageLowPassFilter;

@interface GPUImageHighPassFilter : GPUImageFilterGroup {
	GPUImageLowPassFilter* lowPassFilter;
	GPUImageDifferenceBlendFilter* differenceBlendFilter;
	float filterStrength;
}
@property(assign, nonatomic) float filterStrength;	// G=0x7fba81; S=0x7fba61; 
-(void).cxx_destruct;	// 0x7fbaa1
-(id)init;	// 0x7fb8fd
@end
