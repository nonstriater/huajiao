/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UTDIDPersistentConf, UIPasteboard, UTDIDHelper;

@interface UTDIDMain : XXUnknownSuperclass {
	UIPasteboard* mUIPasteBoard;
	NSString* mFilePath;
	UTDIDHelper* mUtdidHelper;
	UTDIDPersistentConf* mDevicePersistentConfig;
}
+(id)generateUtdid;	// 0xcf5491
+(id)uniqueGlobalDeviceIdentifier;	// 0xcf5405
-(void).cxx_destruct;	// 0xcf588d
-(id)NSData2Str:(id)str;	// 0xcf5325
-(id)getUTDIDFromOldKeyChain;	// 0xcf51f5
-(id)getUTDIDFromOldUIPasteboard;	// 0xcf50b5
-(id)getUTDIDFromOldNSUserDefaults;	// 0xcf4f55
-(void)testInit;	// 0xcf4d95
-(id)value;	// 0xcf47a9
-(void)removeUtdid;	// 0xcf471d
-(void)saveUtdid:(id)utdid;	// 0xcf4675
-(bool)isUtdidValid:(id)valid;	// 0xcf45cd
-(id)generateUtdidAndSave;	// 0xcf44d1
-(void)preInit;	// 0xcf4341
@end

