/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, Feeds, NSAttributedString;

__attribute__((visibility("hidden")))
@interface copyTableViewCell : XXUnknownSuperclass {
	BOOL _isClose;
	Feeds* _feed;
	float _cellHeight;
	UILabel* _contentLabel;
	NSAttributedString* _astr;
}
@property(retain, nonatomic) NSAttributedString* astr;	// G=0x391079; S=0x391089; 
@property(retain, nonatomic) UILabel* contentLabel;	// G=0x391041; S=0x391051; 
@property(assign, nonatomic) float cellHeight;	// G=0x391021; S=0x391031; 
@property(retain, nonatomic) Feeds* feed;	// G=0x391011; S=0x39070d; 
@property(assign, nonatomic) BOOL isClose;	// G=0x391001; S=0x3906fd; 
-(void).cxx_destruct;	// 0x3910b1
-(void)setBriefStringWithStr:(id)str;	// 0x390849
-(void)layout;	// 0x390521
-(void)setup;	// 0x390431
-(id)initWithFrame:(CGRect)frame;	// 0x3903d9
-(id)initWithCoder:(id)coder;	// 0x390395
@end

