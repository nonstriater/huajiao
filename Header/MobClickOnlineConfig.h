/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MobClickOnlineConfig : XXUnknownSuperclass {
	BOOL _updateOnlineConfigJobFlag;
	NSString* _adURL;
	BOOL _shouldGetAdURL;
}
@property(copy, nonatomic) NSString* adURL;	// G=0xaf1b99; S=0xaf1bb1; 
+(id)sharedInstance;	// 0xaf0019
-(id)fetchAdURLFromServer;	// 0xaf1b09
-(id)onlineConfigWithKey:(id)key;	// 0xaf1a79
-(id)onlineConfig;	// 0xaf1a39
-(void)toggleUpdateOnlineConfigFlag;	// 0xaf1a1d
-(void)updateOnlineConfig;	// 0xaf1821
-(void)postOnlineConfigDidFinishedNotification;	// 0xaf17c5
-(void)fetchOnlineConfig;	// 0xaf1779
-(void)checkOnlineUpdateTime;	// 0xaf125d
-(void)saveConfigure:(id)configure;	// 0xaf1075
-(id)requestAdData:(id)data error:(id*)error;	// 0xaf0e99
-(id)adConfigData;	// 0xaf0c39
-(void)parseADData:(id)data;	// 0xaf0975
-(void)fetchAdURL;	// 0xaf091d
-(void)prepareFetchAdURL;	// 0xaf0889
-(void)parseConfigData:(id)data;	// 0xaf0779
-(BOOL)downloadOnlineConfigParams:(id)params;	// 0xaf04c5
-(id)configureData;	// 0xaf0249
-(void)gotAppkey;	// 0xaf0209
-(void)dealloc;	// 0xaf018d
-(id)init;	// 0xaf00fd
@end

