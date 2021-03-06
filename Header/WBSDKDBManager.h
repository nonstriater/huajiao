/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, WBSDKFMDatabase;
@protocol OS_dispatch_queue;

@interface WBSDKDBManager : XXUnknownSuperclass {
	WBSDKFMDatabase* db;
	NSObject<OS_dispatch_queue>* io_queue;
}
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* io_queue;	// G=0xd40c45; S=0xd40c55; 
@property(retain, nonatomic) WBSDKFMDatabase* db;	// G=0xd40c0d; S=0xd40c1d; 
+(id)sharedManager;	// 0xd406bd
+(id)allocWithZone:(NSZone*)zone;	// 0xd404f5
-(void).cxx_destruct;	// 0xd40c7d
-(void)closeDataBase;	// 0xd40bed
-(void)openDataBase;	// 0xd40a8d
-(void)endTransaction;	// 0xd40a55
-(void)beginTransaction;	// 0xd40a1d
-(id)databaseObjectsWithResultSet:(id)resultSet class:(Class)aClass;	// 0xd40a19
-(void)writeDatabaseBlockInTransaction:(id)transaction;	// 0xd408ed
-(void)readDatabaseBlockInTransaction:(id)transaction;	// 0xd407c1
-(void)dealloc;	// 0xd40665
-(id)init;	// 0xd405f1
@end

