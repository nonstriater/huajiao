/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class HJChatUser, NSString;

__attribute__((visibility("hidden")))
@interface HJMessageCenterBaseMessage : XXUnknownSuperclass {
	NSString* _messageContent;
	BOOL _isRead;
	NSString* _messageID;
	HJChatUser* _messageSender;
	double _messageTimeInterval;
}
@property(assign) BOOL isRead;	// G=0x168839; S=0x16884d; 
@property(retain, nonatomic) HJChatUser* messageSender;	// G=0x168801; S=0x168811; 
@property(assign) double messageTimeInterval;	// G=0x168799; S=0x1687cd; 
@property(copy, nonatomic) NSString* messageContent;	// G=0x168039; S=0x16804d; 
@property(retain) NSString* messageID;	// G=0x168775; S=0x168789; 
-(void).cxx_destruct;	// 0x16885d
-(void)addVTextAttachment:(id)attachment;	// 0x1684c1
-(id)description;	// 0x168479
-(id)messageContentAttributedText;	// 0x168475
-(id)getFormattedMessageTime;	// 0x1680d5
-(BOOL)isEqual:(id)equal;	// 0x167f89
-(id)initWithNSDictionary:(id)nsdictionary;	// 0x167ebd
@end
