/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIViewController, NSMutableArray, HJLeadingRolesResponse, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface HJHotTabRecAnchorView : XXUnknownSuperclass {
	UIViewController* _pVC;
	UIImageView* _anchorImageView1;
	UIImageView* _anchorImageView2;
	UIImageView* _anchorImageView3;
	HJLeadingRolesResponse* _data;
	UITapGestureRecognizer* _tap;
	NSMutableArray* _headArr;
}
@property(retain, nonatomic) NSMutableArray* headArr;	// G=0xa13d9; S=0xa13e9; 
@property(retain, nonatomic) UITapGestureRecognizer* tap;	// G=0xa13a1; S=0xa13b1; 
@property(retain, nonatomic) HJLeadingRolesResponse* data;	// G=0xa1391; S=0xa0fb5; 
@property(assign, nonatomic) __weak UIImageView* anchorImageView3;	// G=0xa135d; S=0xa137d; 
@property(assign, nonatomic) __weak UIImageView* anchorImageView2;	// G=0xa1329; S=0xa1349; 
@property(assign, nonatomic) __weak UIImageView* anchorImageView1;	// G=0xa12f5; S=0xa1315; 
@property(assign, nonatomic) __weak UIViewController* pVC;	// G=0xa12c1; S=0xa12e1; 
+(id)anchorView;	// 0xa0b0d
-(void).cxx_destruct;	// 0xa1411
-(void)onViewClick;	// 0xa1219
-(void)awakeFromNib;	// 0xa0b95
@end

