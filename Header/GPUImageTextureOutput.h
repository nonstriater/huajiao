/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageInput.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, GPUImageFramebuffer;
@protocol GPUImageTextureOutputDelegate;

@interface GPUImageTextureOutput : XXUnknownSuperclass <GPUImageInput> {
	GPUImageFramebuffer* firstInputFramebuffer;
	BOOL enabled;
	id<GPUImageTextureOutputDelegate> _delegate;
	unsigned _texture;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL enabled;	// G=0x8332b9; S=0x8332c9; 
@property(readonly, assign) unsigned texture;	// G=0x8332a9; 
@property(assign, nonatomic) id<GPUImageTextureOutputDelegate> delegate;	// G=0x833289; S=0x833299; 
-(void).cxx_destruct;	// 0x8332d9
-(void)setCurrentlyReceivingMonochromeInput:(BOOL)input;	// 0x833285
-(BOOL)wantsMonochromeInput;	// 0x833281
-(BOOL)shouldIgnoreUpdatesToThisTarget;	// 0x83327d
-(void)endProcessing;	// 0x833279
-(CGSize)maximumOutputSize;	// 0x833261
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x83325d
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x833259
-(void)setInputFramebuffer:(id)framebuffer atIndex:(int)index;	// 0x8331ed
-(int)nextAvailableTextureIndex;	// 0x8331e9
-(void)newFrameReadyAtTime:(XXStruct_pwHToB)time atIndex:(int)index;	// 0x8331c9
-(void)doneWithTexture;	// 0x8331a9
-(id)init;	// 0x83314d
@end

