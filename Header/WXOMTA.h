/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WXOMTA : XXUnknownSuperclass {
	dispatch_queue_s* task_queue;
	NSString* _keyForKeyChain;
	NSString* _mtaCurrentPage;
	NSString* _lastPage;
}
@property(retain, nonatomic) NSString* lastPage;	// G=0xccc0e1; S=0xccc0f1; 
@property(retain, nonatomic) NSString* mtaCurrentPage;	// G=0xccc0ad; S=0xccc0bd; 
@property(retain, nonatomic) NSString* keyForKeyChain;	// G=0xccc079; S=0xccc089; 
+(id)getMtaUDID;	// 0xccc045
+(void)trackGameUser:(id)user world:(id)world level:(id)level appkey:(id)appkey isRealTime:(BOOL)time;	// 0xccbee9
+(void)trackGameUser:(id)user world:(id)world level:(id)level;	// 0xccbebd
+(void)reportAppMonitorStat:(id)stat appkey:(id)appkey isRealTime:(BOOL)time;	// 0xccbd79
+(void)reportAppMonitorStat:(id)stat;	// 0xccbd59
+(void)reportAccount:(id)account type:(unsigned)type ext:(id)ext appkey:(id)appkey isRealTime:(BOOL)time;	// 0xccbba9
+(void)reportAccount:(id)account type:(unsigned)type ext:(id)ext;	// 0xccbb7d
+(void)reportQQ:(id)qq appkey:(id)appkey isRealTime:(BOOL)time;	// 0xccbad5
+(void)reportQQ:(id)qq;	// 0xccbab5
+(void)stopSession;	// 0xccba81
+(void)startNewSession:(BOOL)session;	// 0xccb901
+(void)startNewSession;	// 0xccb8b9
+(void)trackCustomKeyValueEventDuration:(unsigned)duration withEventid:(id)eventid props:(id)props appKey:(id)key isRealTime:(BOOL)time;	// 0xccb72d
+(void)trackCustomKeyValueEventDuration:(unsigned)duration withEventid:(id)eventid props:(id)props;	// 0xccb701
+(void)trackCustomKeyValueEventEnd:(id)end props:(id)props appkey:(id)appkey isRealTime:(BOOL)time;	// 0xccb3a9
+(void)trackCustomKeyValueEventEnd:(id)end props:(id)props;	// 0xccb381
+(void)trackCustomKeyValueEventBegin:(id)begin props:(id)props appkey:(id)appkey;	// 0xccaf69
+(void)trackCustomKeyValueEventBegin:(id)begin props:(id)props;	// 0xccaf45
+(void)trackCustomKeyValueEvent:(id)event props:(id)props appkey:(id)appkey isRealTime:(BOOL)time;	// 0xccadc9
+(void)trackCustomKeyValueEvent:(id)event props:(id)props;	// 0xccada1
+(void)trackCustomEventEnd:(id)end args:(id)args appkey:(id)appkey isRealTime:(BOOL)time;	// 0xccaa51
+(void)trackCustomEventEnd:(id)end args:(id)args;	// 0xccaa29
+(void)trackCustomEventBegin:(id)begin args:(id)args appkey:(id)appkey;	// 0xcca6a5
+(void)trackCustomEventBegin:(id)begin args:(id)args;	// 0xcca681
+(void)trackCustomEvent:(id)event args:(id)args appkey:(id)appkey isRealTime:(BOOL)time;	// 0xcca51d
+(void)trackCustomEvent:(id)event args:(id)args;	// 0xcca4f5
+(void)trackError:(id)error appkey:(id)appkey isRealTime:(BOOL)time;	// 0xcca39d
+(void)trackError:(id)error;	// 0xcca37d
+(void)trackException:(id)exception appkey:(id)appkey isRealTime:(BOOL)time;	// 0xcca1e1
+(void)trackException:(id)exception;	// 0xcca1c1
+(void)trackPageViewEnd:(id)end appkey:(id)appkey isRealTime:(BOOL)time;	// 0xcca0d9
+(void)trackPageViewEnd:(id)end;	// 0xcca0b9
+(void)trackPageViewBegin:(id)begin appkey:(id)appkey;	// 0xcc9fc5
+(void)trackPageViewBegin:(id)begin;	// 0xcc9fb1
+(void)trackDirectPageViewEnd:(id)end appkey:(id)appkey isRealTime:(BOOL)time;	// 0xcc99e5
+(void)trackDirectPageViewBegin:(id)begin appkey:(id)appkey;	// 0xcc95dd
+(void)commitCachedStats:(int)stats;	// 0xcc9559
+(BOOL)startWithAppkey:(id)appkey checkedSdkVersion:(id)version;	// 0xcc94bd
+(void)startWithAppkey:(id)appkey;	// 0xcc93d5
+(id)allocWithZone:(NSZone*)zone;	// 0xcc92e5
+(id)getInstance;	// 0xcc91f9
-(id)autorelease;	// 0xcc93d1
-(id)copyWithZone:(NSZone*)zone;	// 0xcc93cd
-(dispatch_queue_s*)getTaskQueue;	// 0xcc91e9
-(void)dealloc;	// 0xcc91b5
-(void)onWillApplicationEnterBackground;	// 0xcc916d
-(void)onWillApplicationEnterForeground;	// 0xcc9125
-(void)onDidApplicationBecomeActive;	// 0xcc9075
-(void)onWillApplicationResignActive;	// 0xcc8f99
-(void)onWillApplicationWillTerminate;	// 0xcc8ea9
-(void)handleCrashReport;	// 0xcc8ea5
-(id)init;	// 0xcc8c05
@end

