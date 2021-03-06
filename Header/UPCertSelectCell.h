/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UPListViewDelegate.h"
#import "UPBaseCell.h"

@class NSString, UITextField, UIImageView, UIButton, NSMutableArray;

@interface UPCertSelectCell : UPBaseCell <UPListViewDelegate> {
	NSMutableArray* mPickerData;
	NSMutableArray* _valueArray;
	UIButton* _selectBtn;
	UIImageView* mPullView;
	UITextField* _maskTextField;
	NSString* _defaultValue;
	int _currentIndex;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;	// 0xc62abd
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xc628bd
-(BOOL)isLegalLength;	// 0xc62859
-(id)param;	// 0xc627c1
-(void)shouldReadOnly:(BOOL)only;	// 0xc627a5
-(void)setText:(id)text;	// 0xc62771
-(void)listViewDidSelectedAtIndex:(int)listView;	// 0xc62751
-(void)setDefaultAtIndex:(int)index;	// 0xc626a5
-(void)startChoose:(id)choose;	// 0xc6245d
-(void)addMaskView;	// 0xc61e75
-(void)preparePickerDataSource;	// 0xc61ca1
-(void)dealloc;	// 0xc61c29
-(id)initWithFrame:(CGRect)frame content:(id)content delegate:(id)delegate;	// 0xc61b71
@end

