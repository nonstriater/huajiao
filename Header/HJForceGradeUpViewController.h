/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UILabel, UIButton;

__attribute__((visibility("hidden")))
@interface HJForceGradeUpViewController : XXUnknownSuperclass {
	id _onClickGradeupButtonBlock;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSString* _theTitle;
	NSString* _theMessage;
	UIButton* _gradeupButton;
}
@property(assign, nonatomic) __weak UIButton* gradeupButton;	// G=0x1b4cd1; S=0x1b4cf1; 
@property(copy, nonatomic) NSString* theMessage;	// G=0x1b4cad; S=0x1b4cc1; 
@property(copy, nonatomic) NSString* theTitle;	// G=0x1b4c89; S=0x1b4c9d; 
@property(assign, nonatomic) __weak UILabel* messageLabel;	// G=0x1b4c55; S=0x1b4c75; 
@property(assign, nonatomic) __weak UILabel* titleLabel;	// G=0x1b4c21; S=0x1b4c41; 
@property(copy, nonatomic) id onClickGradeupButtonBlock;	// G=0x1b4bfd; S=0x1b4c11; 
-(void).cxx_destruct;	// 0x1b4d05
-(void)didReceiveMemoryWarning;	// 0x1b4bd1
-(void)viewDidLoad;	// 0x1b49f9
-(void)onClickGradeupButton:(id)button;	// 0x1b49e1
@end

