/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "HJServices.h"
#import "HJServicesConstraits.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HJMusicIntf : HJServices <HJServicesConstraits> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)allocWithZone:(NSZone*)zone;	// 0xfeb15
+(id)new;	// 0xfeaf5
+(id)sharedIntfs;	// 0xfea21
-(void)music_searchMusic:(id)music page:(id)page success:(id)success failure:(id)failure;	// 0xfeb85
-(id)init;	// 0xfeb35
@end
