/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IPAYMASConstraintDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, IPAYMASConstraint, UIView, NSMutableArray;

@interface IPAYMASConstraintMaker : XXUnknownSuperclass <IPAYMASConstraintDelegate> {
	BOOL _updateExisting;
	BOOL _removeExisting;
	UIView* _view;
	NSMutableArray* _constraints;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* constraints;	// G=0xb61669; S=0xb61679; 
@property(assign, nonatomic) __weak UIView* view;	// G=0xb61635; S=0xb61655; 
@property(assign, nonatomic) BOOL removeExisting;	// G=0xb61615; S=0xb61625; 
@property(assign, nonatomic) BOOL updateExisting;	// G=0xb615f5; S=0xb61605; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* center;	// G=0xb61469; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* size;	// G=0xb61455; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* edges;	// G=0xb61441; 
@property(readonly, assign, nonatomic) id attributes;	// G=0xb61325; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* centerYWithinMargins;	// G=0xb6142d; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* centerXWithinMargins;	// G=0xb61419; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* trailingMargin;	// G=0xb61405; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* leadingMargin;	// G=0xb613f1; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* bottomMargin;	// G=0xb613dd; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* topMargin;	// G=0xb613c9; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* rightMargin;	// G=0xb613b5; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* leftMargin;	// G=0xb613a1; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* baseline;	// G=0xb61311; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* centerY;	// G=0xb612fd; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* centerX;	// G=0xb612e9; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* height;	// G=0xb612d5; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* width;	// G=0xb612c1; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* trailing;	// G=0xb612ad; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* leading;	// G=0xb61299; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* bottom;	// G=0xb61285; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* right;	// G=0xb61271; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* top;	// G=0xb6125d; 
@property(readonly, assign, nonatomic) IPAYMASConstraint* left;	// G=0xb61249; 
-(void).cxx_destruct;	// 0xb616a1
-(id)group;	// 0xb6147d
-(id)addConstraintWithLayoutAttribute:(int)layoutAttribute;	// 0xb61235
-(id)addConstraintWithAttributes:(int)attributes;	// 0xb60989
-(id)constraint:(id)constraint addConstraintWithLayoutAttribute:(int)layoutAttribute;	// 0xb6079d
-(void)constraint:(id)constraint shouldBeReplacedWithConstraint:(id)constraint2;	// 0xb60701
-(id)install;	// 0xb604ad
-(id)initWithView:(id)view;	// 0xb60409
@end

