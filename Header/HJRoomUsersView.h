/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UICollectionViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UICollectionViewDelegate.h"

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJRoomUsersView : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate> {
	NSMutableArray* _itemArray;
	BOOL _showCountIcon;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL showCountIcon;	// G=0x366645; S=0x366655; 
+(id)view;	// 0x36641d
-(void).cxx_destruct;	// 0x366665
-(id)init;	// 0x366449
-(void)quit:(id)quit;	// 0x366419
-(void)join:(id)join;	// 0x366415
@end
