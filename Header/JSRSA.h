/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface JSRSA : XXUnknownSuperclass {
	NSString* _publicKey;
	NSString* _privateKey;
}
@property(retain, nonatomic) NSString* privateKey;	// G=0x6d3a9; S=0x6d3b9; 
@property(retain, nonatomic) NSString* publicKey;	// G=0x6d371; S=0x6d381; 
+(id)sharedInstance;	// 0x6d2a1
-(void).cxx_destruct;	// 0x6d3e1
-(id)publicDecrypt:(id)decrypt;	// 0x6d1f5
-(id)privateEncrypt:(id)encrypt;	// 0x6d149
-(id)privateDecrypt:(id)decrypt;	// 0x6d09d
-(id)publicEncrypt:(id)encrypt;	// 0x6cff1
-(id)privateKeyPath;	// 0x6cead
-(id)publicKeyPath;	// 0x6cd69
@end

