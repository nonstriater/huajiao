/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface IPAYPayOrderSchema : XXUnknownSuperclass {
	NSString* _mOrderId;
	NSString* _mPayParam;
	int _mPayChannel;
	int _mPayResult;
}
@property(assign, nonatomic) int mPayResult;	// G=0xb5da25; S=0xb5da35; 
@property(assign, nonatomic) int mPayChannel;	// G=0xb5da05; S=0xb5da15; 
@property(retain, nonatomic) NSString* mPayParam;	// G=0xb5d9cd; S=0xb5d9dd; 
@property(retain, nonatomic) NSString* mOrderId;	// G=0xb5d995; S=0xb5d9a5; 
+(id)parseData:(id)data;	// 0xb5d5f5
-(void).cxx_destruct;	// 0xb5da45
-(id)description;	// 0xb5d8d5
-(BOOL)copy:(id)copy;	// 0xb5d805
-(void)reset;	// 0xb5d7a9
-(void)dealloc;	// 0xb5d769
-(id)init;	// 0xb5d725
@end

