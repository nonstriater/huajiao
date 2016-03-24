/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VSSmoothBlendFilter, GPUImageSobelEdgeDetectionFilter, VSBilateralFilter, VSLogarithmYFilter, GPUImageOutput;
@protocol GPUImageInput;

@interface VSBeautyGroup : XXUnknownSuperclass {
	VSBilateralFilter* bilateralFilter;
	VSSmoothBlendFilter* blendFilter;
	VSLogarithmYFilter* logarithmFilter;
	GPUImageSobelEdgeDetectionFilter* sobelFilter;
	GPUImageOutput* input;
	id<GPUImageInput> output;
	BOOL fastest;
}
-(void).cxx_destruct;	// 0x841495
-(void)removeTarget:(id)target;	// 0x841421
-(void)addTarget:(id)target;	// 0x8413ad
-(void)setBrightenLevel:(float)level;	// 0x841389
-(void)setSmoothLevel:(float)level;	// 0x841365
-(id)initFastWithInput:(id)input output:(id)output;	// 0x84121d
-(id)initWithInput:(id)input output:(id)output;	// 0x840fd1
-(int)nextAvailableTextureIndex;	// 0x819c51
@end

