/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageFilterGroup.h"

@class GPUImageHistogramFilter, GPUImageRawDataOutput, GPUImageRawDataInput;

@interface GPUImageHistogramEqualizationFilter : GPUImageFilterGroup {
	GPUImageHistogramFilter* histogramFilter;
	GPUImageRawDataOutput* rawDataOutputFilter;
	GPUImageRawDataInput* rawDataInputFilter;
	unsigned _downsamplingFactor;
}
@property(assign, nonatomic) unsigned downsamplingFactor;	// G=0x804c55; S=0x804c21; 
-(void).cxx_destruct;	// 0x804c65
-(id)initWithHistogramType:(int)histogramType;	// 0x8047a9
-(id)init;	// 0x804775
@end
