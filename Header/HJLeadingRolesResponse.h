/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface HJLeadingRolesResponse : XXUnknownSuperclass {
	BOOL _hasMore;
	NSArray* _anchors;
	int _offset;
}
@property(assign, nonatomic) int offset;	// G=0x6b99d; S=0x6b9ad; 
@property(assign, nonatomic) BOOL hasMore;	// G=0x6b97d; S=0x6b98d; 
@property(retain, nonatomic) NSArray* anchors;	// G=0x6b945; S=0x6b955; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x6b6c9
-(void).cxx_destruct;	// 0x6b9bd
@end

