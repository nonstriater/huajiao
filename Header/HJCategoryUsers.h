/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJCategoryUsers : XXUnknownSuperclass {
	BOOL _hasmore;
	NSString* _categoryID;
	NSString* _name;
	NSMutableArray* _users;
	int _offset;
}
@property(assign, nonatomic) BOOL hasmore;	// G=0x1b7405; S=0x1b7415; 
@property(assign, nonatomic) int offset;	// G=0x1b73e5; S=0x1b73f5; 
@property(retain, nonatomic) NSMutableArray* users;	// G=0x1b73ad; S=0x1b73bd; 
@property(retain, nonatomic) NSString* name;	// G=0x1b7375; S=0x1b7385; 
@property(retain, nonatomic) NSString* categoryID;	// G=0x1b733d; S=0x1b734d; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x1b703d
-(void).cxx_destruct;	// 0x1b7425
@end

