/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData;
@protocol NSCoding;

@interface AliSecXSSKeychainQuery : XXUnknownSuperclass {
	NSString* _account;
	NSString* _service;
	NSString* _label;
	NSData* _passwordData;
	NSString* _accessGroup;
}
@property(copy, nonatomic) NSString* password;	// G=0xd0f2e1; S=0xd0f2a1; 
@property(copy, nonatomic) id<NSCoding> passwordObject;	// G=0xd0f20d; S=0xd0f1c5; 
@property(copy, nonatomic) NSData* passwordData;	// G=0xd0fa71; S=0xd0fa85; 
@property(copy, nonatomic) NSString* accessGroup;	// G=0xd0fa95; S=0xd0faa9; 
@property(copy, nonatomic) NSString* label;	// G=0xd0fa4d; S=0xd0fa61; 
@property(copy, nonatomic) NSString* service;	// G=0xd0fa29; S=0xd0fa3d; 
@property(copy, nonatomic) NSString* account;	// G=0xd0fa05; S=0xd0fa19; 
+(id)errorWithCode:(long)code;	// 0xd0f4e5
-(void).cxx_destruct;	// 0xd0fab9
-(id)query;	// 0xd0f385
-(BOOL)fetch:(id*)fetch;	// 0xd0f021
-(id)fetchAll:(id*)all;	// 0xd0ef1d
-(BOOL)deleteItem:(id*)item;	// 0xd0ee15
-(BOOL)save:(id*)save;	// 0xd0ec15
@end

