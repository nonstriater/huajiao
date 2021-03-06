/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UTDIDKeychainItemWrapper, UTDIDPersistentFile, NSMutableDictionary;

@interface UTDIDPersistentConf : XXUnknownSuperclass {
	UTDIDKeychainItemWrapper* mKeyChainWrapper;
	UTDIDPersistentFile* mPersistentFile;
	NSMutableDictionary* mDict;
	NSString* mIdentifier;
	bool mIsModified;
	bool mAlwaysSyncWhenCommit;
}
@property(assign) bool mAlwaysSyncWhenCommit;	// G=0xcfae09; S=0xcfae31; 
+(id)initWithIdentifier:(id)identifier;	// 0xcfad3d
-(void).cxx_destruct;	// 0xcfae55
-(void)commit;	// 0xcfabed
-(void)reset;	// 0xcfab91
-(void)clear;	// 0xcfaa6d
-(void)removeObjectForKey:(id)key;	// 0xcfa909
-(id)objectForKey:(id)key;	// 0xcfa78d
-(void)setObject:(id)object forKey:(id)key;	// 0xcfa601
-(void)syncData;	// 0xcfa57d
-(void)syncToPF:(id)pf;	// 0xcfa36d
-(void)syncToKC:(id)kc;	// 0xcfa289
-(void)create:(id)create;	// 0xcfa12d
-(void)initData;	// 0xcf9e2d
@end

