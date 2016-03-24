/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "UPPromotionViewDelegate.h"

@class NSString, UPPointCell, UPPasswordCell, UPKeyboard, UPBankNumCell;
@protocol UPTextFieldDelegate, UITextFieldDelegate;

@interface UPPaymentElementsView : XXUnknownSuperclass <UPPromotionViewDelegate> {
	UPKeyboard* _keyboard;
	id<UITextFieldDelegate, UPTextFieldDelegate> _delegate;
	UPPasswordCell* _securityCell;
	UPBankNumCell* _bankNumCell;
	UPPointCell* _pointCell;
	float _toplineLeftMargin;
	id<UITextFieldDelegate, UPTextFieldDelegate> textDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<UITextFieldDelegate, UPTextFieldDelegate> textDelegate;	// G=0xc5b9cd; S=0xc5b9ed; 
-(void).cxx_destruct;	// 0xc5ba01
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xc5b6e5
-(void)makeKeyboardRandom;	// 0xc5b6c5
-(void)cleanupPassword;	// 0xc5b6a1
-(void)cleanupSecretInfo;	// 0xc5b4a1
-(id)elementArray;	// 0xc5b359
-(id)checkPaymentParamsError;	// 0xc5b0a1
-(id)checkSmsParamsError;	// 0xc5ade9
-(id)paymentParams;	// 0xc5ab8d
-(id)smsParams;	// 0xc5a961
-(id)panParamWithValue:(id)value;	// 0xc5a941
-(id)secetParamWithValue:(id)value;	// 0xc5a921
-(void)setNeedsDeviceEncryption;	// 0xc5a8e1
-(void)addPointObservers;	// 0xc5a881
-(void)removePointObservers;	// 0xc5a815
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;	// 0xc5a4f5
-(id)initWithFrame:(CGRect)frame elements:(id)elements delegate:(id)delegate;	// 0xc5a49d
-(id)initWithFrame:(CGRect)frame elements:(id)elements delegate:(id)delegate andInstalmentView:(id)view;	// 0xc5a439
-(id)initWithFrame:(CGRect)frame elements:(id)elements delegate:(id)delegate andInstalmentView:(id)view toplineLeftMargin:(float)margin;	// 0xc59935
-(void)dealloc;	// 0xc598e1
@end
