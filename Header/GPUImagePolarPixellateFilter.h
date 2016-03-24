/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageFilter.h"


@interface GPUImagePolarPixellateFilter : GPUImageFilter {
	int centerUniform;
	int pixelSizeUniform;
	CGPoint _center;
	CGSize _pixelSize;
}
@property(assign, nonatomic) CGSize pixelSize;	// G=0x80e3a5; S=0x80e28d; 
@property(assign, nonatomic) CGPoint center;	// G=0x80e389; S=0x80e2e9; 
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x80e229
-(id)init;	// 0x80e149
@end
