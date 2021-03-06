/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ZKCDTrailer : XXUnknownSuperclass {
	unsigned long _magicNumber;
	unsigned long _thisDiskNumber;
	unsigned long _diskNumberWithStartOfCentralDirectory;
	unsigned long _numberOfCentralDirectoryEntriesOnThisDisk;
	unsigned long _totalNumberOfCentralDirectoryEntries;
	unsigned long _commentLength;
	NSString* _comment;
	unsigned long long _sizeOfCentralDirectory;
	unsigned long long _offsetOfStartOfCentralDirectory;
}
@property(copy) NSString* comment;	// G=0x4575c5; S=0x4575d9; 
@property(assign) unsigned long commentLength;	// G=0x4575a5; S=0x4575b5; 
@property(assign) unsigned long long offsetOfStartOfCentralDirectory;	// G=0x45753d; S=0x457571; 
@property(assign) unsigned long long sizeOfCentralDirectory;	// G=0x4574d5; S=0x457509; 
@property(assign) unsigned long totalNumberOfCentralDirectoryEntries;	// G=0x4574b5; S=0x4574c5; 
@property(assign) unsigned long numberOfCentralDirectoryEntriesOnThisDisk;	// G=0x457495; S=0x4574a5; 
@property(assign) unsigned long diskNumberWithStartOfCentralDirectory;	// G=0x457475; S=0x457485; 
@property(assign) unsigned long thisDiskNumber;	// G=0x457455; S=0x457465; 
@property(assign) unsigned long magicNumber;	// G=0x457435; S=0x457445; 
+(id)recordWithArchivePath:(id)archivePath;	// 0x456fe1
+(id)recordWithData:(id)data;	// 0x456f29
+(id)recordWithData:(id)data atOffset:(unsigned long long)offset;	// 0x456d39
-(void).cxx_destruct;	// 0x4575e9
-(id)description;	// 0x4573ad
-(BOOL)useZip64Extensions;	// 0x45734d
-(unsigned)length;	// 0x457305
-(id)data;	// 0x45714d
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;	// 0x456c9d
-(void)dealloc;	// 0x456c5d
-(void)removeObservers;	// 0x456c41
-(id)init;	// 0x456b21
@end

