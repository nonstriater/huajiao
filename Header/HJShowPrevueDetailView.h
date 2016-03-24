/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJPrevueDetailViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSTimer, HJUserIntf, HJPrevueDetailView, UIView;

__attribute__((visibility("hidden")))
@interface HJShowPrevueDetailView : XXUnknownSuperclass <HJPrevueDetailViewDelegate> {
	UIView* _containerView;
	HJPrevueDetailView* _detailView;
	BOOL _shown;
	UIView* _maskView;
	HJUserIntf* _watchIntf;
	NSTimer* _timer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)doRefresh;	// 0x26d855
+(void)dismiss;	// 0x26c351
+(void)showDetail:(id)detail;	// 0x26c2f9
+(id)sharedInstance;	// 0x26c239
-(void).cxx_destruct;	// 0x26d899
-(void)doRefresh;	// 0x26d835
-(void)showDetail:(id)detail;	// 0x26cce9
-(void)dealloc;	// 0x26cc69
-(void)onTapDetailMask;	// 0x26cc59
-(void)_removeDetail;	// 0x26cc05
-(void)applicationDidEnterBackground;	// 0x26cbf5
-(void)removeDetail;	// 0x26c9c1
-(id)init;	// 0x26c921
-(void)onClickShareButtonInPrevueDetailView:(id)prevueDetailView;	// 0x26c3a5
-(void)onClickCloseButtonInPrevueDetailView:(id)prevueDetailView;	// 0x26c395
@end

