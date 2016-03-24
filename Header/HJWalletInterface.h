/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJServices.h"
#import "HJServicesConstraits.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HJWalletInterface : HJServices <HJServicesConstraits> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedIntfs;	// 0x200d6d
-(void)getBalanceWithUserID:(id)userID success:(id)success failure:(id)failure;	// 0x201251
-(void)getFeedRevenueWithFeedID:(id)feedID userID:(id)anId success:(id)success failure:(id)failure;	// 0x200e91
-(id)init;	// 0x200e41
@end

