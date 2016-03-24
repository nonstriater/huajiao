/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DDAbstractLogger.h"

@class NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface DDAbstractDatabaseLogger : DDAbstractLogger {
	unsigned _saveThreshold;
	double _saveInterval;
	double _maxAge;
	double _deleteInterval;
	BOOL _deleteOnEverySave;
	BOOL _saveTimerSuspended;
	unsigned _unsavedCount;
	unsigned long long _unsavedTime;
	NSObject<OS_dispatch_source>* _saveTimer;
	unsigned long long _lastDeleteTime;
	NSObject<OS_dispatch_source>* _deleteTimer;
}
@property(assign) BOOL deleteOnEverySave;	// G=0x19cd01; S=0x19ce9d; 
@property(assign) double deleteInterval;	// G=0x19c939; S=0x19caf1; 
@property(assign) double maxAge;	// G=0x19c54d; S=0x19c705; 
@property(assign) double saveInterval;	// G=0x19c171; S=0x19c329; 
@property(assign) unsigned saveThreshold;	// G=0x19be15; S=0x19bfad; 
-(void).cxx_destruct;	// 0x19d2d5
-(void)flush;	// 0x19d2c5
-(void)logMessage:(id)message;	// 0x19d235
-(void)willRemoveLogger;	// 0x19d1f5
-(void)didAddLogger;	// 0x19d1c5
-(void)deleteOldLogEntries;	// 0x19d0f1
-(void)savePendingLogEntries;	// 0x19d01d
-(void)createAndStartDeleteTimer;	// 0x19bcd1
-(void)updateDeleteTimer;	// 0x19bc09
-(void)destroyDeleteTimer;	// 0x19bbd9
-(void)createSuspendedSaveTimer;	// 0x19bac1
-(void)updateAndResumeSaveTimer;	// 0x19ba01
-(void)destroySaveTimer;	// 0x19b9b9
-(void)performDelete;	// 0x19b961
-(void)performSaveAndSuspendSaveTimer;	// 0x19b8d9
-(void)db_saveAndDelete;	// 0x19b8d5
-(void)db_delete;	// 0x19b8d1
-(void)db_save;	// 0x19b8cd
-(BOOL)db_log:(id)log;	// 0x19b8c9
-(void)dealloc;	// 0x19b875
-(id)init;	// 0x19b7e1
@end

