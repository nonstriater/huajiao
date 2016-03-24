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
#import "FaceuDownloadDelegate.h"

@class NSString, NSArray, UICollectionView, UIView, NSIndexPath;
@protocol FaceuEffectSelectViewDelegate;

__attribute__((visibility("hidden")))
@interface FaceuEffectSelectView : XXUnknownSuperclass <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, FaceuDownloadDelegate> {
	id<FaceuEffectSelectViewDelegate> _delegate;
	UIView* _containerView;
	UICollectionView* _classCollectionView;
	UICollectionView* _effectCollectionView;
	int _selectedClassIndex;
	int _selectedEffectIndex;
	NSIndexPath* _effectIndex;
	float _containerHeight;
	NSArray* _souceArray;
	NSString* _selectEffectID;
	int _effectSelectedClassIndex;
	int _effectSelectedEffectIndex;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int effectSelectedEffectIndex;	// G=0x3b4705; S=0x3b4715; 
@property(assign, nonatomic) int effectSelectedClassIndex;	// G=0x3b46e5; S=0x3b46f5; 
@property(retain, nonatomic) NSString* selectEffectID;	// G=0x3b46ad; S=0x3b46bd; 
@property(retain, nonatomic) NSArray* souceArray;	// G=0x3b4675; S=0x3b4685; 
@property(assign, nonatomic) float containerHeight;	// G=0x3b4655; S=0x3b4665; 
@property(retain, nonatomic) NSIndexPath* effectIndex;	// G=0x3b461d; S=0x3b462d; 
@property(assign, nonatomic) int selectedEffectIndex;	// G=0x3b45fd; S=0x3b460d; 
@property(assign, nonatomic) int selectedClassIndex;	// G=0x3b45dd; S=0x3b45ed; 
@property(retain, nonatomic) UICollectionView* effectCollectionView;	// G=0x3b45a5; S=0x3b45b5; 
@property(retain, nonatomic) UICollectionView* classCollectionView;	// G=0x3b456d; S=0x3b457d; 
@property(retain, nonatomic) UIView* containerView;	// G=0x3b4535; S=0x3b4545; 
@property(assign, nonatomic) __weak id<FaceuEffectSelectViewDelegate> delegate;	// G=0x3b4501; S=0x3b4521; 
-(void).cxx_destruct;	// 0x3b4725
-(void)hidden;	// 0x3b4311
-(void)showInView:(id)view;	// 0x3b4101
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;	// 0x3b4025
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;	// 0x3b3a01
-(void)faceuDownloadFail:(id)fail error:(id)error;	// 0x3b37b1
-(void)faceuDownloadSuccess:(id)success;	// 0x3b33d5
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3b33a5
-(void)selectEffect:(id)effect;	// 0x3b32bd
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;	// 0x3b2dc9
-(void)setUp;	// 0x3b2771
-(id)initWithFrame:(CGRect)frame;	// 0x3b25e1
@end

