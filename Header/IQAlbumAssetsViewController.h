/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UICollectionViewDelegateFlowLayout.h"
#import "living-Structs.h"

@class NSString, UIImage, UIBarButtonItem, ALAssetsGroup, NSMutableIndexSet, IQAssetsPickerController;

__attribute__((visibility("hidden")))
@interface IQAlbumAssetsViewController : XXUnknownSuperclass <UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
	UIBarButtonItem* doneBarButton;
	BOOL _isPlayerPlaying;
	UIImage* _selectedImageToShare;
	ALAssetsGroup* _assetsGroup;
	IQAssetsPickerController* _assetController;
	int _pickerType;
	NSMutableIndexSet* _selectedAssets;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableIndexSet* selectedAssets;	// G=0xd5089; S=0xd5099; 
@property(assign, nonatomic) int pickerType;	// G=0xd5069; S=0xd5079; 
@property(assign, nonatomic) IQAssetsPickerController* assetController;	// G=0xd5049; S=0xd5059; 
@property(assign, nonatomic) ALAssetsGroup* assetsGroup;	// G=0xd5029; S=0xd5039; 
-(void).cxx_destruct;	// 0xd50c1
-(void)movieFinishedCallback:(id)callback;	// 0xd4ebd
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;	// 0xd4899
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;	// 0xd43e9
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;	// 0xd43ad
-(void)longPressGestureRecognizer:(id)recognizer;	// 0xd419d
-(void)viewDidLoad;	// 0xd3efd
@end
