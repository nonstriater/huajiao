/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

@interface IMConfigData : XXUnknownSuperclass {
	unsigned char _protocolVersion;
	BOOL _isOnline;
	NSString* _phone;
	NSString* _jid;
	NSString* _password;
	int _appid;
	int _version;
	NSString* _qid;
	NSMutableArray* _msgIPList;
	int _curIPIndex;
	int _loginPort;
	NSString* _registerServer;
	NSString* _uploadServer;
	NSString* _downloadServer;
	NSString* _webServer;
	NSString* _defaultKey;
	NSString* _randomKey;
	NSString* _sessionKey;
	NSString* _deviceToken;
	int _hbInterval;
	NSString* _verifyCode;
	NSString* _sigToken;
}
@property(retain, nonatomic) NSString* sigToken;	// G=0xac45d1; S=0xac45e1; 
@property(assign, nonatomic) BOOL isOnline;	// G=0xac45b1; S=0xac45c1; 
@property(retain) NSString* verifyCode;	// G=0xac458d; S=0xac45a1; 
@property(assign) unsigned char protocolVersion;	// G=0xac4569; S=0xac457d; 
@property(assign) int hbInterval;	// G=0xac4549; S=0xac4559; 
@property(retain) NSString* deviceToken;	// G=0xac4525; S=0xac4539; 
@property(retain) NSString* sessionKey;	// G=0xac4501; S=0xac4515; 
@property(retain) NSString* randomKey;	// G=0xac44dd; S=0xac44f1; 
@property(retain) NSString* defaultKey;	// G=0xac44b9; S=0xac44cd; 
@property(retain) NSString* webServer;	// G=0xac4495; S=0xac44a9; 
@property(retain) NSString* downloadServer;	// G=0xac4471; S=0xac4485; 
@property(retain) NSString* uploadServer;	// G=0xac444d; S=0xac4461; 
@property(retain) NSString* registerServer;	// G=0xac4429; S=0xac443d; 
@property(assign) int loginPort;	// G=0xac4409; S=0xac4419; 
@property(assign) int curIPIndex;	// G=0xac43e9; S=0xac43f9; 
@property(retain) NSMutableArray* msgIPList;	// G=0xac43c5; S=0xac43d9; 
@property(assign) NSString* qid;	// G=0xac43a5; S=0xac43b5; 
@property(assign) int version;	// G=0xac4385; S=0xac4395; 
@property(assign) int appid;	// G=0xac4365; S=0xac4375; 
@property(retain) NSString* password;	// G=0xac4341; S=0xac4355; 
@property(retain) NSString* jid;	// G=0xac431d; S=0xac4331; 
@property(retain) NSString* phone;	// G=0xac42f9; S=0xac430d; 
-(void).cxx_destruct;	// 0xac4609
-(void)loadDefaultConf:(int)conf;	// 0xac3e41
-(BOOL)isReadyForQidRegistry;	// 0xac3d65
-(BOOL)isReadyForDownRegistry;	// 0xac3d55
-(id)getServerIP;	// 0xac3c95
-(BOOL)isReadyForUpRegistry;	// 0xac3bb9
-(id)init;	// 0xac3b1d
@end
