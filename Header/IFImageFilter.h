/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageOutput.h"
#import "GPUImageInput.h"

@class NSMutableDictionary, NSObject, GLProgram, NSString, GPUImageFramebuffer, NSMutableArray;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface IFImageFilter : GPUImageOutput <GPUImageInput> {
	GPUImageFramebuffer* firstInputFramebuffer;
	GLProgram* filterProgram;
	int filterPositionAttribute;
	int filterTextureCoordinateAttribute;
	int filterInputTextureUniform;
	float backgroundColorRed;
	float backgroundColorGreen;
	float backgroundColorBlue;
	float backgroundColorAlpha;
	BOOL isEndProcessing;
	CGSize currentFilterSize;
	int inputRotation;
	BOOL currentlyReceivingMonochromeInput;
	NSMutableDictionary* uniformStateRestorationBlocks;
	NSObject<OS_dispatch_semaphore>* imageCaptureSemaphore;
	GPUImageFramebuffer* inputFrameBuffer2;
	GPUImageFramebuffer* inputFrameBuffer3;
	GPUImageFramebuffer* inputFrameBuffer4;
	GPUImageFramebuffer* inputFrameBuffer5;
	GPUImageFramebuffer* inputFrameBuffer6;
	int filterInputTextureUniform2;
	int filterInputTextureUniform3;
	int filterInputTextureUniform4;
	int filterInputTextureUniform5;
	int filterInputTextureUniform6;
	id _prepareBlock;
	BOOL prepared;
	NSMutableArray* auxPics;
	BOOL _preventRendering;
	CVBufferRef _renderTarget;
	int _frameCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int frameCount;	// G=0x3e0c1; S=0x3e0d1; 
@property(assign, nonatomic) BOOL currentlyReceivingMonochromeInput;	// G=0x3e091; S=0x3e0a1; 
@property(assign, nonatomic) BOOL preventRendering;	// G=0x3e071; S=0x3e081; 
@property(readonly, assign) CVBufferRef renderTarget;	// G=0x3e0b1; 
+(const float*)textureCoordinatesForRotation:(int)rotation;	// 0x3c00d
-(void).cxx_destruct;	// 0x3e0e1
-(BOOL)wantsMonochromeInput;	// 0x3e06d
-(void)endProcessing;	// 0x3df81
-(CGSize)maximumOutputSize;	// 0x3df69
-(void)forceProcessingAtSizeRespectingAspectRatio:(CGSize)sizeRespectingAspectRatio;	// 0x3deb1
-(void)forceProcessingAtSize:(CGSize)size;	// 0x3de21
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x3de11
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x3dc55
-(CGPoint)rotatedPoint:(CGPoint)point forRotation:(int)rotation;	// 0x3dbb5
-(CGSize)rotatedSize:(CGSize)size forIndex:(int)index;	// 0x3db75
-(void)setInputFramebuffer:(id)framebuffer atIndex:(int)index;	// 0x3dae1
-(int)nextAvailableTextureIndex;	// 0x3da71
-(void)newFrameReadyAtTime:(XXStruct_pwHToB)time atIndex:(int)index;	// 0x3d999
-(void)resetAux;	// 0x3d8e5
-(void)setUniformsForProgramAtIndex:(unsigned)index;	// 0x3d8a1
-(void)setAndExecuteUniformStateCallbackAtIndex:(int)index forProgram:(id)program toBlock:(id)block;	// 0x3d809
-(void)setInteger:(int)integer forUniform:(int)uniform program:(id)program;	// 0x3d6d5
-(void)setFloatArray:(float*)array length:(int)length forUniform:(int)uniform program:(id)program;	// 0x3d505
-(void)setVec4:(GPUVector4)a4 forUniform:(int)uniform program:(id)program;	// 0x3d3b5
-(void)setVec3:(GPUVector3)a3 forUniform:(int)uniform program:(id)program;	// 0x3d271
-(void)setSize:(CGSize)size forUniform:(int)uniform program:(id)program;	// 0x3d109
-(void)setPoint:(CGPoint)point forUniform:(int)uniform program:(id)program;	// 0x3cfa1
-(void)setFloat:(float)aFloat forUniform:(int)uniform program:(id)program;	// 0x3ce6d
-(void)setMatrix4f:(GPUMatrix4x4)f forUniform:(int)uniform program:(id)program;	// 0x3ccb5
-(void)setMatrix3f:(GPUMatrix3x3)f forUniform:(int)uniform program:(id)program;	// 0x3cb39
-(void)setFloatArray:(float*)array length:(int)length forUniform:(id)uniform;	// 0x3cae5
-(void)setFloatVec4:(GPUVector4)a4 forUniform:(id)uniform;	// 0x3ca89
-(void)setFloatVec3:(GPUVector3)a3 forUniformName:(id)uniformName;	// 0x3ca31
-(void)setPoint:(CGPoint)point forUniformName:(id)uniformName;	// 0x3c9dd
-(void)setSize:(CGSize)size forUniformName:(id)uniformName;	// 0x3c989
-(void)setFloat:(float)aFloat forUniformName:(id)uniformName;	// 0x3c941
-(void)setInteger:(int)integer forUniformName:(id)uniformName;	// 0x3c8f9
-(void)setBackgroundColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3c8a9
-(CGSize)outputFrameSize;	// 0x3c889
-(void)informTargetsAboutNewFrameAtTime:(XXStruct_pwHToB)time;	// 0x3c4bd
-(void)renderToTextureWithVertices:(const float*)vertices textureCoordinates:(const float*)coordinates;	// 0x3c025
-(CGSize)sizeOfFBO;	// 0x3bf65
-(CGImageRef)newCGImageFromCurrentlyProcessedOutput;	// 0x3bec9
-(void)useNextFrameForImageCapture;	// 0x3bea1
-(void)dealloc;	// 0x3be75
-(void)setupFilterForSize:(CGSize)size;	// 0x3be71
-(void)initializeAttributes;	// 0x3be29
-(id)initWithFragmentShaderFromFile:(id)file withPrepareBlock:(id)prepareBlock;	// 0x3bd3d
-(id)initWithFragmentShaderFromString:(id)string withPrepareBlock:(id)prepareBlock;	// 0x3bce1
-(id)initWithVertexShaderFromString:(id)string fragmentShaderFromString:(id)string2 withPrepareBlock:(id)prepareBlock;	// 0x3b7dd
-(void)addAuxPics:(id)pics;	// 0x3b7bd
@end

