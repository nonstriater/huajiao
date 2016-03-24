/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "IMProtoHelper.h"


@interface IMProtoPrivateChat : IMProtoHelper {
}
-(id)createGetMsgRequest:(long long)request Count:(int)count;	// 0x9f9a11
-(id)createSendMsgRequest:(id)request Appid:(int)appid Type:(int)type Data:(id)data;	// 0x9f9939
-(id)createSendMsgRequest:(id)request Appid:(int)appid Type:(int)type Data:(id)data Expire:(int)expire;	// 0x9f95a5
-(id)PChatMsgToDict:(const PChatMsg*)dict;	// 0x9f914d
-(id)parseMessage:(id)message;	// 0x9f8909
-(basic_string<char, std::char_traits<char>, std::allocator<char> >)createPacket:(Message*)packet;	// 0x9f849d
@end
