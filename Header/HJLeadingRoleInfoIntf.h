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
@interface HJLeadingRoleInfoIntf : HJServices <HJServicesConstraits> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedIntfs;	// 0x6b9d1
-(void)leadingRole_getListWithVideoInfoFromOffset:(int)offset success:(id)success failure:(id)failure;	// 0x6bcb9
-(void)leadingRole_getList:(id)list failure:(id)failure;	// 0x6baa5
@end
