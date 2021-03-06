/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMNotifyDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol HJChatRoomDelegate;

__attribute__((visibility("hidden")))
@interface HJChatRoomMgr : XXUnknownSuperclass <IMNotifyDelegate> {
	NSString* _roomID;
	id<HJChatRoomDelegate> _chatDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<HJChatRoomDelegate> chatDelegate;	// G=0x244f8d; S=0x244fad; 
@property(copy, nonatomic) NSString* roomID;	// G=0x244f69; S=0x244f7d; 
+(void)destoryInstance;	// 0x23e501
+(id)sharedInstance;	// 0x23e291
-(void).cxx_destruct;	// 0x244fc1
-(void)onChatroom:(id)chatroom Change:(int)change Member:(id)member MemCount:(int)count withData:(id)data;	// 0x244c11
-(void)onChatroomData:(id)data Sender:(id)sender Data:(id)data3 MemCount:(int)count RegCount:(int)count5;	// 0x23fed1
-(void)joinRoomErrorWithRoominfo:(id)roominfo roomid:(id)roomid;	// 0x23fddd
-(void)onChatroomEvent:(int)event IsSuccessful:(BOOL)successful RoomInfo:(id)info;	// 0x23f995
-(void)onChannelWithSid:(id)sid sn:(long long)sn result:(int)result channelId:(id)anId channelInfo:(id)info;	// 0x23f951
-(void)onPresenceWithSid:(id)sid sn:(long long)sn result:(int)result users:(id)users statuses:(id)statuses;	// 0x23f90d
-(void)onWeimiString:(id)string UserID:(id)anId;	// 0x23f8c9
-(void)onMessage:(id)message User:(id)user;	// 0x23f87d
-(void)onSendResult:(id)result User:(id)user;	// 0x23f839
-(void)onStateChange:(id)change;	// 0x23f7f5
-(void)onStateChange:(int)change From:(int)from User:(id)user;	// 0x23f769
-(void)_postError:(int)error;	// 0x23f66d
-(void)_joinAndNotif;	// 0x23f551
-(int)_join;	// 0x23f429
-(int)_quit;	// 0x23f301
-(void)onPublic:(long long)aPublic Data:(id)data;	// 0x23f2a9
-(void)onPeerchat:(long long)peerchat Data:(id)data;	// 0x23ed0d
-(id)NSDataToNSString:(id)nsstring;	// 0x23ecb9
-(id)getCurTimeString;	// 0x23ebd5
-(void)quitRoom;	// 0x23eb51
-(void)joinRoomForEndMessage:(id)endMessage;	// 0x23e9bd
-(void)joinRoom:(id)room;	// 0x23e891
-(void)stopService;	// 0x23e7dd
-(BOOL)startChatService;	// 0x23e64d
-(BOOL)startService;	// 0x23e63d
-(void)preRelease;	// 0x23e5e1
-(void)onEnrollStateChanged:(id)changed;	// 0x23e451
-(id)init;	// 0x23e3a1
@end

