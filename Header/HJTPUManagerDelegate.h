/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol HJTPUManagerDelegate <NSObject>
@optional
-(void)TPUManagerDidFinishBindAuthenticationSuccess:(BOOL)tpumanager Source:(id)source result:(id)result error:(id)error;
-(void)TPUManagerDidFinishAuthentication:(BOOL)tpumanager shouldShowRecom:(BOOL)recom;
-(void)TPUManagerDidFinishAuthentication:(BOOL)tpumanager shouldShowRecom:(BOOL)recom shouldShowHongbao:(BOOL)hongbao;
@end

