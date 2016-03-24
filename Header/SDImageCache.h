/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSFileManager, NSCache, NSMutableArray;

@interface SDImageCache : XXUnknownSuperclass {
	NSFileManager* _fileManager;
	BOOL _shouldDecompressImages;
	BOOL _shouldDisableiCloud;
	BOOL _shouldCacheImagesInMemory;
	int _maxCacheAge;
	unsigned _maxCacheSize;
	NSCache* _memCache;
	NSString* _diskCachePath;
	NSMutableArray* _customPaths;
	dispatch_queue_s* _ioQueue;
}
@property(assign, nonatomic) dispatch_queue_s* ioQueue;	// G=0x4434c5; S=0x4434d5; 
@property(retain, nonatomic) NSMutableArray* customPaths;	// G=0x44348d; S=0x44349d; 
@property(retain, nonatomic) NSString* diskCachePath;	// G=0x443455; S=0x443465; 
@property(retain, nonatomic) NSCache* memCache;	// G=0x44341d; S=0x44342d; 
@property(assign, nonatomic) unsigned maxCacheSize;	// G=0x4433fd; S=0x44340d; 
@property(assign, nonatomic) int maxCacheAge;	// G=0x4433dd; S=0x4433ed; 
@property(assign, nonatomic) unsigned maxMemoryCountLimit;	// G=0x441ead; S=0x441ee9; 
@property(assign, nonatomic) unsigned maxMemoryCost;	// G=0x441e71; S=0x441e35; 
@property(assign, nonatomic) BOOL shouldCacheImagesInMemory;	// G=0x4433bd; S=0x4433cd; 
@property(assign, nonatomic) BOOL shouldDisableiCloud;	// G=0x44339d; S=0x4433ad; 
@property(assign, nonatomic) BOOL shouldDecompressImages;	// G=0x44337d; S=0x44338d; 
+(id)sharedImageCache;	// 0x4401f9
-(void).cxx_destruct;	// 0x4434e5
-(void)calculateSizeWithCompletionBlock:(id)completionBlock;	// 0x443051
-(unsigned)getDiskCount;	// 0x442e6d
-(unsigned)getSize;	// 0x442b59
-(void)backgroundCleanDisk;	// 0x4428b1
-(void)cleanDiskWithCompletionBlock:(id)completionBlock;	// 0x44214d
-(void)cleanDisk;	// 0x442139
-(void)clearDiskOnCompletion:(id)completion;	// 0x441f71
-(void)clearDisk;	// 0x441f5d
-(void)clearMemory;	// 0x441f25
-(void)removeImageForKey:(id)key fromDisk:(BOOL)disk withCompletion:(id)completion;	// 0x441c11
-(void)removeImageForKey:(id)key fromDisk:(BOOL)disk;	// 0x441bed
-(void)removeImageForKey:(id)key withCompletion:(id)completion;	// 0x441bb5
-(void)removeImageForKey:(id)key;	// 0x441ba1
-(id)queryDiskCacheForKey:(id)key done:(id)done;	// 0x441831
-(id)scaledImageForKey:(id)key image:(id)image;	// 0x441805
-(id)diskImageForKey:(id)key;	// 0x441729
-(id)diskImageDataBySearchingAllPathsForKey:(id)key;	// 0x441489
-(id)imageFromDiskCacheForKey:(id)key;	// 0x441331
-(id)imageFromMemoryCacheForKey:(id)key;	// 0x4412c9
-(void)diskImageExistsWithKey:(id)key completion:(id)completion;	// 0x4410ad
-(BOOL)diskImageExistsWithKey:(id)key;	// 0x440fb5
-(void)storeImage:(id)image forKey:(id)key toDisk:(BOOL)disk;	// 0x440f75
-(void)storeImage:(id)image forKey:(id)key;	// 0x440f35
-(void)storeImage:(id)image recalculateFromImage:(BOOL)image2 imageData:(id)data forKey:(id)key toDisk:(BOOL)disk;	// 0x440b2d
-(id)makeDiskCachePath:(id)path;	// 0x440ab1
-(id)cachedFileNameForKey:(id)key;	// 0x4408b9
-(id)defaultCachePathForKey:(id)key;	// 0x440859
-(id)cachePathForKey:(id)key inPath:(id)path;	// 0x4407dd
-(void)addReadOnlyCachePath:(id)path;	// 0x440705
-(void)dealloc;	// 0x440685
-(id)initWithNamespace:(id)aNamespace diskCacheDirectory:(id)directory;	// 0x440319
-(id)initWithNamespace:(id)aNamespace;	// 0x4402c5
-(id)init;	// 0x4402a9
@end
