/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UMANBaseEvent : XXUnknownSuperclass <NSCoding> {
	double _ts;
	NSString* _type;
	NSString* _date;
	NSString* _time;
	NSString* _session_id;
	BOOL _sendingFlag;
}
@property(assign, nonatomic) BOOL sendingFlag;	// G=0xb13805; S=0xb13815; 
@property(copy, nonatomic) NSString* session_id;	// G=0xb13791; S=0xb137a9; 
@property(copy, nonatomic) NSString* time;	// G=0xb13749; S=0xb13761; 
@property(copy, nonatomic) NSString* date;	// G=0xb13701; S=0xb13719; 
@property(copy, nonatomic) NSString* type;	// G=0xb136b9; S=0xb136d1; 
@property(assign, nonatomic) double ts;	// G=0xb137d9; S=0xb137f1; 
-(void)outputUMLog;	// 0xb136b5
-(void)encodeWithCoder:(id)coder;	// 0xb1359d
-(id)initWithCoder:(id)coder;	// 0xb1345d
-(unsigned)hash;	// 0xb13439
-(BOOL)isEqualToEvent:(id)event;	// 0xb133e9
-(BOOL)isEqual:(id)equal;	// 0xb13379
-(id)attributes;	// 0xb132e1
-(id)init;	// 0xb13215
-(void)dealloc;	// 0xb1316d
@end

