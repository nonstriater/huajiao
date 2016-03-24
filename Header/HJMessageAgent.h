/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "IMNotifyDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol HJChatMessageDelegate2, HJNotificationDelegate;

__attribute__((visibility("hidden")))
@interface HJMessageAgent : XXUnknownSuperclass <IMNotifyDelegate> {
	BOOL isNeedJoinAfterInit;
	BOOL isConnected;
	id<HJChatMessageDelegate2> _chatDelegate;
	id<HJNotificationDelegate> _notifDelegate;
	id _jionSuccess;
	id _quitSuccess;
	id _joinFail;
	id _quiteFail;
	NSString* _liveId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* liveId;	// G=0x295061; S=0x295075; 
@property(copy, nonatomic) id quiteFail;	// G=0x29503d; S=0x295051; 
@property(copy, nonatomic) id joinFail;	// G=0x295019; S=0x29502d; 
@property(copy, nonatomic) id quitSuccess;	// G=0x294ff5; S=0x295009; 
@property(copy, nonatomic) id jionSuccess;	// G=0x294fd1; S=0x294fe5; 
@property(assign, nonatomic) __weak id<HJNotificationDelegate> notifDelegate;	// G=0x294f9d; S=0x294fbd; 
@property(assign, nonatomic) __weak id<HJChatMessageDelegate2> chatDelegate;	// G=0x294f69; S=0x294f89; 
+(id)allocWithZone:(NSZone*)zone;	// 0x2927a5
+(id)new;	// 0x292785
+(id)sharedMessageAgent;	// 0x2926b1
-(void).cxx_destruct;	// 0x295085
-(void)onWeimiString:(id)string UserID:(id)anId;	// 0x29462d
-(void)onChatroom:(id)chatroom Change:(int)change Member:(id)member MemCount:(int)count;	// 0x294461
-(void)onSendResult:(id)result User:(id)user;	// 0x294399
-(void)onChatroomData:(id)data Sender:(id)sender Data:(id)data3;	// 0x293979
-(void)onChatroomEvent:(int)event IsSuccessful:(BOOL)successful RoomInfo:(id)info;	// 0x293315
-(void)onPublic:(long long)aPublic Data:(id)data;	// 0x29322d
-(void)onPeerchat:(long long)peerchat Data:(id)data;	// 0x293145
-(id)NSDataToNSString:(id)nsstring;	// 0x2930f1
-(id)getCurTimeString;	// 0x29300d
-(void)onStateChange:(int)change From:(int)from User:(id)user;	// 0x292d55
-(void)quitLive:(id)live sucess:(id)sucess failure:(id)failure;	// 0x292b91
-(id)currentTimeString;	// 0x292af1
-(void)joinLive:(id)live success:(id)success failure:(id)failure;	// 0x2928f5
-(id)init;	// 0x2927c5
@end
