/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AFImageCache.h"
#import "NSObject.h"

@class NSString;

@protocol AFImageCache <NSObject>
-(void)cacheImage:(id)image forRequest:(id)request;
-(id)cachedImageForRequest:(id)request;
@end

__attribute__((visibility("hidden")))
@interface AFImageCache : XXUnknownSuperclass <AFImageCache> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)cacheImage:(id)image forRequest:(id)request;	// 0x1499f1
-(id)cachedImageForRequest:(id)request;	// 0x149951
@end

