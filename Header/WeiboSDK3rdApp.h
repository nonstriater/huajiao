/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData;

@interface WeiboSDK3rdApp : XXUnknownSuperclass {
	NSString* name;
	NSString* appKey;
	NSString* bundleID;
	NSData* iconData;
	NSString* _aid;
}
@property(retain, nonatomic) NSString* aid;	// G=0xd593f5; S=0xd59405; 
@property(retain, nonatomic) NSData* iconData;	// G=0xd593bd; S=0xd593cd; 
@property(retain, nonatomic) NSString* bundleID;	// G=0xd59385; S=0xd59395; 
@property(retain, nonatomic) NSString* appKey;	// G=0xd5934d; S=0xd5935d; 
@property(retain, nonatomic) NSString* name;	// G=0xd59315; S=0xd59325; 
+(id)appWithDictionary:(id)dictionary;	// 0xd591a9
+(id)dictionaryWithApp:(id)app;	// 0xd58fb1
+(id)currentApp;	// 0xd58a75
+(id)callbackSchemeWithAppKey:(id)appKey;	// 0xd587f5
+(id)callbackSchemePrefix;	// 0xd587dd
-(void).cxx_destruct;	// 0xd5942d
-(BOOL)isEqual:(id)equal;	// 0xd58969
-(BOOL)isAppInstalled;	// 0xd58885
-(id)callbackScheme;	// 0xd58835
@end
