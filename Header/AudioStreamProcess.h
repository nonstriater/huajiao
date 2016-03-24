/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AudioProcess.h"
#import "living-Structs.h"

@class NSArray;
@protocol AudioStreamProcessDelegate;

@interface AudioStreamProcess : AudioProcess {
	long long frameSaved;
	long long absFrame;
	BusInfo busInfos[3];
	int recFrames;
	int encFrames;
	id<AudioStreamProcessDelegate> _delegate;
	NSArray* _cacheTimes;
}
@property(retain) NSArray* cacheTimes;	// G=0x494d31; S=0x494d45; 
@property(assign, nonatomic) id<AudioStreamProcessDelegate> delegate;	// G=0x494d11; S=0x494d21; 
-(void)setCacheTime:(id)time;	// 0x494d01
-(double)absoluteTime;	// 0x494cc1
-(void)_attachAudio:(unsigned long)audio song:(id)song;	// 0x494bbd
-(void)_record:(id)record saveTo:(id)to;	// 0x494a21
-(float)progress;	// 0x494789
-(void)_stop;	// 0x494551
-(void)_seek:(long long)seek time:(float)time;	// 0x49454d
-(void)_start;	// 0x4944c5
-(void)createSaveAUGraphEx:(BOOL)ex;	// 0x4941e9
-(void)createRecordAUGraphEx;	// 0x493dad
-(void)setupStreamFormat;	// 0x493d2d
-(void)dealloc;	// 0x493cf1
-(id)initWithSampleRate:(double)sampleRate;	// 0x493b99
-(id)init;	// 0x493b35
-(void)resetBusInfo;	// 0x493b11
@end

