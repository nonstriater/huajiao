/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UMTProtocol <NSObject>
-(void)writeListEnd;
-(void)writeListBeginWithElementType:(int)elementType size:(int)size;
-(void)writeSetEnd;
-(void)writeSetBeginWithElementType:(int)elementType size:(int)size;
-(void)writeMapEnd;
-(void)writeMapBeginWithKeyType:(int)keyType valueType:(int)type size:(int)size;
-(void)writeFieldEnd;
-(void)writeFieldStop;
-(void)writeBinary:(id)binary;
-(void)writeBool:(BOOL)aBool;
-(void)writeDouble:(double)aDouble;
-(void)writeString:(id)string;
-(void)writeByte:(unsigned char)byte;
-(void)writeI16:(short)a16;
-(void)writeI64:(long long)a64;
-(void)writeI32:(int)a32;
-(void)writeFieldBeginWithName:(id)name type:(int)type fieldID:(int)anId;
-(void)writeStructEnd;
-(void)writeStructBeginWithName:(id)name;
-(void)writeMessageEnd;
-(void)writeMessageBeginWithName:(id)name type:(int)type sequenceID:(int)anId;
-(void)readListEnd;
-(void)readListBeginReturningElementType:(int*)type size:(int*)size;
-(void)readSetEnd;
-(void)readSetBeginReturningElementType:(int*)type size:(int*)size;
-(void)readMapEnd;
-(void)readMapBeginReturningKeyType:(int*)type valueType:(int*)type2 size:(int*)size;
-(id)readBinary;
-(double)readDouble;
-(long long)readI64;
-(int)readI32;
-(short)readI16;
-(unsigned char)readByte;
-(BOOL)readBool;
-(id)readString;
-(void)readFieldEnd;
-(void)readFieldBeginReturningName:(id*)name type:(int*)type fieldID:(int*)anId;
-(void)readStructEnd;
-(void)readStructBeginReturningName:(id*)name;
-(void)readMessageEnd;
-(void)readMessageBeginReturningName:(id*)name type:(int*)type sequenceID:(int*)anId;
-(id)transport;
@end
