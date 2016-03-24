/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextInputTraits.h"
#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIColor;

@interface WBSDKTextField : XXUnknownSuperclass <UITextInputTraits> {
	UIColor* placeholderColor;
	BOOL _forbiddenCopy;
}
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int spellCheckingType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) int autocapitalizationType;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL forbiddenCopy;	// G=0xd2a0b9; S=0xd2a0c9; 
@property(retain, nonatomic) UIColor* placeholderColor;	// G=0xd2a081; S=0xd2a091; 
-(void).cxx_destruct;	// 0xd2a0d9
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0xd29fb9
-(void)drawPlaceholderInRect:(CGRect)rect;	// 0xd29df5
@end

