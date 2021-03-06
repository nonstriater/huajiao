/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, APKKeychainBindings;

@interface APKKeychainBindingsController : XXUnknownSuperclass {
	APKKeychainBindings* _keychainBindings;
	NSMutableDictionary* _valueBuffer;
}
+(id)sharedKeychainBindingsController;	// 0xce71c9
-(void).cxx_destruct;	// 0xce770d
-(void)setValue:(id)value forKeyPath:(id)keyPath accessibleAttribute:(void*)attribute;	// 0xce7535
-(void)setValue:(id)value forKeyPath:(id)keyPath;	// 0xce74f1
-(id)valueForKeyPath:(id)keyPath;	// 0xce7381
-(id)values;	// 0xce7325
-(id)keychainBindings;	// 0xce7289
-(BOOL)storeString:(id)string forKey:(id)key accessibleAttribute:(void*)attribute;	// 0xce6eed
-(BOOL)storeString:(id)string forKey:(id)key;	// 0xce6ea5
-(id)stringForKey:(id)key;	// 0xce6d7d
-(id)serviceName;	// 0xce6d29
@end

