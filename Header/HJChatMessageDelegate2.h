/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol HJChatMessageDelegate2 <NSObject>
@optional
-(void)chatDidReceiveWatches:(id)chat inLive:(id)live;
-(void)chatDidUser:(id)chat quitLive:(id)live totalMember:(int)member;
-(void)chatDidArriveJoinedUser:(id)chat inLive:(id)live;
-(void)chatDidUser:(id)chat joinLive:(id)live totalMember:(int)member;
-(void)chatDidReceivePraise:(long long)chat inLive:(id)live fromUser:(id)user;
-(void)chatDidReceiveMessage:(id)chat inLive:(id)live fromUser:(id)user;
@end
