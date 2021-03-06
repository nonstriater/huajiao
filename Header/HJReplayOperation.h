/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSTimer, NSMutableArray;
@protocol HJReplayOperationDelegate;

__attribute__((visibility("hidden")))
@interface HJReplayOperation : XXUnknownSuperclass {
	BOOL _bParseredData;
	id<HJReplayOperationDelegate> _delegate;
	NSString* _url;
	NSTimer* _postTimer;
	NSString* _content;
	NSString* _currentRoomId;
	int _state;
	NSString* _ownId;
	NSMutableArray* _allDatas;
	int _currentIndex;
	long long _baseTime;
	long long _currentTime;
	long long _endTime;
}
@property(assign, nonatomic) BOOL bParseredData;	// G=0x2c47c1; S=0x2c47d1; 
@property(assign, nonatomic) int currentIndex;	// G=0x2c47a1; S=0x2c47b1; 
@property(retain, nonatomic) NSMutableArray* allDatas;	// G=0x2c4769; S=0x2c4779; 
@property(retain, nonatomic) NSString* ownId;	// G=0x2c4731; S=0x2c4741; 
@property(assign, nonatomic) int state;	// G=0x2c4711; S=0x2c4721; 
@property(retain, nonatomic) NSString* currentRoomId;	// G=0x2c46d9; S=0x2c46e9; 
@property(assign, nonatomic) long long endTime;	// G=0x2c46ad; S=0x2c46c5; 
@property(assign, nonatomic) long long currentTime;	// G=0x2c4681; S=0x2c4699; 
@property(retain, nonatomic) NSString* content;	// G=0x2c4649; S=0x2c4659; 
@property(retain, nonatomic) NSTimer* postTimer;	// G=0x2c4611; S=0x2c4621; 
@property(assign, nonatomic) long long baseTime;	// G=0x2c45f9; S=0x2c27f9; 
@property(retain, nonatomic) NSString* url;	// G=0x2c45c1; S=0x2c45d1; 
@property(assign, nonatomic) __weak id<HJReplayOperationDelegate> delegate;	// G=0x2c458d; S=0x2c45ad; 
-(void).cxx_destruct;	// 0x2c47e1
-(void)dealloc;	// 0x2c454d
-(BOOL)isFinished;	// 0x2c452d
-(void)cancel;	// 0x2c44d9
-(void)timerAction:(id)action;	// 0x2c4291
-(void)destroyTimer;	// 0x2c41e9
-(void)initTimer;	// 0x2c40c5
-(void)parserDataOfIndex:(int)index;	// 0x2c3fe9
-(void)parserDataOfCurrentTime:(long long)currentTime;	// 0x2c3b09
-(id)getPostMessage:(id)message;	// 0x2c3365
-(id)parseReplayChatUser:(id)user ofType:(int)type;	// 0x2c3049
-(id)parseChatUser:(id)user;	// 0x2c2dfd
-(void)parserData;	// 0x2c2869
-(void)playAgain;	// 0x2c2831
-(void)startTimer;	// 0x2c2821
-(void)loadData;	// 0x2c2505
-(void)start;	// 0x2c24a9
@end

