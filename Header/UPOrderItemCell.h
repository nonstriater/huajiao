/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, UPLableCell;

@interface UPOrderItemCell : XXUnknownSuperclass {
	UPLableCell* _keyLabel;
	UPLableCell* _valueLabel;
	NSDictionary* orderContent;
}
@property(retain, nonatomic) NSDictionary* orderContent;	// G=0xc7f121; S=0xc7f131; 
-(void).cxx_destruct;	// 0xc7f159
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xc7f11d
-(void)resetFrame;	// 0xc7f119
-(id)initWithFrame:(CGRect)frame content:(id)content;	// 0xc7ecd5
-(void)dealloc;	// 0xc7ec91
@end
