/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WBBaseResponse.h"

@class NSString;

@interface WBPaymentResponse : WBBaseResponse {
	NSString* payStatusCode;
	NSString* payStatusMessage;
}
@property(retain, nonatomic) NSString* payStatusMessage;	// G=0xd5d6b5; S=0xd5d6c5; 
@property(retain, nonatomic) NSString* payStatusCode;	// G=0xd5d67d; S=0xd5d68d; 
-(void).cxx_destruct;	// 0xd5d6ed
-(void)loadFromDictionary:(id)dictionary;	// 0xd5d5b9
-(void)storeToDictionary:(id)dictionary;	// 0xd5d4c5
-(id)validate;	// 0xd5d499
-(BOOL)canBeReceived;	// 0xd5d495
-(BOOL)canBeSent;	// 0xd5d491
@end

