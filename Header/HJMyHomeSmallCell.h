/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIAlertView, HJUserProfileInfo, NSArray, NSLayoutConstraint, UILabel, UIImageView, UITapGestureRecognizer, NSMutableArray, UILongPressGestureRecognizer, UIViewController;

__attribute__((visibility("hidden")))
@interface HJMyHomeSmallCell : XXUnknownSuperclass <UIGestureRecognizerDelegate, UIAlertViewDelegate> {
	UIImageView* imageV1;
	UIImageView* imageV2;
	UIImageView* imageV3;
	UIImageView* tag1;
	UIImageView* tag2;
	UIImageView* tag3;
	UITapGestureRecognizer* tap1;
	UITapGestureRecognizer* tap2;
	UITapGestureRecognizer* tap3;
	UILongPressGestureRecognizer* longPress1;
	UILongPressGestureRecognizer* longPress2;
	UILongPressGestureRecognizer* longPress3;
	UIAlertView* alert1;
	UIAlertView* alert2;
	UIAlertView* alert3;
	NSMutableArray* _localDatas;
	NSLayoutConstraint* img1T;
	NSLayoutConstraint* img2T;
	NSLayoutConstraint* img2L;
	NSLayoutConstraint* img3L;
	NSLayoutConstraint* bottom1;
	NSArray* imageViews;
	NSArray* tagImages;
	NSArray* tagImageNames;
	NSMutableArray* oldURLs;
	NSArray* watchesLabels;
	BOOL isMySelf;
	BOOL _isDiscoveryHot;
	NSMutableArray* _datas;
	HJUserProfileInfo* _userProfileInfo;
	UIViewController* _parentVC;
	UILabel* _watchesLabel;
	UILabel* _watchesLabel2;
	UILabel* _watchesLabel3;
	NSString* _fromMyhome;
	NSString* _detailTitle;
	id _liveOverBlock;
	NSArray* _allFeedsData;
	NSString* _roomId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* roomId;	// G=0x234945; S=0x234959; 
@property(assign, nonatomic) __weak NSArray* allFeedsData;	// G=0x234911; S=0x234931; 
@property(copy, nonatomic) id liveOverBlock;	// G=0x2348ed; S=0x234901; 
@property(assign, nonatomic) BOOL isDiscoveryHot;	// G=0x2348cd; S=0x2348dd; 
@property(copy, nonatomic) NSString* detailTitle;	// G=0x2348a9; S=0x2348bd; 
@property(copy, nonatomic) NSString* fromMyhome;	// G=0x234885; S=0x234899; 
@property(assign, nonatomic) __weak UILabel* watchesLabel3;	// G=0x234851; S=0x234871; 
@property(assign, nonatomic) __weak UILabel* watchesLabel2;	// G=0x23481d; S=0x23483d; 
@property(assign, nonatomic) __weak UILabel* watchesLabel;	// G=0x2347e9; S=0x234809; 
@property(assign, nonatomic) __weak UIViewController* parentVC;	// G=0x2347b5; S=0x2347d5; 
@property(retain, nonatomic) HJUserProfileInfo* userProfileInfo;	// G=0x2347a5; S=0x233379; 
@property(retain, nonatomic) NSMutableArray* datas;	// G=0x234795; S=0x23378d; 
+(id)identifier;	// 0x231879
+(void)registerCellWithTableView:(id)tableView;	// 0x231805
-(void).cxx_destruct;	// 0x234969
-(id)createTapGesture;	// 0x234721
-(id)createAlertView;	// 0x2346b9
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x234689
-(void)liveHasOver:(id)over;	// 0x2335cd
-(id)smallImageURL:(id)url;	// 0x2334c5
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x232f7d
-(void)buttonAction:(id)action;	// 0x231d31
-(id)createLongPressGesture;	// 0x231cc9
-(void)createGesture;	// 0x231891
-(void)awakeFromNib;	// 0x231741
@end

