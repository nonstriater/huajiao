/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WBBaseRequest.h"

@class WBOrderObject;

@interface WBPaymentRequest : WBBaseRequest {
	WBOrderObject* order;
}
@property(retain, nonatomic) WBOrderObject* order;	// G=0xd46eb5; S=0xd46ec5; 
+(Class)associateResponseClass;	// 0xd46e99
+(id)requestWithOrder:(id)order;	// 0xd46bf9
-(void).cxx_destruct;	// 0xd46eed
-(void)loadFromDictionary:(id)dictionary;	// 0xd46ddd
-(void)storeToDictionary:(id)dictionary;	// 0xd46d11
-(id)validate;	// 0xd46c59
-(BOOL)canBeReceived;	// 0xd46c55
-(BOOL)canBeSent;	// 0xd46c51
@end

