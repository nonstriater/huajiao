/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface HJMessageCenterManager : XXUnknownSuperclass {
	NSArray* _localRawDataArray;
	int saveInterval;
	NSMutableArray* _followingFollowedArray;
	NSMutableArray* _yoursArray;
}
@property(retain, nonatomic) NSMutableArray* yoursArray;	// G=0x3df939; S=0x3df949; 
@property(retain, nonatomic) NSMutableArray* followingFollowedArray;	// G=0x3df901; S=0x3df911; 
+(id)sharedManager;	// 0x3dd921
-(void).cxx_destruct;	// 0x3df971
-(void)updateYoursArrayUserInfo;	// 0x3df005
-(void)clear;	// 0x3def21
-(BOOL)deleteMessage:(id)message;	// 0x3deda9
-(void)makeAllRead;	// 0x3deb65
-(unsigned)numberOfAllUnreadMessage;	// 0x3deb35
-(void)makeReadAllYoursMessage;	// 0x3de9ed
-(unsigned)numberOfUnreadYours;	// 0x3de8c9
-(void)makeReadAllFollowingFollowed;	// 0x3de781
-(unsigned)numberOfUnreadFollowingFollowed;	// 0x3de65d
-(void)parseMessage:(id)message;	// 0x3de305
-(void)persistMessage;	// 0x3de295
-(void)loadHistoryMessage;	// 0x3de0a9
-(void)sendMessageStatusChangedNotification;	// 0x3de03d
-(id)parseMessageDictionary:(id)dictionary isLoadHistory:(BOOL)history;	// 0x3ddce1
-(void)addObject:(id)object inOrderred:(id)orderred ascending:(BOOL)ascending;	// 0x3ddb75
-(id)init;	// 0x3ddacd
@end
