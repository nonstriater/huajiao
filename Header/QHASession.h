/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSDate;

@interface QHASession : XXUnknownSuperclass {
	long long _bytesAtBeginIn;
	long long _bytesAtEndIn;
	long long _bytesAtBeginOut;
	long long _bytesAtEndOut;
	BOOL _isEnded;
	NSString* _identity;
	NSDate* _beginTime;
	NSMutableDictionary* _pageTotalDurations;
	unsigned long long _endTime;
	unsigned long long _duration;
	unsigned long long _networkBytesIn;
	unsigned long long _networkBytesOut;
}
@property(assign, nonatomic) BOOL isEnded;	// G=0x47c141; S=0x47c151; 
@property(retain, nonatomic) NSMutableDictionary* pageTotalDurations;	// G=0x47c109; S=0x47c119; 
@property(assign, nonatomic) unsigned long long networkBytesOut;	// G=0x47c0dd; S=0x47c0f5; 
@property(assign, nonatomic) unsigned long long networkBytesIn;	// G=0x47c0b1; S=0x47c0c9; 
@property(assign, nonatomic) unsigned long long duration;	// G=0x47c085; S=0x47c09d; 
@property(assign, nonatomic) unsigned long long endTime;	// G=0x47c059; S=0x47c071; 
@property(retain, nonatomic) NSDate* beginTime;	// G=0x47c021; S=0x47c031; 
@property(readonly, assign, nonatomic) NSString* identity;	// G=0x47c011; 
-(void).cxx_destruct;	// 0x47c161
-(id)toDictionary;	// 0x47be39
-(void)update;	// 0x47bddd
-(void)end;	// 0x47bc05
-(void)begin;	// 0x47bb25
-(id)init;	// 0x47b975
@end
