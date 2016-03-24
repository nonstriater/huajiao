/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage, UIImageView, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface DSResizingImageView : XXUnknownSuperclass <UIScrollViewDelegate> {
	CGRect maskFrame;
	CGSize maxSize;
	float topMargin;
	float bottomMargin;
	float leftMargin;
	float rightMargin;
	UIImage* originImage;
	UIImageView* imageView;
	UIPinchGestureRecognizer* pinchGR;
	int rotate90Count;
	float landscapeZoomScale;
	float portraitZoomScale;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;	// 0x35ab79
-(id)getCurrentRotationImage;	// 0x35a96d
-(id)getImageWithClipRect:(CGRect)clipRect imageSize:(CGSize)size;	// 0x35a729
-(id)getCutImage;	// 0x35a5f9
-(float)getRotateDegree;	// 0x35a5d1
-(void)rotate90Degree;	// 0x35a49d
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;	// 0x35a399
-(id)viewForZoomingInScrollView:(id)scrollView;	// 0x35a385
-(void)fitToSize:(CGSize)size;	// 0x35a235
-(void)resize;	// 0x35a0b5
-(void)resetZoomScale;	// 0x359fd1
-(void)initZoomScale:(CGSize)scale;	// 0x359f19
-(void)initRotateOrientation:(id)orientation;	// 0x359ead
-(void)makeCenter;	// 0x359de5
-(void)finishResizing;	// 0x359d8d
-(id)initWithFrame:(CGRect)frame image:(id)image maskFrame:(CGRect)frame3;	// 0x35998d
@end
