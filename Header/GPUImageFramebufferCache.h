/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface GPUImageFramebufferCache : XXUnknownSuperclass {
	NSMutableDictionary* framebufferCache;
	NSMutableDictionary* framebufferTypeCounts;
	NSMutableArray* activeImageCaptureList;
	id memoryWarningObserver;
	NSObject<OS_dispatch_queue>* framebufferCacheQueue;
}
-(void).cxx_destruct;	// 0x829ffd
-(void)removeFramebufferFromActiveImageCaptureList:(id)activeImageCaptureList;	// 0x829f39
-(void)addFramebufferToActiveImageCaptureList:(id)activeImageCaptureList;	// 0x829e75
-(void)purgeAllUnassignedFramebuffers;	// 0x829d8d
-(void)returnFramebufferToCache:(id)cache;	// 0x829b35
-(id)fetchFramebufferForSize:(CGSize)size onlyTexture:(BOOL)texture;	// 0x829aed
-(id)fetchFramebufferForSize:(CGSize)size textureOptions:(GPUTextureOptions)options onlyTexture:(BOOL)texture;	// 0x829689
-(id)hashForSize:(CGSize)size textureOptions:(GPUTextureOptions)options onlyTexture:(BOOL)texture;	// 0x8295c5
-(void)dealloc;	// 0x829559
-(id)init;	// 0x829395
@end

