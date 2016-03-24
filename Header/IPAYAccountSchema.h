/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

@interface IPAYAccountSchema : XXUnknownSuperclass {
	BOOL _mIfCheckPwd;
	NSString* _mStatus;
	NSString* _mLoginName;
	int _mAccountId;
	NSArray* _mResrcList;
	NSArray* _mRechrTypeList;
	int _mNoPwdLimit;
	int _mAStatus;
	NSString* _mTips;
}
@property(retain, nonatomic) NSString* mTips;	// G=0xb5b129; S=0xb5b139; 
@property(assign, nonatomic) int mAStatus;	// G=0xb5b109; S=0xb5b119; 
@property(assign, nonatomic) int mNoPwdLimit;	// G=0xb5b0e9; S=0xb5b0f9; 
@property(retain, nonatomic) NSArray* mRechrTypeList;	// G=0xb5b0b1; S=0xb5b0c1; 
@property(retain, nonatomic) NSArray* mResrcList;	// G=0xb5b079; S=0xb5b089; 
@property(assign, nonatomic) int mAccountId;	// G=0xb5b059; S=0xb5b069; 
@property(retain, nonatomic) NSString* mLoginName;	// G=0xb5b021; S=0xb5b031; 
@property(retain, nonatomic) NSString* mStatus;	// G=0xb5afe9; S=0xb5aff9; 
@property(assign, nonatomic) BOOL mIfCheckPwd;	// G=0xb5afc9; S=0xb5afd9; 
+(id)parseData:(id)data;	// 0xb5a78d
-(void).cxx_destruct;	// 0xb5b161
-(id)getMResrcListWith:(int)with;	// 0xb5aec9
-(id)description;	// 0xb5ad4d
-(BOOL)copy:(id)copy;	// 0xb5ab95
-(void)reset;	// 0xb5aad5
-(void)dealloc;	// 0xb5aa95
-(id)init;	// 0xb5aa51
@end

