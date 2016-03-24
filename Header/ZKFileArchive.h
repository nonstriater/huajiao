/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ZKArchive.h"


@interface ZKFileArchive : ZKArchive {
	BOOL _useZip64Extensions;
}
@property(assign) BOOL useZip64Extensions;	// G=0x45e7ad; S=0x45e7c1; 
+(id)archiveWithArchivePath:(id)archivePath;	// 0x45b4a1
+(id)process:(id)process usingResourceFork:(BOOL)fork withInvoker:(id)invoker andDelegate:(id)delegate;	// 0x45a5f9
-(id)init;	// 0x45e765
-(int)deflateFile:(id)file relativeToPath:(id)path usingResourceFork:(BOOL)fork;	// 0x45d1b5
-(int)deflateDirectory:(id)directory relativeToPath:(id)path usingResourceFork:(BOOL)fork;	// 0x45d02d
-(int)deflateFiles:(id)files relativeToPath:(id)path usingResourceFork:(BOOL)fork;	// 0x45ce91
-(int)inflateFile:(id)file toDirectory:(id)directory;	// 0x45bc05
-(int)inflateToDirectory:(id)directory usingResourceFork:(BOOL)fork;	// 0x45b8f1
-(int)inflateToDiskUsingResourceFork:(BOOL)diskUsingResourceFork;	// 0x45b861
@end

