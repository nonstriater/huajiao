/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol APIBaseCallback <NSObject>
-(void)apiBase:(id)base didWriteData:(long long)data totalBytesWritten:(long long)written expectedTotalBytes:(long long)bytes;
-(void)apiBase:(id)base didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(void)apiBase:(id)base didResponse:(id)response;
@end
