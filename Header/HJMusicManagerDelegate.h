/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol HJMusicManagerDelegate <NSObject>
@optional
-(void)mid:(id)mid downloadProgress:(float)progress;
-(void)mid:(id)mid didChangeDownloadState:(int)state;
-(void)mid:(id)mid didChangePlayState:(int)state;
@end

