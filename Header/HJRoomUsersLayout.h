/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface HJRoomUsersLayout : XXUnknownSuperclass {
	NSMutableSet* _indexPathsToAnimate;
}
@property(retain, nonatomic) NSMutableSet* indexPathsToAnimate;	// G=0x397ba9; S=0x3984e5; 
-(void).cxx_destruct;	// 0x39850d
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)indexPath;	// 0x39835d
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)indexPath;	// 0x39817d
-(void)finalizeAnimatedBoundsChange;	// 0x398179
-(void)prepareForAnimatedBoundsChange:(CGRect)animatedBoundsChange;	// 0x398175
-(void)finalizeCollectionViewUpdates;	// 0x398171
-(void)prepareForCollectionViewUpdates:(id)collectionViewUpdates;	// 0x397f49
-(id)roomView;	// 0x397f39
-(id)layoutAttributesForElementsInRect:(CGRect)rect;	// 0x397e5d
-(id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x397d49
-(CGSize)collectionViewContentSize;	// 0x397c35
-(int)itemCount;	// 0x397bf9
-(id)init;	// 0x397b25
@end
