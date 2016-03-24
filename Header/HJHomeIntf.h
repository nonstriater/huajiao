/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJServices.h"
#import "HJServicesConstraits.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HJHomeIntf : HJServices <HJServicesConstraits> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedIntfs;	// 0x6ee25
-(id)feed_deleteWithRelateId:(id)relateId Complete:(id)complete failured:(id)failured;	// 0x6f579
-(id)home_getNewsFeedsOffset:(id)offset Complete:(id)complete failured:(id)failured;	// 0x6f1b9
-(id)home_getRecommendsOffset:(id)offset Complete:(id)complete failured:(id)failured;	// 0x6ef49
-(id)init;	// 0x6eef9
@end
