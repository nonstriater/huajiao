/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface WXApi : XXUnknownSuperclass {
}
+(BOOL)sendResp:(id)resp;	// 0xcc5f61
+(BOOL)sendReq:(id)req;	// 0xcc5ce9
+(BOOL)sendAuthReq:(id)req viewController:(id)controller delegate:(id)delegate;	// 0xcc5c49
+(BOOL)addCardToWXCardPackageReq:(id)wxcardPackageReq;	// 0xcc5889
+(BOOL)jumpToBizWebview:(id)bizWebview;	// 0xcc5711
+(BOOL)openProfile:(id)profile;	// 0xcc55ad
+(BOOL)joinChatRoom:(id)room;	// 0xcc53e5
+(BOOL)createChatRoom:(id)room;	// 0xcc51ad
+(BOOL)openRankList:(id)list;	// 0xcc513d
+(BOOL)openWebview:(id)webview;	// 0xcc5055
+(BOOL)openTempSession:(id)session;	// 0xcc4f51
+(BOOL)sendHBReq:(id)req;	// 0xcc4da5
+(BOOL)pay:(id)pay;	// 0xcc4b81
+(BOOL)auth:(id)auth;	// 0xcc4a11
+(id)packResp:(id)resp;	// 0xcc4899
+(id)packReq:(id)req;	// 0xcc4759
+(BOOL)handleOpenURL:(id)url delegate:(id)delegate;	// 0xcc42f5
+(BOOL)handleOpenRankList:(id)list delegate:(id)delegate;	// 0xcc414d
+(BOOL)handleOpenWebviewOpenUrl:(id)url delegate:(id)delegate;	// 0xcc3fa5
+(BOOL)handleOpenTempSessionOpenUrl:(id)url delegate:(id)delegate;	// 0xcc3dfd
+(BOOL)handleAddCardOpenUrl:(id)url delegate:(id)delegate;	// 0xcc39b5
+(BOOL)handleHBOpenUrl:(id)url delegate:(id)delegate;	// 0xcc380d
+(BOOL)handlePayOpenUrl:(id)url delegate:(id)delegate;	// 0xcc3641
+(BOOL)handleAuthOpenUrl:(id)url delegate:(id)delegate;	// 0xcc33a9
+(id)parseURLParams:(id)params;	// 0xcc3255
+(BOOL)openWXApp;	// 0xcc31cd
+(id)getApiVersion;	// 0xcc31c1
+(id)getWXAppInstallUrl;	// 0xcc31b5
+(BOOL)isWXAppSupportApi;	// 0xcc3199
+(BOOL)isWXAppInstalled;	// 0xcc3131
+(BOOL)registerApp:(id)app withDescription:(id)description;	// 0xcc30e1
+(BOOL)registerApp:(id)app;	// 0xcc3095
@end
