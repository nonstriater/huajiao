/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol LDSimplePingDelegate <NSObject>
@optional
-(void)simplePing:(id)ping didReceiveUnexpectedPacket:(id)packet;
-(void)simplePing:(id)ping didReceivePingResponsePacket:(id)packet;
-(void)simplePing:(id)ping didFailToSendPacket:(id)sendPacket error:(id)error;
-(void)simplePing:(id)ping didSendPacket:(id)packet;
-(void)simplePing:(id)ping didFailWithError:(id)error;
-(void)simplePing:(id)ping didStartWithAddress:(id)address;
@end
