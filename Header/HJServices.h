/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HJServices : XXUnknownSuperclass {
	NSString* _host;
	NSDictionary* _result;
	int _code;
	NSString* _error;
	int _time;
	int _consume;
	id _data;
	NSMutableDictionary* _managers;
	double _timeoutTime;
}
@property(retain, nonatomic) NSMutableDictionary* managers;	// G=0x18b92d; S=0x18b93d; 
@property(assign, nonatomic) double timeoutTime;	// G=0x18b901; S=0x18b919; 
@property(retain, nonatomic) id data;	// G=0x18b8dd; S=0x18b8ed; 
@property(assign, nonatomic) int consume;	// G=0x18b8bd; S=0x18b8cd; 
@property(assign, nonatomic) int time;	// G=0x18b89d; S=0x18b8ad; 
@property(retain, nonatomic) NSString* error;	// G=0x18b865; S=0x18b875; 
@property(assign, nonatomic) int code;	// G=0x18b845; S=0x18b855; 
@property(retain, nonatomic) NSDictionary* result;	// G=0x18b80d; S=0x18b81d; 
@property(copy, nonatomic) NSString* host;	// G=0x18b7e9; S=0x18b7fd; 
-(void).cxx_destruct;	// 0x18b965
-(id)post:(id)post parameters:(id)parameters data:(id)data progress:(id)progress completion:(id)completion failure:(id)failure;	// 0x18b751
-(id)post:(id)post host:(id)host parameters:(id)parameters data:(id)data progress:(id)progress completion:(id)completion failure:(id)failure;	// 0x18a949
-(void)post:(id)post host:(id)host parameters:(id)parameters filedata:(id)filedata progress:(id)progress completion:(id)completion failure:(id)failure;	// 0x189b51
-(void)post:(id)post parameters:(id)parameters completion:(id)completion failure:(id)failure;	// 0x189add
-(void)post:(id)post parameters:(id)parameters attachemnts:(id)attachemnts completion:(id)completion failure:(id)failure;	// 0x189a59
-(void)post:(id)post parameters:(id)parameters attachemnts:(id)attachemnts progress:(id)progress completion:(id)completion failure:(id)failure;	// 0x1899c9
-(void)post:(id)post host:(id)host parameters:(id)parameters completion:(id)completion failure:(id)failure;	// 0x189955
-(void)post:(id)post host:(id)host parameters:(id)parameters attachemnts:(id)attachemnts completion:(id)completion failure:(id)failure;	// 0x1898d1
-(void)post:(id)post host:(id)host parameters:(id)parameters attachemnts:(id)attachemnts progress:(id)progress completion:(id)completion failure:(id)failure;	// 0x188a21
-(void)paymentPostWithurl:(id)withurl host:(id)host parameters:(id)parameters AESKey:(id)key completion:(id)completion failure:(id)failure;	// 0x187ad5
-(void)postAll:(id)all host:(id)host parameters:(id)parameters completion:(id)completion failure:(id)failure;	// 0x186ea9
-(id)get:(id)get otherHost:(id)host parameters:(id)parameters completion:(id)completion failure:(id)failure;	// 0x186205
-(id)get:(id)get host:(id)host parameters:(id)parameters completion:(id)completion failure:(id)failure;	// 0x185549
-(id)get:(id)get parameters:(id)parameters completion:(id)completion failure:(id)failure;	// 0x1854d1
-(id)get:(id)get completion:(id)completion failure:(id)failure;	// 0x18546d
-(void)getData:(id)data completion:(id)completion failure:(id)failure;	// 0x185289
-(id)getExtra;	// 0x184e29
-(id)decryptWithObj:(id)obj AESKey:(id)key;	// 0x184d35
-(id)getBodyWithDictionary:(id)dictionary AESKey:(id)key;	// 0x184c7d
-(id)init;	// 0x184c11
@end

