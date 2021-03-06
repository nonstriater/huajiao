/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UITextField, UIView, NSLayoutConstraint;
@protocol HJRedEnvelopeTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface HJRedEnvelopeTableViewCell : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UILabel* _amountLabel;
	UITextField* _amountTextField;
	UIView* _theBackgroundView;
	id<HJRedEnvelopeTableViewCellDelegate> _delegate;
	UIImageView* _fightLuckImageView;
	NSLayoutConstraint* _fightLuckRightContraints;
}
@property(retain, nonatomic) NSLayoutConstraint* fightLuckRightContraints;	// G=0x1ab1ed; S=0x1ab1fd; 
@property(assign, nonatomic) __weak UIImageView* fightLuckImageView;	// G=0x1ab1b9; S=0x1ab1d9; 
@property(assign, nonatomic) __weak id<HJRedEnvelopeTableViewCellDelegate> delegate;	// G=0x1ab185; S=0x1ab1a5; 
@property(assign, nonatomic) __weak UIView* theBackgroundView;	// G=0x1ab151; S=0x1ab171; 
@property(assign, nonatomic) __weak UITextField* amountTextField;	// G=0x1ab11d; S=0x1ab13d; 
@property(assign, nonatomic) __weak UILabel* amountLabel;	// G=0x1ab0e9; S=0x1ab109; 
@property(assign, nonatomic) __weak UILabel* titleLabel;	// G=0x1ab0b5; S=0x1ab0d5; 
-(void).cxx_destruct;	// 0x1ab225
-(void)hideFightLuckImageView;	// 0x1aafe1
-(void)showFightLuckImageView;	// 0x1aaf0d
-(void)prepareForReuse;	// 0x1aaeb5
-(void)setTextFieldTag:(int)tag;	// 0x1aae79
-(void)textFieldValueChanged:(id)changed;	// 0x1aadd5
-(void)textFieldDidEndEditing:(id)textField;	// 0x1aad31
-(void)awakeFromNib;	// 0x1aabf9
@end

