/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class NSString;

@interface WBSDKFMStatement : XXUnknownSuperclass {
	sqlite3_stmt* _statement;
	NSString* _query;
	long _useCount;
}
@property(assign) sqlite3_stmt* statement;	// G=0xd31641; S=0xd31651; 
@property(retain) NSString* query;	// G=0xd31661; S=0xd31675; 
@property(assign) long useCount;	// G=0xd31685; S=0xd31695; 
-(id)description;	// 0xd315c5
-(void)reset;	// 0xd315ad
-(void)close;	// 0xd31589
-(void)dealloc;	// 0xd31529
-(void)finalize;	// 0xd314e9
@end

