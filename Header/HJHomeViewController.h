/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "HJHomeContentDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class UIWindow, HJLoadingView2, UITapGestureRecognizer, NSMutableDictionary, HJCategorySelectorView, HJHomeContentViewController, HJSegmentedView, NSString, HJErrorView, HJImageUploadModel, NSArray, UIButton, UIView, UIScrollView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJHomeViewController : XXUnknownSuperclass <UIGestureRecognizerDelegate, UIScrollViewDelegate, HJHomeContentDelegate> {
	UIButton* _leftButton;
	HJSegmentedView* navSegmentedV;
	HJImageUploadModel* _imageUploadModel;
	NSMutableArray* _views;
	NSMutableDictionary* _itemsMap;
	NSArray* _categories;
	UIView* _currentView;
	UIScrollView* _scrollView;
	UIView* _errorView;
	HJErrorView* _theErrorView;
	UIView* _loadingView;
	HJLoadingView2* _theLoadingView;
	HJCategorySelectorView* _selectorView;
	NSArray* _cats;
	HJHomeContentViewController* _homeContentVcFollow;
	HJHomeContentViewController* _homeContentVcBest;
	UITapGestureRecognizer* _tap;
	UIWindow* _alertWindow;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIWindow* alertWindow;	// G=0x94fb9; S=0x94fc9; 
@property(assign, nonatomic) __weak UITapGestureRecognizer* tap;	// G=0x94f85; S=0x94fa5; 
@property(assign, nonatomic) __weak HJHomeContentViewController* homeContentVcBest;	// G=0x94f51; S=0x94f71; 
@property(assign, nonatomic) __weak HJHomeContentViewController* homeContentVcFollow;	// G=0x94f1d; S=0x94f3d; 
@property(retain, nonatomic) NSArray* cats;	// G=0x94ee5; S=0x94ef5; 
@property(retain, nonatomic) HJCategorySelectorView* selectorView;	// G=0x94ead; S=0x94ebd; 
@property(retain, nonatomic) HJLoadingView2* theLoadingView;	// G=0x94e75; S=0x94e85; 
@property(retain, nonatomic) UIView* loadingView;	// G=0x93c71; S=0x94e4d; 
@property(retain, nonatomic) HJErrorView* theErrorView;	// G=0x94e15; S=0x94e25; 
@property(retain, nonatomic) UIView* errorView;	// G=0x93a65; S=0x94ded; 
@property(retain, nonatomic) UIScrollView* scrollView;	// G=0x94db5; S=0x94dc5; 
@property(retain, nonatomic) UIView* currentView;	// G=0x94d7d; S=0x94d8d; 
@property(retain, nonatomic) NSArray* categories;	// G=0x94d45; S=0x94d55; 
@property(retain, nonatomic) NSMutableDictionary* itemsMap;	// G=0x94d0d; S=0x94d1d; 
@property(retain, nonatomic) NSMutableArray* views;	// G=0x94cd5; S=0x94ce5; 
@property(retain, nonatomic) HJImageUploadModel* imageUploadModel;	// G=0x94cc5; S=0x913a1; 
-(void).cxx_destruct;	// 0x94ff1
-(void)refresh;	// 0x94af9
-(void)viewDidLayoutSubviews;	// 0x94a09
-(void)onTapErrorView:(id)view;	// 0x949f9
-(void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x947c5
-(void)scrollViewWillBeginDragging:(id)scrollView;	// 0x94671
-(void)notifyContentViews:(unsigned)views;	// 0x94435
-(void)segmentedViewValueChanged:(id)changed;	// 0x94085
-(void)searchHandle:(id)handle;	// 0x93fc9
-(void)didReceiveMemoryWarning;	// 0x93f9d
-(void)jumpToLatest:(id)latest;	// 0x93ee5
-(void)loadContents;	// 0x93a61
-(void)createNavContents;	// 0x92cc9
-(void)onTopClicked:(id)clicked;	// 0x92a89
-(void)viewWillDisappear:(BOOL)view;	// 0x92781
-(void)viewWillAppear:(BOOL)view;	// 0x9245d
-(void)jumpToFeedSegment;	// 0x9241d
-(void)dealloc;	// 0x9237d
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x922b5
-(void)viewDidLoad;	// 0x91e9d
-(void)viewDidAppear:(BOOL)view;	// 0x91d9d
-(void)closeAlert:(id)alert;	// 0x91d89
-(void)showAlertView;	// 0x915d9
-(void)removeWindow:(BOOL)window;	// 0x91409
-(void)showPrevue;	// 0x912e9
-(void)pushToRankVc;	// 0x91219
-(void)setupRankList;	// 0x91009
-(void)setUpTitleView;	// 0x90ea9
@end

