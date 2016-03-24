/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "HJServices.h"
#import "HJServicesConstraits.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HJUserIntf : HJServices <HJServicesConstraits> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)allocWithZone:(NSZone*)zone;	// 0x3cc27d
+(id)new;	// 0x3cc25d
+(id)sharedIntfs;	// 0x3cc189
-(void)user_getSearchUsers:(id)users offset:(id)offset num:(int)num success:(id)success failure:(id)failure;	// 0x3d1ef1
-(void)user_getUserProfile:(id)profile offset:(unsigned)offset success:(id)success failure:(id)failure;	// 0x3d1ca9
-(void)user_reportUser:(id)user success:(id)success failure:(id)failure;	// 0x3d1ac9
-(void)user_getPopularAnchorsSuccess:(id)success failure:(id)failure;	// 0x3d1921
-(void)user_getUserFollowers:(id)followers more:(BOOL)more success:(id)success failure:(id)failure;	// 0x3d1559
-(void)user_getUserFollowings:(id)followings more:(BOOL)more success:(id)success failure:(id)failure;	// 0x3d119d
-(void)user_getMultiUserInfo:(id)info success:(id)success failure:(id)failure;	// 0x3d0f71
-(void)user_preferencesSuccess:(id)success failure:(id)failure;	// 0x3d0df5
-(void)user_unblockUser:(id)user success:(id)success failure:(id)failure;	// 0x3d0c15
-(void)user_blockUser:(id)user success:(id)success failure:(id)failure;	// 0x3d0a35
-(void)user_unfollowUser:(id)user success:(id)success failure:(id)failure;	// 0x3d07d9
-(void)user_followAllUser:(id)user success:(id)success failure:(id)failure;	// 0x3d05d5
-(void)user_followUser:(id)user liveid:(id)liveid success:(id)success failure:(id)failure;	// 0x3d02a9
-(void)user_searchUserWithKeyword:(id)keyword success:(id)success failure:(id)failure;	// 0x3d006d
-(void)user_getRecommend:(int)recommend offset:(unsigned)offset Success:(id)success failure:(id)failure;	// 0x3cfe35
-(void)user_getDiscoverySuccess:(id)success failure:(id)failure;	// 0x3cfcb5
-(void)user_getBlockedListSuccess:(id)success failure:(id)failure;	// 0x3cfb11
-(void)user_getBlockedMore:(BOOL)more success:(id)success failure:(id)failure;	// 0x3cf831
-(void)user_getFollowersMore:(BOOL)more success:(id)success failure:(id)failure;	// 0x3cf551
-(void)user_getFollowingsMore:(BOOL)more success:(id)success failure:(id)failure;	// 0x3cf261
-(void)user_getUsersWithURI:(id)uri pameters:(id)pameters sucess:(id)sucess failure:(id)failure;	// 0x3cf189
-(void)user_getUserInfo:(id)info success:(id)success failure:(id)failure;	// 0x3ceff5
-(void)user_syncProfile:(id)profile success:(id)success failure:(id)failure;	// 0x3cee7d
-(void)user_fastLogInSuccess:(id)success failure:(id)failure;	// 0x3ce771
-(void)user_getIdentifyingCodeWithMobile:(id)mobile type:(id)type isVoice:(BOOL)voice success:(id)success failure:(id)failure;	// 0x3ce48d
-(void)manage_kickUid:(id)uid success:(id)success failure:(id)failure;	// 0x3ce295
-(void)user_getIdentifyingCodeWithMobile:(id)mobile type:(id)type success:(id)success failure:(id)failure;	// 0x3ce0ad
-(void)user_getIdentifyingCodeWithMobile:(id)mobile success:(id)success failure:(id)failure;	// 0x3cdf29
-(void)user_activiateUser:(id)user type:(id)type identifyingCode:(id)code success:(id)success failure:(id)failure;	// 0x3cd919
-(void)loginWithMobile:(id)mobile password:(id)password checkCode:(id)code success:(id)success failure:(id)failure;	// 0x3cd02d
-(void)userVerifyDetailSuccess:(id)success failure:(id)failure;	// 0x3ccf19
-(void)uploadVerifyInfoWithDictionary:(id)dictionary Success:(id)success failure:(id)failure;	// 0x3cce45
-(void)settingPassword:(id)password Success:(id)success failure:(id)failure;	// 0x3ccce1
-(void)modifyPassword:(id)password otherPass:(id)pass success:(id)success failure:(id)failure;	// 0x3ccafd
-(void)forgetPasswordWithMobile:(id)mobile npassword:(id)npassword checkCode:(id)code success:(id)success failure:(id)failure;	// 0x3cc8f9
-(void)user_registeUser:(id)user password:(id)password identifyingCode:(id)code success:(id)success failure:(id)failure;	// 0x3cc2ed
-(id)init;	// 0x3cc29d
@end
