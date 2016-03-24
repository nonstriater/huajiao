/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIActivityIndicatorView;

@interface UPNavigationBar : XXUnknownSuperclass {
	BOOL _shouldBack;
	UIImageView* _logoImage;
	UILabel* _barTitle;
	UIActivityIndicatorView* _loadingIndicator;
	id actionTarget;
}
@property(assign, nonatomic) id actionTarget;	// G=0xcac079; S=0xcac089; 
-(void).cxx_destruct;	// 0xcac099
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xcabddd
-(void)addLeftButton:(id)button target:(id)target action:(SEL)action;	// 0xcabc05
-(void)addLoadingIndicator;	// 0xcabb2d
-(void)resetBarTitle:(id)title;	// 0xcabac9
-(void)addBarTitle:(id)title;	// 0xcab921
-(void)showUnionPayLogo;	// 0xcab901
-(void)hideUnionPayLogo;	// 0xcab8e1
-(void)addUnionPaylogo;	// 0xcab6c1
-(id)createBackgroundColor;	// 0xcab5f5
-(void)dealloc;	// 0xcab5b1
-(id)initWithFrame:(CGRect)frame barTitle:(id)title btnTitle:(id)title3 target:(id)target action:(SEL)action shouldBack:(BOOL)back;	// 0xcab491
@end

