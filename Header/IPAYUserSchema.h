/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface IPAYUserSchema : XXUnknownSuperclass {
	NSString* _mToken;
	NSString* _mLoginName;
	int _mUserId;
	int _mTExpire;
	NSString* _mVoucher;
	int _mVoExpire;
	NSString* _mTempToken;
}
@property(retain, nonatomic) NSString* mTempToken;	// G=0xb592a9; S=0xb592b9; 
@property(assign, nonatomic) int mVoExpire;	// G=0xb59289; S=0xb59299; 
@property(retain, nonatomic) NSString* mVoucher;	// G=0xb59251; S=0xb59261; 
@property(assign, nonatomic) int mTExpire;	// G=0xb59231; S=0xb59241; 
@property(assign, nonatomic) int mUserId;	// G=0xb59211; S=0xb59221; 
@property(retain, nonatomic) NSString* mLoginName;	// G=0xb591d9; S=0xb591e9; 
@property(retain, nonatomic) NSString* mToken;	// G=0xb591a1; S=0xb591b1; 
+(id)parseData:(id)data;	// 0xb58c3d
-(void).cxx_destruct;	// 0xb592e1
-(id)description;	// 0xb59085
-(BOOL)copy:(id)copy;	// 0xb58f29
-(void)reset;	// 0xb58e8d
-(void)dealloc;	// 0xb58e4d
-(id)init;	// 0xb58e09
@end

