/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "GPUImageVideoCameraDelegate.h"
#import "GPUImageInput.h"

@class GPUImageVideoCamera, AVCaptureSession, AVCaptureVideoPreviewLayer, GPUImageView, HJGPUImageMovieWriter, NSMutableArray, AVCaptureDeviceInput, AVCaptureVideoDataOutput, GPUImagePicture, AVCaptureConnection, HJEffectInfo, NSObject, AVCaptureAudioDataOutput, AVCaptureDevice, GPUImageOutput, HJEffect, GPUImageFilterPipeline, NSString;
@protocol QHIVStreamPickerDelegate, OS_dispatch_queue;

@interface QHIVStreamPicker : XXUnknownSuperclass <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, GPUImageVideoCameraDelegate, GPUImageInput> {
	BOOL bUseGPUImage;
	GPUImageFilterPipeline* pipeline;
	GPUImageView* imageView;
	GPUImageVideoCamera* videoCamera;
	GPUImageOutput<GPUImageInput>* skinFilter;
	GPUImageOutput<GPUImageInput>* skinFilter1;
	GPUImageOutput<GPUImageInput>* skinFilter4;
	GPUImageOutput<GPUImageInput>* snapshotFilter;
	HJGPUImageMovieWriter* movieWriter;
	NSString* _desiredPreset;
	GPUImagePicture* sourceImage;
	BOOL faceThinking;
	id cleanupBlock;
	AVCaptureSession* _session;
	AVCaptureDevice* _videoDevice;
	AVCaptureVideoDataOutput* _videoOutput;
	AVCaptureConnection* _videoConnection;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	AVCaptureDeviceInput* _videoInput;
	NSObject<OS_dispatch_queue>* _audioQueue;
	AVCaptureAudioDataOutput* _audioOutput;
	AVCaptureConnection* _audioConnection;
	int _framerate;
	BOOL _isInRightStatus;
	int _desiredPosition;
	NSMutableArray* allFramePoints_;
	BOOL _needAudio;
	BOOL _enableTorch;
	BOOL _showFront;
	BOOL _isRecording;
	int _beautifyAlgorithm;
	int _presetSize;
	unsigned _fps;
	unsigned _bitrate;
	id<QHIVStreamPickerDelegate> _delegate;
	NSObject<OS_dispatch_queue>* _videoQueue;
	HJEffectInfo* _effectByOwn;
	HJEffectInfo* _effectByAudience;
	HJEffect* _currentEffect;
	void* _hTracker;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) void* hTracker;	// G=0x8271ad; S=0x8271bd; 
@property(retain, nonatomic) HJEffect* currentEffect;	// G=0x827175; S=0x827185; 
@property(retain, nonatomic) HJEffectInfo* effectByAudience;	// G=0x82713d; S=0x82714d; 
@property(retain, nonatomic) HJEffectInfo* effectByOwn;	// G=0x827105; S=0x827115; 
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* videoQueue;	// G=0x8270cd; S=0x8270dd; 
@property(assign, nonatomic) __weak id<QHIVStreamPickerDelegate> delegate;	// G=0x8270ad; S=0x81b4e5; 
@property(assign, nonatomic) unsigned bitrate;	// G=0x82708d; S=0x82709d; 
@property(assign, nonatomic) unsigned fps;	// G=0x82706d; S=0x82707d; 
@property(assign, nonatomic) int presetSize;	// G=0x82705d; S=0x8204a5; 
@property(assign, nonatomic) BOOL isRecording;	// G=0x82704d; S=0x81a2c9; 
@property(assign, nonatomic) int beautifyAlgorithm;	// G=0x82703d; S=0x81a8ed; 
@property(assign, nonatomic) BOOL showFront;	// G=0x82702d; S=0x81fa41; 
@property(assign, nonatomic) BOOL enableTorch;	// G=0x82701d; S=0x82038d; 
@property(assign, nonatomic) BOOL needAudio;	// G=0x826ffd; S=0x82700d; 
+(void)_initVideoDevice:(id)device showFront:(BOOL)front enableTorch:(BOOL)torch;	// 0x81b5cd
-(void).cxx_destruct;	// 0x8271cd
-(id)extractEstFacePoint:(cv_pointf_t*)point;	// 0x826925
-(void)updateFilter:(id)filter leftEye:(CGPoint)eye rightEye:(CGPoint)eye3 nose:(CGPoint)nose mouthUp:(CGPoint)up smile:(double)smile brow:(double)brow openMouth:(double)mouth closeEye:(double)eye9;	// 0x826261
-(void)updateFilter:(id)filter leftEye:(CGPoint)eye rightEye:(CGPoint)eye3 nose:(CGPoint)nose mouthUp:(CGPoint)up;	// 0x82620d
-(void)grepFacesForSampleBuffer:(opaqueCMSampleBuffer*)sampleBuffer;	// 0x825281
-(void)willOutputSampleBuffer:(opaqueCMSampleBuffer*)buffer;	// 0x825191
-(void)appendSoundData:(id)data ptsMS:(float)ms;	// 0x825001
-(void)initMixer;	// 0x824ec9
-(void)resumeMp3Player;	// 0x824e99
-(void)pauseMp3Player;	// 0x824e6d
-(void)stopMp3Player;	// 0x824e5d
-(void)startMp3FilePlayer:(id)player;	// 0x8243bd
-(void)testMp3;	// 0x823f35
-(void)setFocusPointOfInterest:(CGPoint)interest;	// 0x823e01
-(void)startFilePlayer:(id)player adaptorHeight:(int)height adaptorWidth:(int)width;	// 0x822ba1
-(void)stopRecord;	// 0x822b7d
-(void)__startRecordWithURL:(id)url adaptorHeight:(int)height adaptorWidth:(int)width;	// 0x822a91
-(void)startRecordWithURL:(id)url adaptorHeight:(int)height adaptorWidth:(int)width;	// 0x822a6d
-(void)uninitFilePlayback;	// 0x8227d1
-(void)captureOutput:(id)output didOutputSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;	// 0x820ea5
-(void)processVideoSample:(opaqueCMSampleBuffer*)sample;	// 0x8208c9
-(void)_setPresetSize:(int)size;	// 0x8207b1
-(void)__setPresetSize:(int)size withSession:(id)session;	// 0x8204c9
-(void)_setEnableTorch:(BOOL)torch withDevice:(id)device;	// 0x820061
-(void)initAndStartCapture;	// 0x81fedd
-(void)resetSession;	// 0x81fead
-(void)stopCapture;	// 0x81f9f9
-(void)startCapture;	// 0x81f975
-(void)startCaptureWithFrameRate:(int)frameRate;	// 0x81f945
-(id)videoLayer;	// 0x81f911
-(void)initAudioSessionConfig;	// 0x81f519
-(void)initGPUImagePipeline;	// 0x81caed
-(id)getEffectFromConfig;	// 0x81c70d
-(void)configVideoConnection:(id)connection;	// 0x81c5a1
-(void)initVideoSessionConfig;	// 0x81ba29
-(void)initVideoSession;	// 0x81b785
-(void)initialize;	// 0x81b269
-(void)routeChanged:(id)changed;	// 0x81b0a5
-(void)audioSessionInterrupted:(id)interrupted;	// 0x81b0a1
-(void)dealloc;	// 0x81aec9
-(void)resetFrameRate;	// 0x81ab21
-(void)setFrameRate:(int)rate;	// 0x81aad5
-(void)showEffectWithID:(id)anId path:(id)path loopCount:(int)count source:(int)source;	// 0x81a445
-(void)reloadFaceEffect;	// 0x81a405
-(id)initWithGPU:(BOOL)gpu;	// 0x81a2e9
-(BOOL)getIsRecording;	// 0x81a2d9
@end

