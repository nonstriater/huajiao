/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

@interface APIResponse : XXUnknownSuperclass <NSCoding> {
	int _detailRetCode;
	int _retCode;
	int _seq;
	NSString* _errorMsg;
	NSDictionary* _jsonResponse;
	NSString* _message;
	id _userData;
}
@property(retain, nonatomic) id userData;	// G=0xb39875; S=0xb39885; 
@property(retain, nonatomic) NSString* message;	// G=0xb3983d; S=0xb3984d; 
@property(retain, nonatomic) NSDictionary* jsonResponse;	// G=0xb39805; S=0xb39815; 
@property(retain, nonatomic) NSString* errorMsg;	// G=0xb397cd; S=0xb397dd; 
@property(assign, nonatomic) int seq;	// G=0xb397ad; S=0xb397bd; 
@property(assign, nonatomic) int retCode;	// G=0xb3978d; S=0xb3979d; 
@property(assign, nonatomic) int detailRetCode;	// G=0xb3976d; S=0xb3977d; 
-(void).cxx_destruct;	// 0xb39899
-(void)encodeWithCoder:(id)coder;	// 0xb39621
-(id)initWithCoder:(id)coder;	// 0xb394a9
@end

