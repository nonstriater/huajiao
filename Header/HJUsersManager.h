/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJUsersManager : XXUnknownSuperclass {
	NSMutableArray* _myFollowings;
	NSMutableArray* _myFollowers;
}
@property(retain, nonatomic) NSMutableArray* myFollowers;	// G=0x19b4f9; S=0x19b509; 
@property(retain, nonatomic) NSMutableArray* myFollowings;	// G=0x19b4c1; S=0x19b4d1; 
+(id)myFollowings;	// 0x19b479
+(id)myFollowers;	// 0x19b431
+(id)shared;	// 0x19b211
-(void).cxx_destruct;	// 0x19b531
-(void)onLogout;	// 0x19b3cd
-(id)init;	// 0x19b2d1
@end

