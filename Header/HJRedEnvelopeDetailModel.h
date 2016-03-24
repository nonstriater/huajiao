/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJRedEnvelopeDetailModel : XXUnknownSuperclass {
	BOOL _isOver;
	NSString* _senderName;
	int _redEnvelopeId;
	int _redEnvelopeUid;
	int _redEnvelopeMoney;
	int _redEnvelopCount;
	int _expiredTime;
	NSString* _redEnvelopeMessage;
	NSMutableArray* _receivers;
	int _myMoney;
}
@property(assign, nonatomic) int myMoney;	// G=0x163c01; S=0x163c11; 
@property(retain, nonatomic) NSMutableArray* receivers;	// G=0x163bc9; S=0x163bd9; 
@property(copy, nonatomic) NSString* redEnvelopeMessage;	// G=0x163ba5; S=0x163bb9; 
@property(assign, nonatomic) int expiredTime;	// G=0x163b85; S=0x163b95; 
@property(assign, nonatomic) BOOL isOver;	// G=0x163b65; S=0x163b75; 
@property(assign, nonatomic) int redEnvelopCount;	// G=0x163b45; S=0x163b55; 
@property(assign, nonatomic) int redEnvelopeMoney;	// G=0x163b25; S=0x163b35; 
@property(assign, nonatomic) int redEnvelopeUid;	// G=0x163b05; S=0x163b15; 
@property(assign, nonatomic) int redEnvelopeId;	// G=0x163ae5; S=0x163af5; 
@property(copy, nonatomic) NSString* senderName;	// G=0x163ac1; S=0x163ad5; 
-(void).cxx_destruct;	// 0x163c21
-(void)parseReceiverArray:(id)array;	// 0x163855
-(void)parseRedEvelopDetailData:(id)data;	// 0x163605
-(void)requestRedEnvelopeDetailSuccess:(id)success failure:(id)failure;	// 0x16322d
-(id)init;	// 0x1631c1
@end

