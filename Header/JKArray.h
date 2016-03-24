/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSFastEnumeration.h"


__attribute__((visibility("hidden")))
@interface JKArray : XXUnknownSuperclass <NSCopying, NSMutableCopying, NSFastEnumeration> {
	id* objects;
	unsigned count;
	unsigned capacity;
	unsigned mutations;
}
+(id)allocWithZone:(NSZone*)zone;	// 0x422fd
-(id)mutableCopyWithZone:(NSZone*)zone;	// 0x42d65
-(id)copyWithZone:(NSZone*)zone;	// 0x42ce9
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x42ae1
-(void)removeObjectAtIndex:(unsigned)index;	// 0x42931
-(void)insertObject:(id)object atIndex:(unsigned)index;	// 0x42679
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;	// 0x425f5
-(id)objectAtIndex:(unsigned)index;	// 0x42551
-(void)getObjects:(id*)objects range:(NSRange)range;	// 0x4241d
-(unsigned)count;	// 0x4240d
-(void)dealloc;	// 0x42385
@end
