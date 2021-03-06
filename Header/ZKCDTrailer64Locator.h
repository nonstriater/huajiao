/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface ZKCDTrailer64Locator : XXUnknownSuperclass {
	unsigned long _magicNumber;
	unsigned long _diskNumberWithStartOfCentralDirectory;
	unsigned long _numberOfDisks;
	unsigned long long _offsetOfStartOfCentralDirectoryTrailer64;
}
@property(assign) unsigned long numberOfDisks;	// G=0x45822d; S=0x45823d; 
@property(assign) unsigned long long offsetOfStartOfCentralDirectoryTrailer64;	// G=0x4581c5; S=0x4581f9; 
@property(assign) unsigned long diskNumberWithStartOfCentralDirectory;	// G=0x4581a5; S=0x4581b5; 
@property(assign) unsigned long magicNumber;	// G=0x458185; S=0x458195; 
+(id)recordWithArchivePath:(id)archivePath andCDTrailerLength:(unsigned)length;	// 0x457f95
+(id)recordWithData:(id)data atOffset:(unsigned long long)offset;	// 0x457e8d
-(id)description;	// 0x45813d
-(unsigned)length;	// 0x45812d
-(id)data;	// 0x458075
-(id)init;	// 0x457e11
@end

