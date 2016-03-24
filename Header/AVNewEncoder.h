/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSFileHandle, NSObject, VideoEncoder, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AVNewEncoder : XXUnknownSuperclass {
	VideoEncoder* _headerWriter;
	VideoEncoder* _writer;
	NSFileHandle* _inputFile;
	NSObject<OS_dispatch_queue>* _readQueue;
	NSObject<OS_dispatch_source>* _readSource;
	BOOL _swapping;
	int _currentFile;
	int _height;
	int _width;
	int _bitrate;
	int _keyFrameInterval;
	NSData* _avcC;
	int _lengthSize;
	POCState _pocState;
	int _prevPOC;
	BOOL _foundMDAT;
	unsigned long long _posMDAT;
	int _bytesToNextAtom;
	BOOL _needParams;
	int _prev_nal_idc;
	int _prev_nal_type;
	NSMutableArray* _pendingNALU;
	NSMutableArray* _times;
	NSMutableArray* _frames;
	id _outputBlock;
	id _paramsBlock;
	int _bitspersecond;
	double _firstptsMS;
	long _bytesBeforeMDAT;
	long _bytesAfterMDAT;
	long _updatesBeforeMDAT;
	long _updatesBeforeMDATWithBytesRead;
	long _updatesAfterMDAT;
	long _adaptorWidth;
	long _adaptorHeight;
	id initWriterBlock;
}
@property(readonly, assign) int bitspersecond;	// G=0x814c25; 
+(id)encoderForHeight:(int)height andWidth:(int)width bitrate:(int)bitrate keyFrameInterval:(int)interval adaptorHeight:(int)height5 adaptorWidth:(int)width6;	// 0x811c81
-(id).cxx_construct;	// 0x814d31
-(void).cxx_destruct;	// 0x814c35
-(void)shutdownWithHandler:(id)handler;	// 0x814961
-(id)getConfigData;	// 0x814935
-(void)onNALU:(id)nalu;	// 0x814695
-(void)onEncodedFrame;	// 0x814279
-(void)processStoredFrames;	// 0x813f39
-(void)deliverFrame:(id)frame withTime:(double)time;	// 0x813d25
-(void)onFileUpdate;	// 0x813989
-(void)readAndDeliver:(unsigned)deliver;	// 0x8137a9
-(void)swapFiles:(id)files;	// 0x813401
-(void)encodeFrame:(opaqueCMSampleBuffer*)frame fromFile:(BOOL)file ptsDeltaMS:(double)ms forcePTS:(XXStruct_pwHToB)pts;	// 0x812b41
-(void)onParamsCompletion;	// 0x8128b9
-(BOOL)parseParams:(id)params;	// 0x812359
-(void)encodeWithBlock:(id)block onParams:(id)params;	// 0x8122a5
-(void)initForHeight:(int)height andWidth:(int)width bitrate:(int)bitrate keyFrameInterval:(int)interval adaptorHeight:(int)height5 adaptorWidth:(int)width6;	// 0x811e95
-(id)makeFilename;	// 0x811d69
@end
