/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "NSObject.h"


@protocol TTTAttributedLabelDelegate <NSObject>
@optional
-(void)attributedLabel:(id)label didLongPressLinkWithTextCheckingResult:(id)textCheckingResult atPoint:(CGPoint)point;
-(void)attributedLabel:(id)label didLongPressLinkWithTransitInformation:(id)transitInformation atPoint:(CGPoint)point;
-(void)attributedLabel:(id)label didLongPressLinkWithDate:(id)date timeZone:(id)zone duration:(double)duration atPoint:(CGPoint)point;
-(void)attributedLabel:(id)label didLongPressLinkWithDate:(id)date atPoint:(CGPoint)point;
-(void)attributedLabel:(id)label didLongPressLinkWithPhoneNumber:(id)phoneNumber atPoint:(CGPoint)point;
-(void)attributedLabel:(id)label didLongPressLinkWithAddress:(id)address atPoint:(CGPoint)point;
-(void)attributedLabel:(id)label didLongPressLinkWithURL:(id)url atPoint:(CGPoint)point;
-(void)attributedLabel:(id)label didSelectLinkWithTextCheckingResult:(id)textCheckingResult;
-(void)attributedLabel:(id)label didSelectLinkWithTransitInformation:(id)transitInformation;
-(void)attributedLabel:(id)label didSelectLinkWithDate:(id)date timeZone:(id)zone duration:(double)duration;
-(void)attributedLabel:(id)label didSelectLinkWithDate:(id)date;
-(void)attributedLabel:(id)label didSelectLinkWithPhoneNumber:(id)phoneNumber;
-(void)attributedLabel:(id)label didSelectLinkWithAddress:(id)address;
-(void)attributedLabel:(id)label didSelectLinkWithURL:(id)url;
@end

