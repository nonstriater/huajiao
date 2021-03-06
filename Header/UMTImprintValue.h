/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UMTBase.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UMTImprintValue : XXUnknownSuperclass <UMTBase, NSCoding> {
	NSString* __value;
	long long __ts;
	NSString* __guid;
	BOOL __value_isset;
	BOOL __ts_isset;
	BOOL __guid_isset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;	// G=0xaf8ce5; 
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString* guid;	// G=0xaf88b5; S=0xaf88e9; 
@property(assign, nonatomic, getter=ts, setter=setTs:) long long ts;	// G=0xaf8851; S=0xaf8869; 
@property(retain, nonatomic, getter=value, setter=setValue:) NSString* value;	// G=0xaf8789; S=0xaf87bd; 
-(void)validate;	// 0xaf8c55
-(void)write:(id)write;	// 0xaf8acd
-(void)read:(id)read;	// 0xaf897d
-(void)unsetGuid;	// 0xaf8945
-(BOOL)guidIsSet;	// 0xaf8935
-(void)unsetTs;	// 0xaf88a1
-(BOOL)tsIsSet;	// 0xaf8891
-(void)unsetValue;	// 0xaf8819
-(BOOL)valueIsSet;	// 0xaf8809
-(void)dealloc;	// 0xaf8725
-(void)encodeWithCoder:(id)coder;	// 0xaf8661
-(id)initWithCoder:(id)coder;	// 0xaf8509
-(id)initWithValue:(id)value ts:(long long)ts guid:(id)guid;	// 0xaf8451
-(id)init;	// 0xaf8425
@end

