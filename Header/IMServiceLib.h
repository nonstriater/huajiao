/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ASIReachability, NSString, NSFileHandle, IMUser;

@interface IMServiceLib : XXUnknownSuperclass {
	BOOL _isCloseLog;
	IMUser* _imUser;
	ASIReachability* _reacher;
	NSString* _curLogFile;
	NSFileHandle* _logFileHandle;
}
@property(retain) NSFileHandle* logFileHandle;	// G=0xa6b055; S=0xa6b069; 
@property(retain) NSString* curLogFile;	// G=0xa6b031; S=0xa6b045; 
@property(retain) ASIReachability* reacher;	// G=0xa6b00d; S=0xa6b021; 
@property(assign) BOOL isCloseLog;	// G=0xa6b079; S=0xa6b08d; 
@property(retain) IMUser* imUser;	// G=0xa6afe9; S=0xa6affd; 
+(id)allocWithZone:(NSZone*)zone;	// 0xa69361
+(id)sharedInstance;	// 0xa69261
-(void).cxx_destruct;	// 0xa6b09d
-(id)getLogFileContent:(id)content;	// 0xa6aea5
-(void)writeLog:(id)log;	// 0xa6ae2d
-(void)closeLog:(BOOL)log;	// 0xa6ae1d
-(void)removeOldLogFile;	// 0xa6aa91
-(void)printOldLogFile;	// 0xa6a919
-(id)getCurrentLogFileContent;	// 0xa6a7a9
-(void)dumpCurrentLogFile;	// 0xa6a6f1
-(id)getLogFileHandle;	// 0xa6a3c1
-(id)openLogFile:(id)file;	// 0xa6a2f9
-(id)getLogFilePathName;	// 0xa6a249
-(BOOL)createLogsDirectory;	// 0xa6a041
-(id)getLogsDirectory;	// 0xa69fd5
-(id)curUser;	// 0xa69fc5
-(void)shutdownUser;	// 0xa69f59
-(id)createUser:(id)user Token:(id)token Sig:(id)sig DeviceID:(id)anId AppID:(int)anId5 WithDelegate:(id)delegate Online:(BOOL)online;	// 0xa69bad
-(id)createUser:(id)user Password:(id)password DeviceID:(id)anId AppID:(int)anId4 WithDelegate:(id)delegate;	// 0xa69b29
-(id)createUser:(id)user DeviceID:(id)anId AppID:(int)anId3 WithDelegate:(id)delegate;	// 0xa69ab5
-(void)reachabilityChanged:(id)changed;	// 0xa69819
-(BOOL)isWifiNetwork;	// 0xa697d9
-(BOOL)isGPRSNetwork;	// 0xa69799
-(BOOL)isNetworkReachable;	// 0xa69759
-(void)dealloc;	// 0xa695e9
-(id)init;	// 0xa69465
@end
