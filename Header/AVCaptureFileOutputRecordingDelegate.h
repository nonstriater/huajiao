/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AVCaptureFileOutputRecordingDelegate <NSObject>
-(void)captureOutput:(id)output didFinishRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections error:(id)error;
@optional
-(void)captureOutput:(id)output didStartRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections;
@end

