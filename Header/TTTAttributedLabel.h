/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "NSObject.h"
#import "UIGestureRecognizerDelegate.h"
#import "TTTAttributedLabel.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSAttributedString, TTTAttributedLabelLink, NSDataDetector, NSString, NSArray, UIColor, UILongPressGestureRecognizer;
@protocol TTTAttributedLabelDelegate;

@protocol TTTAttributedLabel <NSObject>
@property(copy, nonatomic) id text;
@end

__attribute__((visibility("hidden")))
@interface TTTAttributedLabel : XXUnknownSuperclass <TTTAttributedLabel, UIGestureRecognizerDelegate> {
	BOOL _needsFramesetter;
	CTFramesetterRef _framesetter;
	CTFramesetterRef _highlightFramesetter;
	BOOL _extendsLinkTouchArea;
	NSAttributedString* _attributedText;
	id<TTTAttributedLabelDelegate> _delegate;
	NSDictionary* _linkAttributes;
	NSDictionary* _activeLinkAttributes;
	NSDictionary* _inactiveLinkAttributes;
	float _shadowRadius;
	float _highlightedShadowRadius;
	UIColor* _highlightedShadowColor;
	float _kern;
	float _firstLineIndent;
	float _lineSpacing;
	float _minimumLineHeight;
	float _maximumLineHeight;
	float _lineHeightMultiple;
	int _verticalAlignment;
	NSString* _truncationTokenString;
	NSDictionary* _truncationTokenStringAttributes;
	NSAttributedString* _attributedTruncationToken;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSAttributedString* _inactiveAttributedText;
	NSAttributedString* _renderedAttributedText;
	NSDataDetector* _dataDetector;
	NSArray* _linkModels;
	TTTAttributedLabelLink* _activeLink;
	NSArray* _accessibilityElements;
	unsigned long long _enabledTextCheckingTypes;
	CGSize _highlightedShadowOffset;
	UIEdgeInsets _linkBackgroundEdgeInset;
	UIEdgeInsets _textInsets;
}
@property(copy, nonatomic) id text;	// S=0x2147fd; 
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSArray* accessibilityElements;	// G=0x216969; S=0x21a229; 
@property(retain, nonatomic) TTTAttributedLabelLink* activeLink;	// G=0x21a219; S=0x2156b5; 
@property(retain, nonatomic) NSArray* linkModels;	// G=0x21a209; S=0x211cdd; 
@property(retain) NSDataDetector* dataDetector;	// G=0x21a1e5; S=0x21a1f9; 
@property(copy, nonatomic) NSAttributedString* renderedAttributedText;	// G=0x211b3d; S=0x21a1d5; 
@property(copy, nonatomic) NSAttributedString* inactiveAttributedText;	// G=0x21a1b1; S=0x21a1c5; 
@property(copy, nonatomic) NSAttributedString* attributedText;	// G=0x219e5d; S=0x211a21; 
@property(readonly, assign, nonatomic) UILongPressGestureRecognizer* longPressGestureRecognizer;	// G=0x21a1a1; 
@property(retain, nonatomic) NSAttributedString* attributedTruncationToken;	// G=0x21a169; S=0x21a179; 
@property(retain, nonatomic) NSDictionary* truncationTokenStringAttributes;	// G=0x21a131; S=0x21a141; 
@property(retain, nonatomic) NSString* truncationTokenString;	// G=0x21a0f9; S=0x21a109; 
@property(assign, nonatomic) int verticalAlignment;	// G=0x21a0d9; S=0x21a0e9; 
@property(assign, nonatomic) UIEdgeInsets textInsets;	// G=0x21a09d; S=0x21a0b5; 
@property(assign, nonatomic) float lineHeightMultiple;	// G=0x21a07d; S=0x21a08d; 
@property(assign, nonatomic) float maximumLineHeight;	// G=0x21a05d; S=0x21a06d; 
@property(assign, nonatomic) float minimumLineHeight;	// G=0x21a03d; S=0x21a04d; 
@property(assign, nonatomic) float lineSpacing;	// G=0x21a01d; S=0x21a02d; 
@property(assign, nonatomic) float leading;	// G=0x211f09; S=0x211f19; 
@property(assign, nonatomic) float firstLineIndent;	// G=0x219ffd; S=0x21a00d; 
@property(assign, nonatomic) float kern;	// G=0x219fdd; S=0x219fed; 
@property(retain, nonatomic) UIColor* highlightedShadowColor;	// G=0x219fa5; S=0x219fb5; 
@property(assign, nonatomic) CGSize highlightedShadowOffset;	// G=0x219f75; S=0x219f91; 
@property(assign, nonatomic) float highlightedShadowRadius;	// G=0x219f55; S=0x219f65; 
@property(assign, nonatomic) float shadowRadius;	// G=0x219f35; S=0x219f45; 
@property(assign, nonatomic) BOOL extendsLinkTouchArea;	// G=0x219f15; S=0x219f25; 
@property(assign, nonatomic) UIEdgeInsets linkBackgroundEdgeInset;	// G=0x219ed9; S=0x219ef1; 
@property(retain, nonatomic) NSDictionary* inactiveLinkAttributes;	// G=0x219ec9; S=0x215cd1; 
@property(retain, nonatomic) NSDictionary* activeLinkAttributes;	// G=0x219eb9; S=0x215ca5; 
@property(retain, nonatomic) NSDictionary* linkAttributes;	// G=0x219ea9; S=0x215a2d; 
@property(readonly, assign, nonatomic) NSArray* links;	// G=0x211cb5; 
@property(assign, nonatomic) unsigned long long enabledTextCheckingTypes;	// G=0x219e91; S=0x211f49; 
@property(assign, nonatomic) unsigned long long dataDetectorTypes;	// G=0x211f29; S=0x211f39; 
@property(assign, nonatomic) id<TTTAttributedLabelDelegate> delegate;	// G=0x219e71; S=0x219e81; 
+(CGSize)sizeThatFitsAttributedString:(id)string withConstraints:(CGSize)constraints limitedToNumberOfLines:(unsigned)lines;	// 0x2118c5
+(void)load;	// 0x2110d5
-(void).cxx_destruct;	// 0x21a251
-(id)initWithCoder:(id)coder;	// 0x219271
-(void)encodeWithCoder:(id)coder;	// 0x218c15
-(void)copy:(id)copy;	// 0x218bad
-(void)longPressGestureDidFire:(id)longPressGesture;	// 0x218665
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x218621
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x218591
-(void)touchesEnded:(id)ended withEvent:(id)event;	// 0x217fe5
-(void)touchesMoved:(id)moved withEvent:(id)event;	// 0x217ecd
-(void)touchesBegan:(id)began withEvent:(id)event;	// 0x217975
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x21795d
-(BOOL)canBecomeFirstResponder;	// 0x217959
-(id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x217861
-(void)tintColorDidChange;	// 0x2173d1
-(CGSize)intrinsicContentSize;	// 0x217379
-(CGSize)sizeThatFits:(CGSize)fits;	// 0x21714d
-(int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x216919
-(id)accessibilityElementAtIndex:(int)index;	// 0x2168cd
-(int)accessibilityElementCount;	// 0x216891
-(BOOL)isAccessibilityElement;	// 0x21688d
-(void)drawTextInRect:(CGRect)rect;	// 0x216089
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;	// 0x215e31
-(void)setTextColor:(id)color;	// 0x215da9
-(id)textColor;	// 0x215d3d
-(void)setHighlighted:(BOOL)highlighted;	// 0x215cfd
-(void)setText:(id)text afterInheritingLabelAttributesAndConfiguringWithBlock:(id)block;	// 0x214dc1
-(void)drawStrike:(CTFrameRef)strike inRect:(CGRect)rect context:(CGContextRef)context;	// 0x214271
-(void)drawBackground:(CTFrameRef)background inRect:(CGRect)rect context:(CGContextRef)context;	// 0x213bed
-(void)drawFramesetter:(CTFramesetterRef)framesetter attributedString:(id)string textRange:(timeval)range inRect:(CGRect)rect context:(CGContextRef)context;	// 0x2133e9
-(CGRect)boundingRectForCharacterRange:(NSRange)characterRange;	// 0x213261
-(long)characterIndexAtPoint:(CGPoint)point;	// 0x212e7d
-(id)linkAtCharacterIndex:(long)characterIndex;	// 0x212d39
-(id)linkAtRadius:(float)radius aroundPoint:(CGPoint)point;	// 0x212bf5
-(id)linkAtPoint:(CGPoint)point;	// 0x212989
-(BOOL)containslinkAtPoint:(CGPoint)point;	// 0x21295d
-(id)addLinkToTransitInformation:(id)transitInformation withRange:(NSRange)range;	// 0x2128f9
-(id)addLinkToDate:(id)date timeZone:(id)zone duration:(double)duration withRange:(NSRange)range;	// 0x212871
-(id)addLinkToDate:(id)date withRange:(NSRange)range;	// 0x21280d
-(id)addLinkToPhoneNumber:(id)phoneNumber withRange:(NSRange)range;	// 0x2127a9
-(id)addLinkToAddress:(id)address withRange:(NSRange)range;	// 0x212745
-(id)addLinkToURL:(id)url withRange:(NSRange)range;	// 0x2126e1
-(id)addLinkWithTextCheckingResult:(id)textCheckingResult;	// 0x212681
-(id)addLinksWithTextCheckingResults:(id)textCheckingResults attributes:(id)attributes;	// 0x2124a9
-(id)addLinkWithTextCheckingResult:(id)textCheckingResult attributes:(id)attributes;	// 0x212405
-(void)addLinks:(id)links;	// 0x212195
-(void)addLink:(id)link;	// 0x212139
-(void)setHighlightFramesetter:(CTFramesetterRef)framesetter;	// 0x211edd
-(CTFramesetterRef)highlightFramesetter;	// 0x211ecd
-(void)setFramesetter:(CTFramesetterRef)framesetter;	// 0x211ea1
-(CTFramesetterRef)framesetter;	// 0x211d51
-(void)setNeedsFramesetter;	// 0x211d25
-(void)dealloc;	// 0x211849
-(void)commonInit;	// 0x211371
-(id)initWithFrame:(CGRect)frame;	// 0x211311
@end

