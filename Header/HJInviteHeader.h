/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class HJShareModel, UILabel, UIImageView, UIButton, NSLayoutConstraint;
@protocol HJInviteHeaderDelegate;

__attribute__((visibility("hidden")))
@interface HJInviteHeader : XXUnknownSuperclass {
	UILabel* numLabel;
	NSLayoutConstraint* coinsW;
	UIImageView* cardImageView;
	NSLayoutConstraint* CoinsT;
	NSLayoutConstraint* withdrawT;
	NSLayoutConstraint* shareBottom;
	NSLayoutConstraint* numT;
	NSLayoutConstraint* inviteNumB;
	id<HJInviteHeaderDelegate> _delegate;
	UIButton* _WithdrawButton;
	UIButton* _shareButton;
	UIButton* _btnCopy;
	UILabel* _haveInviteLabel;
	UILabel* _coinsLabel;
	HJShareModel* _shareModel;
	UILabel* _pageDescriptionLabel;
}
@property(retain, nonatomic) UILabel* pageDescriptionLabel;	// G=0x6885d; S=0x6886d; 
@property(retain, nonatomic) HJShareModel* shareModel;	// G=0x68825; S=0x68835; 
@property(retain, nonatomic) UILabel* coinsLabel;	// G=0x687ed; S=0x687fd; 
@property(retain, nonatomic) UILabel* haveInviteLabel;	// G=0x687b5; S=0x687c5; 
@property(retain, nonatomic) UIButton* btnCopy;	// G=0x6877d; S=0x6878d; 
@property(retain, nonatomic) UIButton* shareButton;	// G=0x68745; S=0x68755; 
@property(retain, nonatomic) UIButton* WithdrawButton;	// G=0x6870d; S=0x6871d; 
@property(assign, nonatomic) __weak id<HJInviteHeaderDelegate> delegate;	// G=0x686d9; S=0x686f9; 
+(id)createInviteHeader;	// 0x66d71
-(void).cxx_destruct;	// 0x68895
-(void)dealloc;	// 0x6866d
-(void)handleAction:(id)action;	// 0x68499
-(void)updateConstraints;	// 0x68091
-(void)setCoinsLabelText:(id)text;	// 0x67f59
-(void)loadData;	// 0x6740d
-(void)open_redEnvelope_success:(id)success;	// 0x67225
-(void)awakeFromNib;	// 0x66db9
-(id)init;	// 0x66d8d
@end

