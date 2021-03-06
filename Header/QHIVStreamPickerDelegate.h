/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "NSObject.h"


@protocol QHIVStreamPickerDelegate <NSObject>
-(void)needRefreshLayer:(BOOL)layer fromPicker:(id)picker;
-(void)failToPickStreamWithError:(id)error fromPicker:(id)picker;
-(void)succToPickAudioStreamBuffer:(opaqueCMSampleBuffer*)pickAudioStreamBuffer fromPicker:(id)picker;
-(void)succToPickVideoStreamBuffer:(opaqueCMSampleBuffer*)pickVideoStreamBuffer fromPicker:(id)picker fromFile:(BOOL)file forcePTS:(XXStruct_pwHToB)pts;
@end

