/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "GPUImageOutput.h"
#import "GPUImageInput.h"

@class NSMutableDictionary, NSObject, GLProgram, NSString, GPUImageFramebuffer;
@protocol OS_dispatch_semaphore;

@interface GPUImageFilter : GPUImageOutput <GPUImageInput> {
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
	BOOL _preventRendering;
	CVBufferRef _renderTarget;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL currentlyReceivingMonochromeInput;	// G=0x80c761; S=0x80c771; 
@property(assign, nonatomic) BOOL preventRendering;	// G=0x80c741; S=0x80c751; 
@property(readonly, assign) CVBufferRef renderTarget;	// G=0x80c781; 
+(const float*)textureCoordinatesForRotation:(int)rotation;	// 0x80aa99
-(void).cxx_destruct;	// 0x80c791
-(BOOL)wantsMonochromeInput;	// 0x80c73d
-(void)endProcessing;	// 0x80c651
-(CGSize)maximumOutputSize;	// 0x80c639
-(void)forceProcessingAtSizeRespectingAspectRatio:(CGSize)sizeRespectingAspectRatio;	// 0x80c581
-(void)forceProcessingAtSize:(CGSize)size;	// 0x80c4f1
-(void)setInputRotation:(int)rotation atIndex:(int)index;	// 0x80c4e1
-(void)setInputSize:(CGSize)size atIndex:(int)index;	// 0x80c349
-(CGPoint)rotatedPoint:(CGPoint)point forRotation:(int)rotation;	// 0x80c2a9
-(CGSize)rotatedSize:(CGSize)size forIndex:(int)index;	// 0x80c269
-(void)setInputFramebuffer:(id)framebuffer atIndex:(int)index;	// 0x80c21d
-(int)nextAvailableTextureIndex;	// 0x80c219
-(void)newFrameReadyAtTime:(XXStruct_pwHToB)time atIndex:(int)index;	// 0x80c18d
-(void)setUniformsForProgramAtIndex:(unsigned)index;	// 0x80c149
-(void)setAndExecuteUniformStateCallbackAtIndex:(int)index forProgram:(id)program toBlock:(id)block;	// 0x80c0b1
-(void)setInteger:(int)integer forUniform:(int)uniform program:(id)program;	// 0x80bf7d
-(void)setFloatArray:(float*)array length:(int)length forUniform:(int)uniform program:(id)program;	// 0x80bdad
-(void)setVec4:(GPUVector4)a4 forUniform:(int)uniform program:(id)program;	// 0x80bc5d
-(void)setVec3:(GPUVector3)a3 forUniform:(int)uniform program:(id)program;	// 0x80bb19
-(void)setSize:(CGSize)size forUniform:(int)uniform program:(id)program;	// 0x80b9b1
-(void)setPoint:(CGPoint)point forUniform:(int)uniform program:(id)program;	// 0x80b849
-(void)setFloat:(float)aFloat forUniform:(int)uniform program:(id)program;	// 0x80b715
-(void)setMatrix4f:(GPUMatrix4x4)f forUniform:(int)uniform program:(id)program;	// 0x80b55d
-(void)setMatrix3f:(GPUMatrix3x3)f forUniform:(int)uniform program:(id)program;	// 0x80b3e1
-(void)setFloatArray:(float*)array length:(int)length forUniform:(id)uniform;	// 0x80b38d
-(void)setFloatVec4:(GPUVector4)a4 forUniform:(id)uniform;	// 0x80b331
-(void)setFloatVec3:(GPUVector3)a3 forUniformName:(id)uniformName;	// 0x80b2d9
-(void)setPoint:(CGPoint)point forUniformName:(id)uniformName;	// 0x80b285
-(void)setSize:(CGSize)size forUniformName:(id)uniformName;	// 0x80b231
-(void)setFloat:(float)aFloat forUniformName:(id)uniformName;	// 0x80b1e9
-(void)setInteger:(int)integer forUniformName:(id)uniformName;	// 0x80b1a1
-(void)setBackgroundColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x80b151
-(CGSize)outputFrameSize;	// 0x80b131
-(void)informTargetsAboutNewFrameAtTime:(XXStruct_pwHToB)time;	// 0x80ad65
-(void)renderToTextureWithVertices:(const float*)vertices textureCoordinates:(const float*)coordinates;	// 0x80aab1
-(CGSize)sizeOfFBO;	// 0x80a9f1
-(CGImageRef)newCGImageFromCurrentlyProcessedOutput;	// 0x80a955
-(void)useNextFrameForImageCapture;	// 0x80a92d
-(void)dealloc;	// 0x80a901
-(void)setupFilterForSize:(CGSize)size;	// 0x80a8fd
-(void)initializeAttributes;	// 0x80a8b5
-(id)init;	// 0x80a879
-(id)initWithFragmentShaderFromFile:(id)file;	// 0x80a7a1
-(id)initWithFragmentShaderFromString:(id)string;	// 0x80a765
-(id)initWithVertexShaderFromString:(id)string fragmentShaderFromString:(id)string2;	// 0x80a381
@end

