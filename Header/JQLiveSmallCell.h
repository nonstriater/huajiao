/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJLiveBaseCell.h"

@class UILabel, UIImageView, UIButton, UIView, NSLayoutConstraint, Feeds, HJSeedItemResponseExt;

__attribute__((visibility("hidden")))
@interface JQLiveSmallCell : HJLiveBaseCell {
	BOOL _endLive;
	BOOL _firstIn;
	HJSeedItemResponseExt* _data;
	UIImageView* _liveImageView;
	UIImageView* _markView;
	UIView* _liveView;
	NSLayoutConstraint* _separatorHeight;
	UIImageView* _liveStateView;
	UILabel* _liveStateLabel;
	UIView* _separatorLine;
	UIButton* _liveBtn;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _personCountLabel;
	UILabel* _heartCountLabel;
	UIImageView* _audienceView;
	UIView* _sepView;
	UIImageView* _heart;
	UILabel* _noVLabel;
	UIImageView* _vView;
	NSLayoutConstraint* _noVLabelVert;
	NSLayoutConstraint* _titleLabelHight;
	Feeds* _feed;
}
@property(retain, nonatomic) Feeds* feed;	// G=0x150479; S=0x150489; 
@property(assign, nonatomic) __weak NSLayoutConstraint* titleLabelHight;	// G=0x150445; S=0x150465; 
@property(assign, nonatomic) __weak NSLayoutConstraint* noVLabelVert;	// G=0x150411; S=0x150431; 
@property(assign, nonatomic) __weak UIImageView* vView;	// G=0x1503dd; S=0x1503fd; 
@property(assign, nonatomic) __weak UILabel* noVLabel;	// G=0x1503a9; S=0x1503c9; 
@property(assign, nonatomic, getter=isFirstIn) BOOL firstIn;	// G=0x150389; S=0x150399; 
@property(assign, nonatomic) __weak UIImageView* heart;	// G=0x150355; S=0x150375; 
@property(assign, nonatomic) __weak UIView* sepView;	// G=0x150321; S=0x150341; 
@property(assign, nonatomic) __weak UIImageView* audienceView;	// G=0x1502ed; S=0x15030d; 
@property(assign, nonatomic, getter=isEndLive) BOOL endLive;	// G=0x1502cd; S=0x1502dd; 
@property(assign, nonatomic) __weak UILabel* heartCountLabel;	// G=0x150299; S=0x1502b9; 
@property(assign, nonatomic) __weak UILabel* personCountLabel;	// G=0x150265; S=0x150285; 
@property(assign, nonatomic) __weak UILabel* subtitleLabel;	// G=0x150231; S=0x150251; 
@property(assign, nonatomic) __weak UILabel* titleLabel;	// G=0x1501fd; S=0x15021d; 
@property(assign, nonatomic) __weak UIButton* liveBtn;	// G=0x1501c9; S=0x1501e9; 
@property(assign, nonatomic) __weak UIView* separatorLine;	// G=0x150195; S=0x1501b5; 
@property(assign, nonatomic) __weak UILabel* liveStateLabel;	// G=0x150161; S=0x150181; 
@property(assign, nonatomic) __weak UIImageView* liveStateView;	// G=0x15012d; S=0x15014d; 
@property(assign, nonatomic) __weak NSLayoutConstraint* separatorHeight;	// G=0x1500f9; S=0x150119; 
@property(assign, nonatomic) __weak UIView* liveView;	// G=0x1500c5; S=0x1500e5; 
@property(assign, nonatomic) __weak UIImageView* markView;	// G=0x150091; S=0x1500b1; 
@property(assign, nonatomic) __weak UIImageView* liveImageView;	// G=0x15005d; S=0x15007d; 
+(id)identifier;	// 0x14db41
+(void)registerCellWithTableView:(id)tableView;	// 0x14dac9
-(id)data;	// 0x15004d
-(void).cxx_destruct;	// 0x1504b1
-(void)layoutSubviews;	// 0x14fce5
-(void)setData:(id)data;	// 0x14ec25
-(void)setFeedData:(id)data;	// 0x14db91
-(void)awakeFromNib;	// 0x14db59
@end
