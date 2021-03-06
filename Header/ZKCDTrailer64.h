/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface ZKCDTrailer64 : XXUnknownSuperclass {
	unsigned long _magicNumber;
	unsigned long _versionMadeBy;
	unsigned long _versionNeededToExtract;
	unsigned long _thisDiskNumber;
	unsigned long _diskNumberWithStartOfCentralDirectory;
	unsigned long long _sizeOfTrailer;
	unsigned long long _numberOfCentralDirectoryEntriesOnThisDisk;
	unsigned long long _totalNumberOfCentralDirectoryEntries;
	unsigned long long _sizeOfCentralDirectory;
	unsigned long long _offsetOfStartOfCentralDirectory;
}
@property(assign) unsigned long long offsetOfStartOfCentralDirectory;	// G=0x457da9; S=0x457ddd; 
@property(assign) unsigned long long sizeOfCentralDirectory;	// G=0x457d41; S=0x457d75; 
@property(assign) unsigned long long totalNumberOfCentralDirectoryEntries;	// G=0x457cd9; S=0x457d0d; 
@property(assign) unsigned long long numberOfCentralDirectoryEntriesOnThisDisk;	// G=0x457c71; S=0x457ca5; 
@property(assign) unsigned long diskNumberWithStartOfCentralDirectory;	// G=0x457c51; S=0x457c61; 
@property(assign) unsigned long thisDiskNumber;	// G=0x457c31; S=0x457c41; 
@property(assign) unsigned long versionNeededToExtract;	// G=0x457c11; S=0x457c21; 
@property(assign) unsigned long versionMadeBy;	// G=0x457bf1; S=0x457c01; 
@property(assign) unsigned long long sizeOfTrailer;	// G=0x457b89; S=0x457bbd; 
@property(assign) unsigned long magicNumber;	// G=0x457b69; S=0x457b79; 
+(id)recordWithArchivePath:(id)archivePath atOffset:(unsigned long long)offset;	// 0x457895
+(id)recordWithData:(id)data atOffset:(unsigned long long)offset;	// 0x4576b9
-(id)description;	// 0x457add
-(unsigned)length;	// 0x457acd
-(id)data;	// 0x45794d
-(id)init;	// 0x4575fd
@end

