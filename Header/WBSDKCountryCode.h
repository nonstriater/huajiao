/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

@interface WBSDKCountryCode : XXUnknownSuperclass {
	NSString* country;
	NSString* code;
	NSArray* mcc;
	NSString* sortName;
	NSString* sortSectionName;
}
@property(retain, nonatomic) NSString* sortSectionName;	// G=0xd5d3e9; S=0xd5d3f9; 
@property(retain, nonatomic) NSString* sortName;	// G=0xd5d3b1; S=0xd5d3c1; 
@property(retain, nonatomic) NSArray* mcc;	// G=0xd5d379; S=0xd5d389; 
@property(retain, nonatomic) NSString* code;	// G=0xd5d341; S=0xd5d351; 
@property(retain, nonatomic) NSString* country;	// G=0xd5d309; S=0xd5d319; 
+(id)objectsWithJSONCountryCodeDictionary:(id)jsoncountryCodeDictionary;	// 0xd5cf95
-(void).cxx_destruct;	// 0xd5d421
@end
