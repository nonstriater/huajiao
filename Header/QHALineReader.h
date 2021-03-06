/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface QHALineReader : XXUnknownSuperclass {
	NSString* _filePath;
	char* _lineBreak;
	BOOL _isEndOfFile;
	long _currentOffset;
}
+(void)persistOffset:(long)offset withFilePath:(id)filePath;	// 0x474935
+(long)readOffsetWithFilePath:(id)filePath;	// 0x47489d
+(void)clearOffsetInfoWithFilePath:(id)filePath;	// 0x474825
+(id)createKeyWithFilePath:(id)filePath;	// 0x4747f1
-(void).cxx_destruct;	// 0x4749e1
-(id)readLineData;	// 0x4747a9
-(id)readLineWithOffset:(long)offset;	// 0x474609
-(BOOL)gotoNextLine;	// 0x4745a9
-(id)readLastLine;	// 0x4745a5
-(id)readFirstLine;	// 0x474591
-(id)initWithFilePath:(id)filePath;	// 0x474519
@end

