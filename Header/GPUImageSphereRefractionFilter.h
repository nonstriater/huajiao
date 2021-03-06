/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageFilter.h"


@interface GPUImageSphereRefractionFilter : GPUImageFilter {
	int radiusUniform;
	int centerUniform;
	int aspectRatioUniform;
	int refractiveIndexUniform;
	float _radius;
	float _aspectRatio;
	float _refractiveIndex;
	CGPoint _center;
}
@property(assign, nonatomic) float aspectRatio;	// G=0x82b805; S=0x82b729; 
@property(assign, nonatomic) float refractiveIndex;	// G=0x82b815; S=0x82b781; 
@property(assign, nonatomic) float radius;	// G=0x82b7f5; S=0x82b631; 
@property(assign, nonatomic) CGPoint center;	// G=0x82b7d9; S=0x82b689; 
-(void)forceProcessingAtSize:(CGSize)size;	// 0x82b5f1
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x82b579
-(void)adjustAspectRatio;	// 0x82b509
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x82b43d
-(id)initWithFragmentShaderFromString:(id)string;	// 0x82b2e9
-(id)init;	// 0x82b2ad
@end

