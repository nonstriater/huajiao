/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol HJBaseCellDelegate;

__attribute__((visibility("hidden")))
@interface HJBaseCell : XXUnknownSuperclass {
	id<HJBaseCellDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<HJBaseCellDelegate> delegate;	// G=0x39d285; S=0x39d2a5; 
-(void).cxx_destruct;	// 0x39d2b9
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x39d255
-(void)awakeFromNib;	// 0x39d241
@end

