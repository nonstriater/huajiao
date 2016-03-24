/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageOutput.h"

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface GPUImageRawDataInput : GPUImageOutput {
	CGSize uploadedImageSize;
	NSObject<OS_dispatch_semaphore>* dataUpdateSemaphore;
	int _pixelFormat;
	int _pixelType;
}
@property(assign, nonatomic) int pixelType;	// G=0x8067f1; S=0x806801; 
@property(assign, nonatomic) int pixelFormat;	// G=0x8067d1; S=0x8067e1; 
-(void).cxx_destruct;	// 0x806811
-(CGSize)outputImageSize;	// 0x8067b5
-(void)processDataForTimestamp:(XXStruct_pwHToB)timestamp;	// 0x806551
-(void)processData;	// 0x8062d1
-(void)updateDataFromBytes:(char*)bytes size:(CGSize)size;	// 0x8062a5
-(void)uploadBytes:(char*)bytes;	// 0x80611d
-(void)dealloc;	// 0x8060f1
-(id)initWithBytes:(char*)bytes size:(CGSize)size pixelFormat:(int)format type:(int)type;	// 0x806025
-(id)initWithBytes:(char*)bytes size:(CGSize)size pixelFormat:(int)format;	// 0x805fdd
-(id)initWithBytes:(char*)bytes size:(CGSize)size;	// 0x805f95
@end

