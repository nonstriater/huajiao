/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PLCrashReporterConfig, NSString, PLCrashMachExceptionServer, PLCrashMachExceptionPortSet;

@interface PLCrashReporter : XXUnknownSuperclass {
	PLCrashReporterConfig* _config;
	BOOL _enabled;
	PLCrashMachExceptionServer* _machServer;
	PLCrashMachExceptionPortSet* _previousMachPorts;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _crashReportDirectory;
}
+(id)sharedReporter;	// 0xcae079
+(void)initialize;	// 0xcadf95
-(void)setCrashCallbacks:(PLCrashReporterCallbacks*)callbacks;	// 0xcaeae1
-(id)generateLiveReportAndReturnError:(id*)error;	// 0xcaeabd
-(id)generateLiveReport;	// 0xcaeaa5
-(id)generateLiveReportWithThread:(unsigned)thread error:(id*)error;	// 0xcae7b1
-(id)generateLiveReportWithThread:(unsigned)thread;	// 0xcae799
-(BOOL)enableCrashReporterAndReturnError:(id*)error;	// 0xcae2a5
-(BOOL)enableCrashReporter;	// 0xcae28d
-(BOOL)purgePendingCrashReportAndReturnError:(id*)error;	// 0xcae23d
-(BOOL)purgePendingCrashReport;	// 0xcae225
-(id)loadPendingCrashReportDataAndReturnError:(id*)error;	// 0xcae1e5
-(id)loadPendingCrashReportData;	// 0xcae1cd
-(BOOL)hasPendingCrashReport;	// 0xcae181
-(id)initWithConfiguration:(id)configuration;	// 0xcae145
-(id)init;	// 0xcae10d
-(id)crashReportPath;	// 0xcaf0d5
-(id)queuedCrashReportDirectory;	// 0xcaf0a5
-(id)crashReportDirectory;	// 0xcaf095
-(BOOL)populateCrashReportDirectoryAndReturnError:(id*)error;	// 0xcaef65
-(int)mapToAsyncSymbolicationStrategy:(unsigned)asyncSymbolicationStrategy;	// 0xcaef5d
-(void)dealloc;	// 0xcaeea9
-(id)enableMachExceptionServerWithPreviousPortSet:(id*)previousPortSet callback:(/*function-pointer*/ void*)callback context:(void*)context error:(id*)error;	// 0xcaed91
-(id)initWithBundle:(id)bundle configuration:(id)configuration;	// 0xcaec79
-(id)initWithApplicationIdentifier:(id)applicationIdentifier appVersion:(id)version configuration:(id)configuration;	// 0xcaeb69
@end
