/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UPBaseCell.h"

@class NSDictionary;

@interface UPBankNumCell : UPBaseCell {
	NSDictionary* mRegex;
}
@property(retain, nonatomic) NSDictionary* mRegex;	// G=0xc83f29; S=0xc83f39; 
-(void).cxx_destruct;	// 0xc83f61
-(void)deleteClick;	// 0xc83e1d
-(void)textChanged:(id)changed;	// 0xc83ca9
-(id)text;	// 0xc83c45
-(BOOL)isLegalLength;	// 0xc838ad
-(id)param;	// 0xc8378d
-(id)getPanPrefixByPan:(id)pan;	// 0xc8350d
-(void)resetCellWithLabel:(id)label cardNo:(id)no tip:(id)tip;	// 0xc82efd
-(id)initWithFrame:(CGRect)frame content:(id)content delegate:(id)delegate;	// 0xc82ea5
-(id)initWithFrame:(CGRect)frame content:(id)content delegate:(id)delegate lineFlag:(BOOL)flag leftTitle:(id)title;	// 0xc82bd1
-(void)dealloc;	// 0xc82b8d
@end

