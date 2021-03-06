/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UMANBaseEvent.h"

@class NSDictionary, NSString;

@interface UMANEvent : UMANBaseEvent {
	NSString* _event_id;
	NSString* _label;
	int _acc;
	int _du;
	NSDictionary* _values;
}
@property(retain, nonatomic) NSDictionary* values;	// G=0xaedb59; S=0xaedb69; 
@property(assign, nonatomic) int du;	// G=0xaedb8d; S=0xaedb9d; 
@property(assign, nonatomic) int acc;	// G=0xaedb39; S=0xaedb49; 
@property(copy, nonatomic) NSString* label;	// G=0xaedaf1; S=0xaedb09; 
@property(copy, nonatomic) NSString* event_id;	// G=0xaedaa9; S=0xaedac1; 
-(void)encodeWithCoder:(id)coder;	// 0xaed999
-(id)initWithCoder:(id)coder;	// 0xaed881
-(void)outputUMLog;	// 0xaed74d
-(id)attributes;	// 0xaed489
-(void)updateDu;	// 0xaed401
-(id)init;	// 0xaed3b1
-(void)dealloc;	// 0xaed321
@end

