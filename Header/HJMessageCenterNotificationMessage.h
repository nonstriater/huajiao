/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJMessageCenterBaseMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HJMessageCenterNotificationMessage : HJMessageCenterBaseMessage {
	int _notificationType;
	NSString* _imageURLString;
	int _relatedID;
}
@property(assign) int relatedID;	// G=0x12eec9; S=0x12eed9; 
@property(retain, nonatomic) NSString* imageURLString;	// G=0x12ee91; S=0x12eea1; 
@property(assign) int notificationType;	// G=0x12ee71; S=0x12ee81; 
-(void).cxx_destruct;	// 0x12eee9
-(id)messageContentAttributedText;	// 0x12ecf1
-(id)messageContent;	// 0x12e811
-(id)initWithNSDictionary:(id)nsdictionary;	// 0x12e36d
@end

