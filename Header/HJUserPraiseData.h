/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HJUserPraiseData : HJMessage {
	BOOL _replay;
	NSString* _uid;
	NSString* _roomid;
	long long _praiseCount;
}
@property(assign, nonatomic) BOOL replay;	// G=0x33eaad; S=0x33eabd; 
@property(assign, nonatomic) long long praiseCount;	// G=0x33ea81; S=0x33ea99; 
@property(copy, nonatomic) NSString* roomid;	// G=0x33ea5d; S=0x33ea71; 
@property(copy, nonatomic) NSString* uid;	// G=0x33ea39; S=0x33ea4d; 
-(void).cxx_destruct;	// 0x33eacd
-(BOOL)valid;	// 0x33e979
-(id)description;	// 0x33e8bd
@end

