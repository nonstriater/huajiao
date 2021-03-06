/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "living-Structs.h"
#import "DSViewController.h"

@class NSString, NSMutableDictionary, NSArray, HJSegmentedView, UIView, UIScrollView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJRankListViewController : DSViewController <UIScrollViewDelegate> {
	NSMutableArray* _views;
	HJSegmentedView* _segmentedView;
	NSMutableDictionary* _itemsMap;
	NSArray* _categories;
	UIView* _currentView;
	UIScrollView* _scrollView;
	UIView* _errorView;
	UIView* _maskView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView* maskView;	// G=0x125fdd; S=0x125fed; 
@property(retain, nonatomic) UIView* errorView;	// G=0x125fa5; S=0x125fb5; 
@property(retain, nonatomic) UIScrollView* scrollView;	// G=0x125f6d; S=0x125f7d; 
@property(retain, nonatomic) UIView* currentView;	// G=0x125f35; S=0x125f45; 
@property(retain, nonatomic) NSArray* categories;	// G=0x125efd; S=0x125f0d; 
@property(retain, nonatomic) NSMutableDictionary* itemsMap;	// G=0x125ec5; S=0x125ed5; 
@property(retain, nonatomic) HJSegmentedView* segmentedView;	// G=0x125e8d; S=0x125e9d; 
@property(retain, nonatomic) NSMutableArray* views;	// G=0x125e55; S=0x125e65; 
-(void).cxx_destruct;	// 0x126015
-(void)refresh;	// 0x125c65
-(void)viewDidLayoutSubviews;	// 0x125c39
-(void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x125ac1
-(void)notifyContentViews:(unsigned)views;	// 0x125861
-(void)segmentedViewValueChanged:(id)changed;	// 0x125641
-(void)didReceiveMemoryWarning;	// 0x125615
-(void)loadContents;	// 0x124b65
-(void)dealloc;	// 0x124b01
-(void)viewDidLoad;	// 0x12457d
@end

