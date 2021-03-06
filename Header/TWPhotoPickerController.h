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

@class NSString, TWImageScrollView, NSArray, UICollectionView, UIImageView, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface TWPhotoPickerController : DSViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
	float beginOriginY;
	BOOL isScaled;
	id _cropBlock;
	UIView* _topView;
	UIImageView* _maskView;
	UICollectionView* _collectionView;
	TWImageScrollView* _imageScrollView;
	UIButton* _scaleButton;
	NSArray* _allPhotos;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSArray* allPhotos;	// G=0x2c1bcd; S=0x2c1bdd; 
@property(retain, nonatomic) UIButton* scaleButton;	// G=0x2c1b95; S=0x2c1ba5; 
@property(retain, nonatomic) TWImageScrollView* imageScrollView;	// G=0x2c1b5d; S=0x2c1b6d; 
@property(retain, nonatomic) UICollectionView* collectionView;	// G=0x2c16ed; S=0x2c1b35; 
@property(retain, nonatomic) UIImageView* maskView;	// G=0x2c1afd; S=0x2c1b0d; 
@property(retain, nonatomic) UIView* topView;	// G=0x2c0c31; S=0x2c1ad5; 
@property(copy, nonatomic) id cropBlock;	// G=0x2c1ab1; S=0x2c1ac5; 
-(void).cxx_destruct;	// 0x2c1c05
-(void)scaleButtonHidden;	// 0x2c0af5
-(void)scaleImage;	// 0x2c0a9d
-(void)loadPhotos;	// 0x2c0891
-(void)tapGestureAction:(id)action;	// 0x2c05d1
-(void)panGestureAction:(id)action;	// 0x2bff89
-(void)cropAction;	// 0x2bfcf1
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;	// 0x2bfc51
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;	// 0x2bfae5
-(id)photoForDisplay:(id)display;	// 0x2bfad1
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;	// 0x2bf9c1
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;	// 0x2bf985
-(void)viewWillDisappear:(BOOL)view;	// 0x2bf911
-(void)viewWillAppear:(BOOL)view;	// 0x2bf89d
-(void)viewDidDisappear:(BOOL)view;	// 0x2bf871
-(BOOL)prefersStatusBarHidden;	// 0x2bf86d
-(void)viewDidLoad;	// 0x2bf711
@end

