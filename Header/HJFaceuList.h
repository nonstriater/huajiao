/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "living-Structs.h"

@class NSString, NSArray, UICollectionView, UIView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface HJFaceuList : XXUnknownSuperclass <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
	id _delegate;
	UIView* _mainView;
	UICollectionView* _collectionView;
	NSArray* _dataSource;
	NSIndexPath* _selectedIndex;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSIndexPath* selectedIndex;	// G=0x3e39e9; S=0x3e39f9; 
@property(retain, nonatomic) NSArray* dataSource;	// G=0x3e39b1; S=0x3e39c1; 
@property(retain, nonatomic) UICollectionView* collectionView;	// G=0x3e3979; S=0x3e3989; 
@property(retain, nonatomic) UIView* mainView;	// G=0x3e3941; S=0x3e3951; 
@property(assign, nonatomic) __weak id delegate;	// G=0x3e390d; S=0x3e392d; 
-(void).cxx_destruct;	// 0x3e3a21
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;	// 0x3e38ed
-(int)numberOfSectionsInCollectionView:(id)collectionView;	// 0x3e38e9
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;	// 0x3e3601
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;	// 0x3e3319
-(void)hidden;	// 0x3e31a9
-(void)showInView:(id)view;	// 0x3e3019
-(void)layout;	// 0x3e2f0d
-(void)layoutSubviews;	// 0x3e2efd
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3e2ecd
-(void)setUp;	// 0x3e2a65
-(id)initWithCoder:(id)coder;	// 0x3e2a21
-(id)initWithFrame:(CGRect)frame;	// 0x3e29c9
@end

