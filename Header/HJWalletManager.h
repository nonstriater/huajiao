/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, HJUserWallet;

__attribute__((visibility("hidden")))
@interface HJWalletManager : XXUnknownSuperclass {
	NSDictionary* _liveRevenueDictionary;
	HJUserWallet* _userWallet;
}
@property(retain, nonatomic) HJUserWallet* userWallet;	// G=0x121939; S=0x121949; 
+(id)sharedManager;	// 0x12123d
-(void).cxx_destruct;	// 0x121971
-(void)getLiveRevenueWithLiveID:(id)liveID success:(id)success failure:(id)failure;	// 0x121601
-(void)loadUserWalletSuccess:(id)success failure:(id)failure isReload:(BOOL)reload;	// 0x121349
-(void)loadUserWalletSuccess:(id)success failure:(id)failure;	// 0x121311
-(id)init;	// 0x1212c9
@end

