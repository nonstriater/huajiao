/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface IPAYPayTypeSchema : XXUnknownSuperclass {
	int _mPayType;
	NSString* _mPayTypeDesc;
	int _mDisCount;
	int _mRechrRate;
	int _mIfSplit;
	int _mMinPayFee;
	int _mMaxPayFee;
	int _mIfCheckPwd;
}
@property(assign, nonatomic) int mIfCheckPwd;	// G=0xb5a2d9; S=0xb5a2e9; 
@property(assign, nonatomic) int mMaxPayFee;	// G=0xb5a2b9; S=0xb5a2c9; 
@property(assign, nonatomic) int mMinPayFee;	// G=0xb5a299; S=0xb5a2a9; 
@property(assign, nonatomic) int mIfSplit;	// G=0xb5a279; S=0xb5a289; 
@property(assign, nonatomic) int mRechrRate;	// G=0xb5a259; S=0xb5a269; 
@property(assign, nonatomic) int mDisCount;	// G=0xb5a239; S=0xb5a249; 
@property(retain, nonatomic) NSString* mPayTypeDesc;	// G=0xb5a201; S=0xb5a211; 
@property(assign, nonatomic) int mPayType;	// G=0xb5a1e1; S=0xb5a1f1; 
+(id)parseData:(id)data;	// 0xb59c91
-(void).cxx_destruct;	// 0xb5a2f9
-(id)description;	// 0xb5a0d9
-(BOOL)copy:(id)copy;	// 0xb59f81
-(void)reset;	// 0xb59ed5
-(void)dealloc;	// 0xb59e95
-(id)init;	// 0xb59e51
@end

