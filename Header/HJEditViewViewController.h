/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "DSViewController.h"
#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextView, HJUserProfilesResponse, HJVerifiedDetail;

__attribute__((visibility("hidden")))
@interface HJEditViewViewController : DSViewController <UITextViewDelegate> {
	HJUserProfilesResponse* _userProfile;
	NSString* _controllerID;
	id _FinishButton;
	HJVerifiedDetail* _verifiedDetail;
	UITextView* _textView;
	UILabel* _countLabel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UILabel* countLabel;	// G=0x2f9089; S=0x2f95a9; 
@property(retain, nonatomic) UITextView* textView;	// G=0x2f9191; S=0x2f9581; 
@property(retain, nonatomic) HJVerifiedDetail* verifiedDetail;	// G=0x2f9549; S=0x2f9559; 
@property(copy, nonatomic) id FinishButton;	// G=0x2f9525; S=0x2f9539; 
@property(retain, nonatomic) NSString* controllerID;	// G=0x2f94ed; S=0x2f94fd; 
@property(retain, nonatomic) HJUserProfilesResponse* userProfile;	// G=0x2f94b5; S=0x2f94c5; 
-(void).cxx_destruct;	// 0x2f95d1
-(id)getString:(id)string length:(int)length;	// 0x2f93b1
-(int)getLength:(id)length;	// 0x2f930d
-(BOOL)isChinese:(unsigned short)chinese;	// 0x2f92d5
-(void)textViewDidChangeSelection:(id)textView;	// 0x2f8fb5
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;	// 0x2f8ec5
-(void)setCount:(unsigned)count;	// 0x2f8e51
-(void)didReceiveMemoryWarning;	// 0x2f8e25
-(void)finishedAction;	// 0x2f87c9
-(void)btnAction:(id)action;	// 0x2f87b9
-(void)setupFinish;	// 0x2f8589
-(void)viewWillDisappear:(BOOL)view;	// 0x2f84ed
-(void)viewWillAppear:(BOOL)view;	// 0x2f835d
-(void)viewDidLoad;	// 0x2f7d99
@end

