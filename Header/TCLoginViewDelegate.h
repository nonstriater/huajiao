/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol TCLoginViewDelegate <NSObject>
@optional
-(BOOL)shouldAutorotateWithLoginWebkit:(id)loginWebkit;
-(unsigned)supportedInterfaceOrientationsWithLoginWebkit:(id)loginWebkit;
-(BOOL)loginViewKit:(id)kit shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)loginViewKit:(id)kit didFailuredWithError:(id)error serial:(id)serial;
-(void)loginViewKitDidSucceedLogin:(id)loginViewKit serial:(id)serial;
@end

