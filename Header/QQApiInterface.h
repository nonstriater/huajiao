/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface QQApiInterface : XXUnknownSuperclass {
}
+(void)reportSDKCheck:(int)check cmd:(id)cmd isQzone:(BOOL)qzone;	// 0xb514f9
+(id)getQQInstallUrl;	// 0xb514dd
+(BOOL)openQQ;	// 0xb514c1
+(BOOL)isQQSupportApi;	// 0xb514a5
+(void)getQQUinOnlineStatues:(id)statues delegate:(id)delegate;	// 0xb5145d
+(BOOL)isQQInstalled;	// 0xb51441
+(int)sendResp:(id)resp;	// 0xb513e9
+(int)sendShowMessageFromQQResp:(id)qqresp;	// 0xb512d9
+(int)sendGetMessageFromQQResp:(id)qqresp;	// 0xb51241
+(int)SendReqToQQGroupTribe:(id)qqgroupTribe;	// 0xb511c1
+(int)SendReqToQZone:(id)qzone;	// 0xb51141
+(int)sendReq:(id)req;	// 0xb510c1
+(int)sendMessageToQQGroupTribeWithReq:(id)req;	// 0xb51029
+(int)sendMessageToQQQZoneWithReq:(id)req;	// 0xb50f91
+(int)sendMessageToQQWithReq:(id)req;	// 0xb50ef9
+(BOOL)handleOpenURL:(id)url delegate:(id)delegate;	// 0xb50dd9
+(BOOL)responseToSendMessageToQQ:(id)qq delegate:(id)delegate;	// 0xb50cf5
+(int)responseToShowMessageFromQQ:(id)qq;	// 0xb50cd9
+(int)responseToGetMessageFromQQ:(id)qq;	// 0xb50cbd
+(int)SendMessageToQQRequest:(id)qqrequest;	// 0xb50ca1
+(void)getMessageRequestFromQQ:(id)qq;	// 0xb50c65
+(void)showMessageRequestFromQQ:(id)qq delegate:(id)delegate;	// 0xb50c29
@end

