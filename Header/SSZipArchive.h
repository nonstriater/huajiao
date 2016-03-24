/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SSZipArchive : XXUnknownSuperclass {
	NSString* _path;
	NSString* _filename;
	void* _zip;
	BOOL _open;
	BOOL _close;
}
@property(readonly, assign, nonatomic, getter=isClosed) BOOL close;	// G=0x13e83d; 
@property(readonly, assign, nonatomic, getter=isOpen) BOOL open;	// G=0x13e82d; 
+(id)_dateWithMSDOSFormat:(unsigned long)msdosformat;	// 0x13e679
+(BOOL)createZipFileAtPath:(id)path withContentsOfDirectory:(id)directory keepParentDirectory:(BOOL)directory3 withPassword:(id)password;	// 0x13db09
+(BOOL)createZipFileAtPath:(id)path withContentsOfDirectory:(id)directory withPassword:(id)password;	// 0x13dabd
+(BOOL)createZipFileAtPath:(id)path withFilesAtPaths:(id)paths withPassword:(id)password;	// 0x13d945
+(BOOL)createZipFileAtPath:(id)path withContentsOfDirectory:(id)directory keepParentDirectory:(BOOL)directory3;	// 0x13d8fd
+(BOOL)createZipFileAtPath:(id)path withContentsOfDirectory:(id)directory;	// 0x13d8b9
+(BOOL)createZipFileAtPath:(id)path withFilesAtPaths:(id)paths;	// 0x13d875
+(BOOL)unzipFileAtPath:(id)path toDestination:(id)destination overwrite:(BOOL)overwrite password:(id)password error:(id*)error delegate:(id)delegate progressHandler:(id)handler completionHandler:(id)handler8;	// 0x13c845
+(BOOL)unzipFileAtPath:(id)path toDestination:(id)destination progressHandler:(id)handler completionHandler:(id)handler4;	// 0x13c7d9
+(BOOL)unzipFileAtPath:(id)path toDestination:(id)destination overwrite:(BOOL)overwrite password:(id)password progressHandler:(id)handler completionHandler:(id)handler6;	// 0x13c75d
+(BOOL)unzipFileAtPath:(id)path toDestination:(id)destination overwrite:(BOOL)overwrite password:(id)password error:(id*)error delegate:(id)delegate;	// 0x13c6ed
+(BOOL)unzipFileAtPath:(id)path toDestination:(id)destination delegate:(id)delegate;	// 0x13c695
+(BOOL)unzipFileAtPath:(id)path toDestination:(id)destination overwrite:(BOOL)overwrite password:(id)password error:(id*)error;	// 0x13c639
+(BOOL)unzipFileAtPath:(id)path toDestination:(id)destination;	// 0x13c5fd
-(void).cxx_destruct;	// 0x13e84d
-(BOOL)close;	// 0x13e65d
-(BOOL)writeData:(id)data filename:(id)filename withPassword:(id)password;	// 0x13e4e5
-(BOOL)writeFileAtPath:(id)path withFileName:(id)fileName withPassword:(id)password;	// 0x13e235
-(BOOL)writeFile:(id)file withPassword:(id)password;	// 0x13e1fd
-(BOOL)writeFolderAtPath:(id)path withFolderName:(id)folderName withPassword:(id)password;	// 0x13dfc1
-(void)zipInfo:(XXStruct_z_NMMB*)info setDate:(id)date;	// 0x13dec5
-(BOOL)open;	// 0x13de85
-(id)initWithPath:(id)path;	// 0x13de19
@end
