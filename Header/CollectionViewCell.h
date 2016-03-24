/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class collectionViewDataModel, UILabel, UIImageView, UIView;
@protocol CollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CollectionViewCell : XXUnknownSuperclass {
	collectionViewDataModel* _item;
	id<CollectionViewCellDelegate> _delegate;
	UIImageView* _imageView;
	UILabel* _label;
	UIView* _lineView;
}
@property(assign, nonatomic) __weak UIView* lineView;	// G=0x3274d; S=0x3276d; 
@property(assign, nonatomic) __weak UILabel* label;	// G=0x32719; S=0x32739; 
@property(assign, nonatomic) __weak UIImageView* imageView;	// G=0x326e5; S=0x32705; 
@property(assign, nonatomic) __weak id<CollectionViewCellDelegate> delegate;	// G=0x326b1; S=0x326d1; 
@property(retain, nonatomic) collectionViewDataModel* item;	// G=0x326a1; S=0x31d51; 
-(void).cxx_destruct;	// 0x32781
-(void)layoutSubviews;	// 0x32061
-(void)didSelectedCell;	// 0x31fc1
-(id)initWithFrame:(CGRect)frame;	// 0x31a41
@end

