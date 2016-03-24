/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol PlayerProtocol <NSObject>
-(void)setVersion:(float)version;
-(BOOL)isHeadphone;
-(void)setIsHeadphone:(BOOL)headphone;
-(double)getDuration:(unsigned long)duration;
-(void)enableBus:(unsigned long)bus isEnable:(BOOL)enable;
-(void)barrier;
-(int)status;
-(id)getObserver;
-(void)saveAudio:(id)audio;
-(float)pitch;
-(void)setPitch:(float)pitch;
-(void)setEQParam:(int)param gain:(float)gain;
-(void)setEffectParam:(unsigned long)param param:(id)param2;
-(void)enableEffect:(unsigned long)effect enable:(BOOL)enable;
-(BOOL)setEffect:(unsigned long)effect effect:(id)effect2;
-(double)absoluteTime;
-(double)currentTime;
-(void)setProgress:(float)progress;
-(float)progress;
-(float)getVolume:(unsigned long)volume;
-(float)getVolume;
-(void)setVolume:(float)volume;
-(void)setVolume:(unsigned long)volume volume:(float)volume2;
-(void)seek:(unsigned long long)seek time:(float)time;
-(void)pause;
-(void)resume;
-(void)stop;
-(void)record:(id)record saveTo:(id)to;
-(void)play;
-(void)attachAudio:(unsigned long)audio song:(id)song;
@end

