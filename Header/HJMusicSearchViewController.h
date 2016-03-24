/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "HJMusicManagerDelegate.h"
#import "HSDiscAniController.h"
#import "living-Structs.h"

@class NSIndexPath, UITextField, NSMutableDictionary, HJSeedingViewController_v2, NSString, NSArray, UILabel, UIButton, UIView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJMusicSearchViewController : HSDiscAniController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, HJMusicManagerDelegate> {
	BOOL _refreshing;
	BOOL _hasMore;
	HJSeedingViewController_v2* _wSeedingVC;
	UIView* _searchView;
	UITextField* _searchKeyWordTextField;
	UIButton* _clearBtn;
	UILabel* _placeHolderLabel;
	NSMutableArray* _groupArr;
	NSMutableDictionary* _cellDic;
	NSArray* _cachedMusicArr;
	UIView* _emtpyView;
	NSIndexPath* _preIndex;
	int _preRow;
	NSString* _keyWords;
	int _pageNum;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL hasMore;	// G=0x1ec09; S=0x1ec19; 
@property(assign, nonatomic) int pageNum;	// G=0x1ebe9; S=0x1ebf9; 
@property(retain, nonatomic) NSString* keyWords;	// G=0x1ebb1; S=0x1ebc1; 
@property(assign, nonatomic) int preRow;	// G=0x1eb91; S=0x1eba1; 
@property(retain, nonatomic) NSIndexPath* preIndex;	// G=0x1eb59; S=0x1eb69; 
@property(retain, nonatomic) UIView* emtpyView;	// G=0x1e4fd; S=0x1eb31; 
@property(retain, nonatomic) NSArray* cachedMusicArr;	// G=0x1e495; S=0x1eb09; 
@property(retain, nonatomic) NSMutableDictionary* cellDic;	// G=0x1ead1; S=0x1eae1; 
@property(retain, nonatomic) NSMutableArray* groupArr;	// G=0x1ea99; S=0x1eaa9; 
@property(assign, nonatomic) BOOL refreshing;	// G=0x1ea79; S=0x1ea89; 
@property(retain, nonatomic) UILabel* placeHolderLabel;	// G=0x1ea41; S=0x1ea51; 
@property(retain, nonatomic) UIButton* clearBtn;	// G=0x1ea09; S=0x1ea19; 
@property(retain, nonatomic) UITextField* searchKeyWordTextField;	// G=0x1e9d1; S=0x1e9e1; 
@property(retain, nonatomic) UIView* searchView;	// G=0x1e999; S=0x1e9a9; 
@property(assign, nonatomic) __weak HJSeedingViewController_v2* wSeedingVC;	// G=0x1e965; S=0x1e985; 
-(void).cxx_destruct;	// 0x1ec29
-(void)mid:(id)mid downloadProgress:(float)progress;	// 0x1e3bd
-(void)mid:(id)mid didChangeDownloadState:(int)state;	// 0x1e2e5
-(void)mid:(id)mid didChangePlayState:(int)state;	// 0x1e2e1
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x1e115
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;	// 0x1dfa9
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x1dd59
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x1dd51
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x1dd15
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x1dd11
-(void)pullUpRefreshPath:(id)path currentPath:(id)path2 hasMore:(BOOL)more;	// 0x1dc55
-(void)onTextDidChange;	// 0x1da7d
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x1d9f5
-(void)textFieldDidBeginEditing:(id)textField;	// 0x1d9f1
-(BOOL)textFieldShouldReturn:(id)textField;	// 0x1d945
-(void)stopMusic:(id)music;	// 0x1d90d
-(void)onMusicPlay:(id)play;	// 0x1d7b5
-(void)tapMaskView:(id)view;	// 0x1d5f1
-(void)clearInput;	// 0x1d549
-(void)searchMusic:(id)music isMore:(BOOL)more;	// 0x1cf4d
-(void)loadCachedMusicArr;	// 0x1cc35
-(void)onBack;	// 0x1cbf1
-(void)setupBackBarButton;	// 0x1cbc5
-(void)dealloc;	// 0x1caf9
-(void)viewWillDisappear:(BOOL)view;	// 0x1ca51
-(void)onTapErrorView;	// 0x1ca11
-(void)viewDidAppear:(BOOL)view;	// 0x1c979
-(void)viewWillAppear:(BOOL)view;	// 0x1c891
-(void)viewDidLoad;	// 0x1ba21
@end
