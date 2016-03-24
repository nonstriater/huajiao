/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TTTAttributedLabelDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class NSString, TTTAttributedLabel, NSTimer, UILabel, UIImageView, UIButton, UIView;
@protocol HJLivingChatMsgCellDelegate;

__attribute__((visibility("hidden")))
@interface HJLivingChatMsgCell : XXUnknownSuperclass <TTTAttributedLabelDelegate> {
	NSTimer* _animatingTimer;
	id<HJLivingChatMsgCellDelegate> _delegate;
	float _maxWidth;
	UILabel* _contentLabel;
	UIImageView* _levelImageView;
	TTTAttributedLabel* _giftLabel;
	UIView* _followBackgroundView;
	UIImageView* _leftImageView;
	UIImageView* _rightImageView;
	id _cellData;
	int _vtype;
	UIButton* _button;
	float _buttonWidth;
	unsigned long long _fireTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) float buttonWidth;	// G=0x2d4615; S=0x2d4625; 
@property(retain, nonatomic) UIButton* button;	// G=0x2d45dd; S=0x2d45ed; 
@property(assign, nonatomic) unsigned long long fireTime;	// G=0x2d45b1; S=0x2d45c9; 
@property(assign, nonatomic) int vtype;	// G=0x2d4591; S=0x2d45a1; 
@property(retain, nonatomic) id cellData;	// G=0x2d4581; S=0x2d3c89; 
@property(retain, nonatomic) UIImageView* rightImageView;	// G=0x2d4549; S=0x2d4559; 
@property(retain, nonatomic) UIImageView* leftImageView;	// G=0x2d4511; S=0x2d4521; 
@property(retain, nonatomic) UIView* followBackgroundView;	// G=0x2d44d9; S=0x2d44e9; 
@property(retain, nonatomic) TTTAttributedLabel* giftLabel;	// G=0x2d44a1; S=0x2d44b1; 
@property(retain, nonatomic) UIImageView* levelImageView;	// G=0x2d4469; S=0x2d4479; 
@property(retain, nonatomic) UILabel* contentLabel;	// G=0x2d4431; S=0x2d4441; 
@property(assign, nonatomic) float maxWidth;	// G=0x2d4411; S=0x2d4421; 
@property(assign, nonatomic) __weak id<HJLivingChatMsgCellDelegate> delegate;	// G=0x2d43dd; S=0x2d43fd; 
+(CGSize)getCellSize:(id)size maxWidth:(float)width;	// 0x2d27d1
+(void)initialize;	// 0x2d12ad
+(unsigned)getAtNameLength:(id)nameLength;	// 0x2ce579
-(void).cxx_destruct;	// 0x2d4635
-(void)attributedLabel:(id)label didSelectLinkWithURL:(id)url;	// 0x2d41c1
-(void)onClick;	// 0x2d3ce1
-(void)hideAfterDelay:(float)delay;	// 0x2d26a5
-(id)roundCorners;	// 0x2d22f5
-(void)layoutSubviews;	// 0x2d1989
-(id)initWithFrame:(CGRect)frame;	// 0x2d14ed
-(void)loadData;	// 0x2ce641
-(int)groupIndexWithUserLevel:(id)userLevel;	// 0x2ce5ed
-(CGRect)getNicknameRectWithName:(id)name;	// 0x2ce4a5
-(void)fadeOut;	// 0x2ce295
@end

