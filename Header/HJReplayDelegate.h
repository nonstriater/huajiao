/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol HJReplayDelegate <NSObject>
-(void)replay:(id)replay setUsers:(id)users praises:(int)praises historyMessages:(id)messages;
-(void)replay:(id)replay receivedMessage:(id)message;
-(long long)currentReplayTime;
@end

