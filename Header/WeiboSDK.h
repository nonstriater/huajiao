/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface WeiboSDK : XXUnknownSuperclass {
}
+(id)queryDictionaryOfURLQuery:(id)urlquery usingEncoding:(unsigned)encoding;	// 0xd5c24d
+(id)serializeURLString:(id)string withParams:(id)params;	// 0xd5bee9
+(id)queryValueWithName:(id)name urlString:(id)string;	// 0xd5bcc1
+(BOOL)unregisterApp;	// 0xd5bcbd
+(BOOL)registerApp:(id)app;	// 0xd5bcad
+(BOOL)registerAppWithAppKey:(id)appKey;	// 0xd5bbed
+(BOOL)registerAppWithApp:(id)app;	// 0xd5b649
+(id)callbackSchemePrefix;	// 0xd5b5f9
+(id)registedAppsPasteboardName;	// 0xd5b5e1
+(BOOL)sendResponse:(id)response;	// 0xd5b565
+(BOOL)sendRequest:(id)request;	// 0xd5b449
+(BOOL)openAppWithTransferObject:(id)transferObject;	// 0xd5ac41
+(BOOL)handleOpenURL:(id)url delegate:(id)delegate;	// 0xd5a7a9
+(void)directlySendResponseToCurrentApp:(id)currentApp;	// 0xd5a51d
+(void)didReceiveUnSupportedResponse:(id)response;	// 0xd5a519
+(void)didReceiveUnSupportedRequest:(id)request;	// 0xd5a3a9
+(id)getWeiboAid;	// 0xd5a355
+(id)getSDKVersion;	// 0xd5a33d
+(id)getWeiboAppSupportMaxSDKVersion;	// 0xd5a32d
+(id)deprecatedWeiboAppSupportMaxSDKVersion;	// 0xd5a1e9
+(id)getWeiboAppInstallUrl;	// 0xd5a1d1
+(BOOL)isWeiboAppFullSupportQuickAuth;	// 0xd5a155
+(BOOL)openWeiboApp;	// 0xd59fe5
+(BOOL)isCanShareInWeiboAPP;	// 0xd59fd5
+(BOOL)isCanSSOInWeiboApp;	// 0xd59fc5
+(BOOL)isCanSSOAndShareInWeiboApp;	// 0xd59f49
+(BOOL)isCanPayInWeiboApp;	// 0xd59ecd
+(BOOL)isWeiboAppInstalled;	// 0xd59de1
+(void)inviteFriend:(id)aFriend withUid:(id)uid withToken:(id)token delegate:(id)delegate withTag:(id)tag;	// 0xd59cbd
+(void)logOutWithToken:(id)token delegate:(id)delegate withTag:(id)tag;	// 0xd59a29
+(void)enableDebugMode:(BOOL)mode;	// 0xd59a19
+(id)hashKey;	// 0xd59a01
+(void)removePasteboardWithName:(id)name;	// 0xd5997d
+(id)pasteboardWithName:(id)name create:(BOOL)create;	// 0xd59905
+(BOOL)canAccessPrivatePasteboard;	// 0xd59899
+(id)requestUserInfoCache;	// 0xd59845
+(id)activityViewController;	// 0xd59561
+(void)messageRegister:(id)aRegister;	// 0xd5949d
+(void)forceUploadRecords;	// 0xd38995
+(void)event:(id)event onPageView:(id)view withUserInfo:(id)userInfo;	// 0xd3890d
+(void)event:(id)event;	// 0xd388a9
+(void)endLogEvent:(id)event onPageView:(id)view withUserInfo:(id)userInfo;	// 0xd38821
+(void)beginLogEvent:(id)event onPageView:(id)view withUserInfo:(id)userInfo;	// 0xd38799
+(void)endLogEvent:(id)event;	// 0xd38779
+(void)beginLogEvent:(id)event;	// 0xd38759
+(void)endLogPageView:(id)view;	// 0xd38701
+(void)beginLogPageView:(id)view;	// 0xd386a9
+(void)setUploadFrequecy:(double)frequecy;	// 0xd38521
+(void)setVersion:(id)version;	// 0xd38479
+(void)setChannelID:(id)anId;	// 0xd383d1
+(void)setStatisticsLogEnabled:(BOOL)enabled;	// 0xd38345
+(void)setStatisticsEnabled:(BOOL)enabled;	// 0xd382b9
@end

