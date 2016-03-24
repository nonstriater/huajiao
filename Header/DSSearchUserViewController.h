/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "HJBaseCellDelegate.h"
#import "HJDiscoverFootViewDelegate.h"
#import "PopularHeadCellDelegate.h"
#import "DSViewController.h"

@class HJDiscoverBaseCell, HJSearchRecommendUsers, UILabel, HJDiscEmptyView, UIButton, UITapGestureRecognizer, UIView, NSMutableArray, NSIndexPath, UITableView, UITextField, HJLoadingView2, HJErrorView, NSString, HJSuggestData;

__attribute__((visibility("hidden")))
@interface DSSearchUserViewController : DSViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, HJBaseCellDelegate, HJDiscoverFootViewDelegate, PopularHeadCellDelegate> {
	NSIndexPath* _preIndex;
	HJSearchRecommendUsers* recommendUsers;
	NSMutableArray* searchRecommendVideo;
	UIView* textContainView;
	UIView* netErrorView;
	UITapGestureRecognizer* tapLookMore;
	HJSuggestData* _suggestData;
	BOOL _refreshing;
	BOOL _firstIn;
	BOOL _more;
	UITableView* _tableView;
	UITableView* _preSearchTableView;
	UITableView* _suggestTableView;
	NSMutableArray* _groupArrM;
	UITextField* _searchKeyWordTextField;
	UILabel* _placeHolderLabel;
	UIButton* _cancelSearchButton;
	UIView* _containView;
	UILabel* _noResultLabel;
	UIButton* _searchIconBtn;
	HJDiscoverBaseCell* _selectedCell;
	UIView* _emtpyView;
	UIView* _errorView;
	UIView* _loadingView;
	HJLoadingView2* _theLoadingView;
	HJDiscEmptyView* _theEmptyView;
	HJErrorView* _theErrorView;
	NSIndexPath* _preIndexPath;
	NSString* _offset;
	UIButton* _clearBtn;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* clearBtn;	// G=0x356815; S=0x356825; 
@property(assign, nonatomic) BOOL more;	// G=0x3567f5; S=0x356805; 
@property(assign, nonatomic) NSString* offset;	// G=0x3567d5; S=0x3567e5; 
@property(retain, nonatomic) NSIndexPath* preIndexPath;	// G=0x35679d; S=0x3567ad; 
@property(assign, nonatomic) BOOL firstIn;	// G=0x35677d; S=0x35678d; 
@property(assign, nonatomic) BOOL refreshing;	// G=0x35675d; S=0x35676d; 
@property(retain, nonatomic) HJErrorView* theErrorView;	// G=0x356725; S=0x356735; 
@property(retain, nonatomic) HJDiscEmptyView* theEmptyView;	// G=0x3566ed; S=0x3566fd; 
@property(retain, nonatomic) HJLoadingView2* theLoadingView;	// G=0x3566b5; S=0x3566c5; 
@property(retain, nonatomic) UIView* loadingView;	// G=0x355b45; S=0x35668d; 
@property(retain, nonatomic) UIView* errorView;	// G=0x355da1; S=0x356665; 
@property(retain, nonatomic) UIView* emtpyView;	// G=0x356045; S=0x35663d; 
@property(assign, nonatomic) __weak HJDiscoverBaseCell* selectedCell;	// G=0x356609; S=0x356629; 
@property(retain, nonatomic) UIButton* searchIconBtn;	// G=0x3565d1; S=0x3565e1; 
@property(retain, nonatomic) UILabel* noResultLabel;	// G=0x356599; S=0x3565a9; 
@property(retain, nonatomic) UIView* containView;	// G=0x356561; S=0x356571; 
@property(retain, nonatomic) UIButton* cancelSearchButton;	// G=0x356529; S=0x356539; 
@property(retain, nonatomic) UILabel* placeHolderLabel;	// G=0x3564f1; S=0x356501; 
@property(retain, nonatomic) UITextField* searchKeyWordTextField;	// G=0x3564b9; S=0x3564c9; 
@property(retain, nonatomic) NSMutableArray* groupArrM;	// G=0x3555fd; S=0x356491; 
@property(retain, nonatomic) UITableView* suggestTableView;	// G=0x356459; S=0x356469; 
@property(retain, nonatomic) UITableView* preSearchTableView;	// G=0x356421; S=0x356431; 
@property(retain, nonatomic) UITableView* tableView;	// G=0x3563e9; S=0x3563f9; 
-(void).cxx_destruct;	// 0x35684d
-(void)checkError:(id)error;	// 0x356341
-(void)checkEmpty;	// 0x3562e1
-(void)onTapEmptyView;	// 0x355b41
-(void)onTapErrorView;	// 0x355b3d
-(void)showTable;	// 0x355a59
-(void)showError;	// 0x355975
-(void)showEmpty;	// 0x355891
-(void)showLoading;	// 0x3557ad
-(void)setupSubviews;	// 0x35564d
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3548bd
-(id)mutalbeAttributedStringWithString:(id)string AndStr:(id)str;	// 0x354721
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x353a9d
-(void)pullUpRefreshOffset:(id)offset;	// 0x3537b1
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x353739
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35360d
-(int)numberOfSectionsInTableView:(id)tableView;	// 0x353595
-(void)didReceiveMemoryWarning;	// 0x353569
-(void)viewWillDisappear:(BOOL)view;	// 0x3534e1
-(void)viewDidAppear:(BOOL)view;	// 0x353481
-(void)viewWillAppear:(BOOL)view;	// 0x353305
-(void)loadSuggestData;	// 0x353085
-(void)onTextDidChange;	// 0x352e6d
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x352de5
-(void)textFieldDidBeginEditing:(id)textField;	// 0x352de1
-(BOOL)textFieldShouldReturn:(id)textField;	// 0x3526b5
-(void)footerViewDidClick:(id)footerView;	// 0x3525e1
-(float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x352521
-(id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x352341
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x352209
-(id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x351ad1
-(void)onClickLookMore:(id)more;	// 0x351acd
-(void)scrollViewDidScroll:(id)scrollView;	// 0x351a95
-(void)showPlaceHolder:(id)holder;	// 0x351a71
-(void)cancelHandle:(id)handle;	// 0x3519f5
-(id)createTableView:(CGRect)view;	// 0x351889
-(void)setupTableView:(int)view;	// 0x3514c5
-(void)dealloc;	// 0x3513f9
-(void)onUserFollowStatusChangedNotification:(id)notification;	// 0x351035
-(void)onClickIconViewOfCell:(id)cell;	// 0x350f3d
-(void)didClickCellHeadWithData:(id)data;	// 0x350e95
-(void)loadMore;	// 0x350afd
-(void)pullUpRefreshPath:(id)path currentPath:(id)path2 hasMore:(BOOL)more;	// 0x350a65
-(void)onClickFollowStatusChangedNotification:(id)notification;	// 0x3507d9
-(void)onUserInfoChangedNotification:(id)notification;	// 0x350561
-(void)_loadPopularSearchData5;	// 0x3502a1
-(void)_loadPopularSearchData4;	// 0x350045
-(void)loadPopularSearchData;	// 0x350035
-(void)tapMaskView:(id)view;	// 0x34fe81
-(id)createErrorView;	// 0x34fd41
-(void)clearInput;	// 0x34fc9d
-(void)tapErrorView:(id)view;	// 0x34fc65
-(void)viewDidLoad;	// 0x34eaa9
-(id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x34ea61
@end
