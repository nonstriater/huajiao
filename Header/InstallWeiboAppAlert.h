/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, WBDataTransferObject;

@interface InstallWeiboAppAlert : XXUnknownSuperclass <UIAlertViewDelegate> {
	WBDataTransferObject* transferObject;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WBDataTransferObject* transferObject;	// G=0xd5c76d; S=0xd5c77d; 
-(void).cxx_destruct;	// 0xd5c7a5
-(void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;	// 0xd5c561
-(void)alertWithTransferObject:(id)transferObject;	// 0xd5c54d
-(void)alertWithTransferObject:(id)transferObject isUpdate:(BOOL)update;	// 0xd5c49d
@end

