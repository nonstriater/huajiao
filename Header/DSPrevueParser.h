/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DSParser.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface DSPrevueParser : DSParser {
	NSArray* _o_list;
	long long _i_offset;
}
@property(retain, nonatomic) NSArray* o_list;	// G=0x3e1041; S=0x3e1051; 
@property(assign, nonatomic) long long i_offset;	// G=0x3e1015; S=0x3e102d; 
-(void).cxx_destruct;	// 0x3e1079
-(void)handleResponse:(id)response;	// 0x3e0871
-(double)testTimeStamp;	// 0x3e0629
@end
