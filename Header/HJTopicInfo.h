/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class HJTopicShare, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HJTopicInfo : XXUnknownSuperclass {
	NSString* _tid;
	NSString* _title;
	NSString* _content;
	NSString* _image;
	NSNumber* _videos;
	NSNumber* _users;
	NSString* _bigImage;
	NSString* _type;
	NSString* _deadline;
	NSString* _deadlinePrize;
	NSString* _bonus;
	NSString* _url;
	NSString* _topicStatus;
	NSString* _awardStatus;
	NSNumber* _awardMoney;
	NSString* _hasBindMobile;
	HJTopicShare* _share;
	NSString* _record;
	NSString* _serverTime;
}
@property(copy, nonatomic) NSString* serverTime;	// G=0xffa0d; S=0xffa21; 
@property(copy, nonatomic) NSString* record;	// G=0xff9e9; S=0xff9fd; 
@property(retain, nonatomic) HJTopicShare* share;	// G=0xff9b1; S=0xff9c1; 
@property(copy, nonatomic) NSString* hasBindMobile;	// G=0xff98d; S=0xff9a1; 
@property(copy, nonatomic) NSNumber* awardMoney;	// G=0xff969; S=0xff97d; 
@property(copy, nonatomic) NSString* awardStatus;	// G=0xff945; S=0xff959; 
@property(copy, nonatomic) NSString* topicStatus;	// G=0xff921; S=0xff935; 
@property(copy, nonatomic) NSString* url;	// G=0xff8fd; S=0xff911; 
@property(copy, nonatomic) NSString* bonus;	// G=0xff8d9; S=0xff8ed; 
@property(copy, nonatomic) NSString* deadlinePrize;	// G=0xff8b5; S=0xff8c9; 
@property(copy, nonatomic) NSString* deadline;	// G=0xff891; S=0xff8a5; 
@property(copy, nonatomic) NSString* type;	// G=0xff86d; S=0xff881; 
@property(copy, nonatomic) NSString* bigImage;	// G=0xff849; S=0xff85d; 
@property(retain, nonatomic) NSNumber* users;	// G=0xff811; S=0xff821; 
@property(retain, nonatomic) NSNumber* videos;	// G=0xff7d9; S=0xff7e9; 
@property(copy, nonatomic) NSString* image;	// G=0xff7b5; S=0xff7c9; 
@property(copy, nonatomic) NSString* content;	// G=0xff791; S=0xff7a5; 
@property(copy, nonatomic) NSString* title;	// G=0xff76d; S=0xff781; 
@property(copy, nonatomic) NSString* tid;	// G=0xff749; S=0xff75d; 
+(id)responseWithUserInfo:(id)userInfo;	// 0xff059
-(void).cxx_destruct;	// 0xffa31
@end

