/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIView, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface HJSeedLoadingView : XXUnknownSuperclass {
	UIView* _bgView;
	UILabel* _label;
	UIActivityIndicatorView* _indicatorView;
}
@property(retain, nonatomic) UIActivityIndicatorView* indicatorView;	// G=0x20cb71; S=0x20cb81; 
@property(retain, nonatomic) UILabel* label;	// G=0x20cb39; S=0x20cb49; 
+(void)dismiss;	// 0x20ca55
+(void)showInView:(id)view;	// 0x20c99d
+(void)showInView:(id)view WithText:(id)text;	// 0x20c881
+(id)shared;	// 0x20c2a5
-(void).cxx_destruct;	// 0x20cba9
-(id)initWithFrame:(CGRect)frame;	// 0x20c3d9
-(id)init;	// 0x20c3a9
@end
