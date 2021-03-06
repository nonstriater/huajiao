/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "NSObject.h"


@protocol GPUImageInput <NSObject>
-(void)setCurrentlyReceivingMonochromeInput:(BOOL)input;
-(BOOL)wantsMonochromeInput;
-(BOOL)enabled;
-(BOOL)shouldIgnoreUpdatesToThisTarget;
-(void)endProcessing;
-(CGSize)maximumOutputSize;
-(void)setInputRotation:(int)rotation atIndex:(int)index;
-(void)setInputSize:(CGSize)size atIndex:(int)index;
-(int)nextAvailableTextureIndex;
-(void)setInputFramebuffer:(id)framebuffer atIndex:(int)index;
-(void)newFrameReadyAtTime:(XXStruct_pwHToB)time atIndex:(int)index;
@end

