/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "living-Structs.h"
#import "IPAYBaseController.h"

@class NSString, UIView, UITapGestureRecognizer, UIViewController;

@interface IPAYSideMenuController : IPAYBaseController <UIGestureRecognizerDelegate> {
	UIViewController* _menuViewController;
	UIViewController* _contentViewController;
	UIView* _contentContainerView;
	UIView* _menuContainerView;
	UIView* _opacityView;
	UITapGestureRecognizer* _tapGesture;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UITapGestureRecognizer* tapGesture;	// G=0xbdcc19; S=0xbdcc29; 
@property(retain, nonatomic) UIView* opacityView;	// G=0xbdb8c1; S=0xbdcbf1; 
@property(retain, nonatomic) UIView* menuContainerView;	// G=0xbdb57d; S=0xbdcbc9; 
@property(retain, nonatomic) UIView* contentContainerView;	// G=0xbdb39d; S=0xbdcba1; 
@property(retain, nonatomic) UIViewController* contentViewController;	// G=0xbdcb91; S=0xbdae6d; 
@property(retain, nonatomic) UIViewController* menuViewController;	// G=0xbdcb81; S=0xbdae05; 
-(void).cxx_destruct;	// 0xbdcc51
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0xbdca75
-(void)enableContentInteraction;	// 0xbdca39
-(void)disableContentInteraction;	// 0xbdc9fd
-(void)removeMenuShadow;	// 0xbdc949
-(void)addShadowToMenuView;	// 0xbdc745
-(void)closeMenuWithVelocity:(float)velocity;	// 0xbdc269
-(void)openMenuWithVelocity:(float)velocity;	// 0xbdbde9
-(BOOL)isMenuHidden;	// 0xbdbd21
-(BOOL)isMenuOpen;	// 0xbdbc59
-(void)toggleMenu;	// 0xbdbc19
-(void)addGestures;	// 0xbdbb6d
-(void)changeMenuViewController:(id)controller closeMenu:(BOOL)menu;	// 0xbdbb35
-(void)changeContentViewController:(id)controller closeMenu:(BOOL)menu;	// 0xbdbafd
-(void)openMenu;	// 0xbdbae9
-(void)closeMenu;	// 0xbdbad5
-(void)setUpContentViewController:(id)controller;	// 0xbdb175
-(void)setUpMenuViewController:(id)controller;	// 0xbdaf4d
-(void)removeViewController:(id)controller;	// 0xbdaed5
-(void)didReceiveMemoryWarning;	// 0xbdadd9
-(void)viewDidLoad;	// 0xbdad05
-(id)initWithMenuViewController:(id)menuViewController contentViewController:(id)controller;	// 0xbdac71
@end
