/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, QHASession, QHAPage;

@interface QHAActivityManager : XXUnknownSuperclass {
	BOOL _hasDealedWithError;
	QHASession* _currentSession;
	QHAPage* _currentPage;
	NSMutableDictionary* _currentPages;
	unsigned long _pageOpenTimesInSession;
}
@property(readonly, assign, nonatomic) unsigned long pageOpenTimesInSession;	// G=0x484e21; 
@property(retain, nonatomic) NSMutableDictionary* currentPages;	// G=0x484de9; S=0x484df9; 
@property(retain, nonatomic) QHAPage* currentPage;	// G=0x484db1; S=0x484dc1; 
@property(readonly, assign, nonatomic) QHASession* currentSession;	// G=0x484da1; 
+(unsigned long long)todaySessionCount;	// 0x484189
+(unsigned long long)totalSessionCount;	// 0x48410d
+(id)instance;	// 0x483659
-(void).cxx_destruct;	// 0x484e31
-(void)onError:(id)error;	// 0x484cf1
-(void)onBecomeActive;	// 0x484c39
-(void)onResignActive;	// 0x484b39
-(void)doOnPageEnd:(id)end;	// 0x4848e5
-(void)doOnPageEndWithName:(id)name;	// 0x484859
-(void)onPageEnd:(id)end;	// 0x484739
-(void)doOnPageBegin:(id)begin;	// 0x484721
-(void)doOnPageBegin:(id)begin dataLevel:(int)level label:(id)label;	// 0x4843e5
-(void)onPageBegin:(id)begin dataLevel:(int)level label:(id)label;	// 0x484281
-(void)onPageBegin:(id)begin label:(id)label;	// 0x484249
-(void)onPageBegin:(id)begin dataLevel:(int)level;	// 0x484225
-(void)onPageBegin:(id)begin;	// 0x484205
-(void)updateSessionCount:(id)count;	// 0x483e0d
-(void)persistLastSession:(id)session;	// 0x483d49
-(void)processUnfinishedSession;	// 0x483c65
-(void)onSessionEnd;	// 0x4839e5
-(void)doOnSessionBegin;	// 0x483951
-(id)createSession;	// 0x4837fd
-(void)onSessionBegin;	// 0x483729
@end

