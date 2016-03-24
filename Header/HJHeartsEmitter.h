/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "JQDealPraiseManagerDelegate.h"
#import "HJHeartViewDelegate.h"

@class NSString, NSTimer, NSMutableArray;
@protocol HJHeartsEmitterDelegate;

__attribute__((visibility("hidden")))
@interface HJHeartsEmitter : XXUnknownSuperclass <JQDealPraiseManagerDelegate, HJHeartViewDelegate> {
	BOOL _dirtyPath;
	id<HJHeartsEmitterDelegate> _delegate;
	NSMutableArray* _cacheHearts;
	int _needsubmitHearts;
	NSTimer* _timerHeart;
	CGPoint _emitterPosition;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL dirtyPath;	// G=0x30135d; S=0x30136d; 
@property(retain, nonatomic) NSTimer* timerHeart;	// G=0x301325; S=0x301335; 
@property(assign) int needsubmitHearts;	// G=0x301305; S=0x301315; 
@property(retain, nonatomic) NSMutableArray* cacheHearts;	// G=0x3012cd; S=0x3012dd; 
@property(assign, nonatomic) CGPoint emitterPosition;	// G=0x3012b1; S=0x3004ed; 
@property(assign, nonatomic) __weak id<HJHeartsEmitterDelegate> delegate;	// G=0x30127d; S=0x30129d; 
-(void).cxx_destruct;	// 0x30137d
-(id)birthHeart;	// 0x301245
-(void)didView:(id)view animationstop:(BOOL)animationstop;	// 0x301115
-(void)endAnimation:(id)animation heart:(id)heart;	// 0x301021
-(void)beginAnimationWithHeart:(id)heart;	// 0x300b19
-(CGPathRef)getPath;	// 0x3008cd
-(id)getBeziePath;	// 0x3006b5
-(void)dealloc;	// 0x300501
-(void)layoutSubviews;	// 0x3004a9
-(void)commonInit;	// 0x30040d
-(id)init;	// 0x3003c9
-(id)initWithFrame:(CGRect)frame;	// 0x300371
@end
