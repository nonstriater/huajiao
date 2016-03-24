/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "living-Structs.h"
#import "DSViewController.h"

@class NSString, NSArray, UICollectionView, HJFeedbackViewController;

__attribute__((visibility("hidden")))
@interface HJSelectPhotoViewController : DSViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
	HJFeedbackViewController* _delegate;
	NSArray* _allPhotos;
	UICollectionView* _collectionView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UICollectionView* collectionView;	// G=0x3ec741; S=0x3ec751; 
@property(retain, nonatomic) NSArray* allPhotos;	// G=0x3ec709; S=0x3ec719; 
@property(assign, nonatomic) HJFeedbackViewController* delegate;	// G=0x3ec6e9; S=0x3ec6f9; 
-(void).cxx_destruct;	// 0x3ec779
-(void)didReceiveMemoryWarning;	// 0x3ec6bd
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;	// 0x3ec5a1
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;	// 0x3ec491
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;	// 0x3ec455
-(void)loadPhotos;	// 0x3ec2d5
-(void)viewDidLoad;	// 0x3ebf65
@end
