/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SongStudioDelegate <NSObject>
-(void)songStudio:(id)studio mixerAudioDataArrived:(id)arrived pts:(float)pts;
-(void)songStudioPlayerStatusChanged:(id)changed;
@end

