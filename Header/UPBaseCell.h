/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "UITextFieldDelegate.h"
#import "UPKeyboardDelegate.h"

@class NSString, UPLableCell, UPLineView, UPTextField, UIView, UPKeyboard;
@protocol UPTextFieldDelegate;

@interface UPBaseCell : XXUnknownSuperclass <UPKeyboardDelegate, UITextFieldDelegate> {
	UPTextField* mTextField;
	UPKeyboard* mKeyboard;
	int mMaxLen;
	UIView* mBGView;
	UPLableCell* mLabelCell;
	UPLableCell* mTipCell;
	NSString* mName;
	NSString* mPlaceHolder;
	BOOL _needDeviceEncryption;
	BOOL _readOnly;
	UPLineView* _topLine;
	UPLineView* _bottomLine;
	id<UITextFieldDelegate, UPTextFieldDelegate> mDelegate;
	NSString* mRegexP;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* mRegexP;	// G=0xc822e5; S=0xc822f5; 
@property(assign, nonatomic) __weak id<UITextFieldDelegate, UPTextFieldDelegate> mDelegate;	// G=0xc822b1; S=0xc822d1; 
@property(retain, nonatomic) NSString* mPlaceHolder;	// G=0xc82279; S=0xc82289; 
@property(retain, nonatomic) NSString* mName;	// G=0xc82241; S=0xc82251; 
-(void).cxx_destruct;	// 0xc8231d
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xc81c5d
-(BOOL)isReadOnly;	// 0xc81c2d
-(void)shouldReadOnly:(BOOL)only;	// 0xc81c01
-(void)deleteClick;	// 0xc81a49
-(void)textChanged:(id)changed;	// 0xc81789
-(void)doneClick;	// 0xc81769
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0xc816e5
-(BOOL)isLegalLength;	// 0xc81685
-(BOOL)isEmpty;	// 0xc81609
-(id)keyboard;	// 0xc815f5
-(int)maxLength;	// 0xc815e5
-(id)textField;	// 0xc815d1
-(void)setTextFieldDelegate:(id)delegate;	// 0xc81581
-(id)value;	// 0xc81571
-(id)param;	// 0xc81495
-(id)paramWithString:(id)string;	// 0xc81411
-(id)text;	// 0xc813f1
-(void)setNeedsDeviceEncryption;	// 0xc813dd
-(void)setText:(id)text;	// 0xc813bd
-(void)setLeftTitle:(id)title;	// 0xc81369
-(void)setLabelText:(id)text;	// 0xc81349
-(void)setLabelFont:(id)font;	// 0xc81329
-(void)setLabelColor:(id)color;	// 0xc81309
-(void)addBGViewAtY:(float)y;	// 0xc811e1
-(void)dealloc;	// 0xc81139
-(id)initWithFrame:(CGRect)frame content:(id)content delegate:(id)delegate;	// 0xc810e1
-(id)initWithFrame:(CGRect)frame content:(id)content delegate:(id)delegate lineFlag:(BOOL)flag;	// 0xc8108d
-(id)initWithFrame:(CGRect)frame content:(id)content delegate:(id)delegate lineFlag:(BOOL)flag leftTitle:(id)title;	// 0xc80621
@end

