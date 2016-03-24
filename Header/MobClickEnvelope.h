/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UMEnvelope, NSString, NSData;

@interface MobClickEnvelope : XXUnknownSuperclass {
	NSData* _identityMD5;
	char* _entityMD5;
	NSString* _signatureString;
	NSString* _guidString;
	NSString* _checksum;
	NSString* _version;
	NSString* _address;
	int _timestamp;
	int _serialNum;
	int _length;
	UMEnvelope* _enveloper;
	NSData* _signature;
	NSData* _guid;
	NSData* _envelopeData;
}
@property(assign, nonatomic) int length;	// G=0xaf3389; S=0xaf3399; 
@property(assign, nonatomic) int serialNum;	// G=0xaf3369; S=0xaf3379; 
@property(assign, nonatomic) int timestamp;	// G=0xaf3349; S=0xaf3359; 
@property(retain, nonatomic) NSData* envelopeData;	// G=0xaf3315; S=0xaf3325; 
@property(assign, nonatomic) char* entityMD5;	// G=0xaf32f5; S=0xaf3305; 
@property(copy, nonatomic) NSString* version;	// G=0xaf32ad; S=0xaf32c5; 
@property(copy, nonatomic) NSString* address;	// G=0xaf3265; S=0xaf327d; 
@property(copy, nonatomic) NSString* checksum;	// G=0xaf321d; S=0xaf3235; 
@property(retain, nonatomic) NSData* guid;	// G=0xaf31e9; S=0xaf31f9; 
@property(retain, nonatomic) NSData* signature;	// G=0xaf31b5; S=0xaf31c5; 
@property(retain, nonatomic) NSData* identityMD5;	// G=0xaf3181; S=0xaf3191; 
+(id)sharedInstance;	// 0xaf1be1
-(void)dealloc;	// 0xaf30a1
-(id)makeEnvelopeData;	// 0xaf2ec9
-(BOOL)verifyChecksum;	// 0xaf2d65
-(BOOL)verifyTimestamp;	// 0xaf2afd
-(void)buildSerialNum;	// 0xaf2a31
-(id)toDataWithEntity:(id)entity;	// 0xaf244d
-(void)generateChecksum;	// 0xaf2381
-(void)printBytes:(char*)bytes length:(int)length;	// 0xaf22e1
-(id)mergeEntityAndIdentity;	// 0xaf2225
-(void)setSignatureWithData:(id)data;	// 0xaf213d
-(void)buildGUIDWithData:(unsigned char [32])data;	// 0xaf2089
-(void)buildGUIDWithSignature:(unsigned char [32])signature;	// 0xaf1f05
-(void)buildIdentity;	// 0xaf1e4d
-(void)fetchSignature;	// 0xaf1e05
-(id)init;	// 0xaf1cc5
@end

