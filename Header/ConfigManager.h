/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface ConfigManager : XXUnknownSuperclass {
	NSMutableDictionary* _config;
	NSString* _appid;
	NSString* _iosver;
	NSString* _path;
	int _sdkWebViewConfigEnable;
	NSMutableDictionary* _apiRequests;
}
@property(assign, nonatomic) int sdkWebViewConfigEnable;	// G=0xb41a3d; S=0xb41a4d; 
@property(retain, nonatomic) NSString* appid;	// G=0xb41a05; S=0xb41a15; 
@property(retain, nonatomic) NSMutableDictionary* config;	// G=0xb419cd; S=0xb419dd; 
+(id)GetInstance;	// 0xb40741
-(void).cxx_destruct;	// 0xb41a5d
-(int)getThirdAppSDKWebQQShare;	// 0xb419bd
-(void)updateServerSDKWebQQShare:(int)share;	// 0xb4191d
-(int)getServerSDKWebQQShare;	// 0xb418b9
-(BOOL)isDataReportEnable;	// 0xb41855
-(void)requestSDKWebViewConfigResponse:(id)response;	// 0xb41575
-(void)requestConfigResponse:(id)response;	// 0xb40f99
-(void)deleteAPIRequestBySeq:(id)seq;	// 0xb40ecd
-(BOOL)requestSDKWebViewConfig;	// 0xb40d35
-(BOOL)requestConfig;	// 0xb40b51
-(void)updateConfig;	// 0xb409f1
-(void)saveLocalConfig;	// 0xb408f5
-(void)loadLocalConfig;	// 0xb40845
-(id)init;	// 0xb40409
@end

