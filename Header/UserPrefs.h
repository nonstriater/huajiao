/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppPrefs.h"


__attribute__((visibility("hidden")))
@interface UserPrefs : AppPrefs {
}
+(BOOL)messagePreference;	// 0x12e1f9
+(void)setMessagePreference:(BOOL)preference;	// 0x12e1dd
+(BOOL)noticePreference;	// 0x12e179
+(void)setNoticePreference:(BOOL)preference;	// 0x12e15d
+(BOOL)replyPreference;	// 0x12e0f9
+(void)setReplyPreference:(BOOL)preference;	// 0x12e0dd
+(void)setDoNotDisturbPreference:(BOOL)preference;	// 0x12e0c1
+(BOOL)DoNotDisturbPreference;	// 0x12e05d
+(void)setFollowMePreference:(BOOL)preference;	// 0x12e041
+(BOOL)followMePreference;	// 0x12dfdd
+(id)TPUUserInfo;	// 0x12de99
+(void)setTPUUserInfo:(id)info;	// 0x12ddf9
+(void)setUserType:(int)type;	// 0x12dda5
+(int)userType;	// 0x12dd69
+(void)dismiss;	// 0x12dcb5
+(void)setUserProfile:(id)profile;	// 0x12dc6d
+(id)userProfile;	// 0x12dc11
+(void)setToken:(id)token;	// 0x12db39
+(id)token;	// 0x12d9c1
+(void)setEnrolled:(BOOL)enrolled;	// 0x12d9a5
+(BOOL)isEnrolled;	// 0x12d989
+(id)userID;	// 0x12d915
+(id)getVerifiedResult;	// 0x12d8ad
+(void)setVerifiedResult:(id)result;	// 0x12d865
+(void)setEnrollState:(unsigned)state userInfo:(id)info;	// 0x12d619
+(void)setEnrollState:(unsigned)state;	// 0x12d605
+(unsigned)enrollState;	// 0x12d5e9
@end

