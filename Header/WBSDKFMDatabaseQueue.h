/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject, WBSDKFMDatabase;
@protocol OS_dispatch_queue;

@interface WBSDKFMDatabaseQueue : XXUnknownSuperclass {
	NSString* _path;
	NSObject<OS_dispatch_queue>* _queue;
	WBSDKFMDatabase* _db;
}
@property(retain) NSString* path;	// G=0xd57369; S=0xd5737d; 
+(id)databaseQueueWithPath:(id)path;	// 0xd567bd
-(id)inSavePoint:(id)savePoint;	// 0xd57019
-(BOOL)inTransaction:(id)transaction;	// 0xd57005
-(BOOL)inDeferredTransaction:(id)deferredTransaction;	// 0xd56ff1
-(BOOL)beginTransaction:(BOOL)transaction withBlock:(id)block;	// 0xd56d05
-(void)inDatabase:(id)database;	// 0xd56b71
-(id)database;	// 0xd56ac9
-(void)close;	// 0xd56995
-(void)dealloc;	// 0xd56919
-(id)initWithPath:(id)path;	// 0xd567fd
@end

