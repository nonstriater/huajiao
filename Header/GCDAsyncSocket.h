/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData, GCDAsyncSocketPreBuffer, GCDAsyncReadPacket, GCDAsyncWritePacket, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface GCDAsyncSocket : XXUnknownSuperclass {
	unsigned flags;
	unsigned short config;
	id delegate;
	NSObject<OS_dispatch_queue>* delegateQueue;
	int socket4FD;
	int socket6FD;
	int stateIndex;
	NSData* connectInterface4;
	NSData* connectInterface6;
	NSObject<OS_dispatch_queue>* socketQueue;
	NSObject<OS_dispatch_source>* accept4Source;
	NSObject<OS_dispatch_source>* accept6Source;
	NSObject<OS_dispatch_source>* connectTimer;
	NSObject<OS_dispatch_source>* readSource;
	NSObject<OS_dispatch_source>* writeSource;
	NSObject<OS_dispatch_source>* readTimer;
	NSObject<OS_dispatch_source>* writeTimer;
	NSMutableArray* readQueue;
	NSMutableArray* writeQueue;
	GCDAsyncReadPacket* currentRead;
	GCDAsyncWritePacket* currentWrite;
	unsigned long socketFDBytesAvailable;
	GCDAsyncSocketPreBuffer* preBuffer;
	XXStruct_4pnlqD streamContext;
	CFReadStreamRef readStream;
	CFWriteStreamRef writeStream;
	SSLContextRef sslContext;
	GCDAsyncSocketPreBuffer* sslPreBuffer;
	unsigned long sslWriteCachedLength;
	long sslErrCode;
	void* IsOnSocketQueueOrTargetQueueKey;
	id userData;
}
@property(assign) BOOL autoDisconnectOnClosedReadStream;	// G=0xa3a5f9; S=0xa3a6f9; 
@property(readonly, assign) BOOL isSecure;	// G=0xa31ce1; 
@property(readonly, assign) BOOL isIPv6;	// G=0xa31bd5; 
@property(readonly, assign) BOOL isIPv4;	// G=0xa31ac9; 
@property(readonly, assign) NSData* localAddress;	// G=0xa3183d; 
@property(readonly, assign) NSData* connectedAddress;	// G=0xa315b1; 
@property(readonly, assign) unsigned short localPort;	// G=0xa30fa9; 
@property(readonly, assign) NSString* localHost;	// G=0xa30dd5; 
@property(readonly, assign) unsigned short connectedPort;	// G=0xa30c5d; 
@property(readonly, assign) NSString* connectedHost;	// G=0xa30a89; 
@property(readonly, assign) BOOL isConnected;	// G=0xa308fd; 
@property(readonly, assign) BOOL isDisconnected;	// G=0xa3076d; 
@property(retain) id userData;	// G=0xa2c01d; S=0xa2c1d5; 
@property(assign, getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;	// G=0xa2be59; S=0xa2bf59; 
@property(assign, getter=isIPv6Enabled) BOOL IPv6Enabled;	// G=0xa2bc95; S=0xa2bd95; 
@property(assign, getter=isIPv4Enabled) BOOL IPv4Enabled;	// G=0xa2bad1; S=0xa2bbd1; 
@property(retain) NSObject<OS_dispatch_queue>* delegateQueue;	// G=0xa2b4e1; S=0xa2b715; 
@property(assign) __weak id delegate;	// G=0xa2b261; S=0xa2b4b9; 
+(id)ZeroData;	// 0xa3b239
+(id)LFData;	// 0xa3b211
+(id)CRData;	// 0xa3b1e9
+(id)CRLFData;	// 0xa3b1c1
+(BOOL)getHost:(id*)host port:(unsigned short*)port family:(char*)family fromAddress:(id)address;	// 0xa3b02d
+(BOOL)getHost:(id*)host port:(unsigned short*)port fromAddress:(id)address;	// 0xa3affd
+(BOOL)isIPv6Address:(id)address;	// 0xa3afad
+(BOOL)isIPv4Address:(id)address;	// 0xa3af5d
+(unsigned short)portFromAddress:(id)address;	// 0xa3af2d
+(id)hostFromAddress:(id)address;	// 0xa3aee1
+(unsigned short)portFromSockaddr6:(const sockaddr_in6*)sockaddr6;	// 0xa3aed9
+(unsigned short)portFromSockaddr4:(const sockaddr_in*)sockaddr4;	// 0xa3aed1
+(id)hostFromSockaddr6:(const sockaddr_in6*)sockaddr6;	// 0xa3ae71
+(id)hostFromSockaddr4:(const sockaddr_in*)sockaddr4;	// 0xa3ae15
+(id)lookupHost:(id)host port:(unsigned short)port error:(id*)error;	// 0xa3aac1
+(void)unscheduleCFStreams:(id)streams;	// 0xa39859
+(void)scheduleCFStreams:(id)streams;	// 0xa39705
+(void)cfstreamThread;	// 0xa39551
+(void)stopCFStreamThreadIfNeeded;	// 0xa39441
+(void)startCFStreamThreadIfNeeded;	// 0xa392d9
+(void)ignore:(id)ignore;	// 0xa392d5
+(id)gaiError:(int)error;	// 0xa2ff6d
-(void).cxx_destruct;	// 0xa3b261
-(SSLContextRef)sslContext;	// 0xa3aa91
-(BOOL)enableBackgroundingOnSocketWithCaveat;	// 0xa3aa59
-(BOOL)enableBackgroundingOnSocket;	// 0xa3aa21
-(BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)caveat;	// 0xa3a979
-(CFWriteStreamRef)writeStream;	// 0xa3a92d
-(CFReadStreamRef)readStream;	// 0xa3a8e1
-(int)socket6FD;	// 0xa3a8ad
-(int)socket4FD;	// 0xa3a879
-(int)socketFD;	// 0xa3a831
-(void)performBlock:(id)block;	// 0xa3a7f1
-(void)unmarkSocketQueueTargetQueue:(id)queue;	// 0xa3a7d9
-(void)markSocketQueueTargetQueue:(id)queue;	// 0xa3a7bd
-(BOOL)openStreams;	// 0xa3a40d
-(void)removeStreamsFromRunLoop;	// 0xa3a1ed
-(BOOL)addStreamsToRunLoop;	// 0xa39fc9
-(BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)streamCallbacksIncludingReadWrite;	// 0xa39b7d
-(BOOL)createReadAndWriteStream;	// 0xa399ad
-(void)cf_startTLS;	// 0xa38ea9
-(void)cf_abortSSLHandshake:(id)handshake;	// 0xa38e71
-(void)cf_finishSSLHandshake;	// 0xa38cfd
-(void)ssl_shouldTrustPeer:(BOOL)peer stateIndex:(int)index;	// 0xa38c81
-(void)ssl_continueSSLHandshake;	// 0xa38579
-(void)ssl_startTLS;	// 0xa36b71
-(long)sslWriteWithBuffer:(const void*)buffer length:(unsigned*)length;	// 0xa36aa9
-(long)sslReadWithBuffer:(void*)buffer length:(unsigned*)length;	// 0xa36889
-(void)maybeStartTLS;	// 0xa367b1
-(void)startTLS:(id)tls;	// 0xa365f1
-(void)doWriteTimeoutWithExtension:(double)extension;	// 0xa364f1
-(void)doWriteTimeout;	// 0xa36285
-(void)setupWriteTimerWithTimeout:(double)timeout;	// 0xa36129
-(void)endCurrentWrite;	// 0xa360e9
-(void)completeCurrentWrite;	// 0xa35eed
-(void)doWriteData;	// 0xa357ed
-(void)maybeDequeueWrite;	// 0xa355a1
-(float)progressOfWriteReturningTag:(long*)writeReturningTag bytesDone:(unsigned*)done total:(unsigned*)total;	// 0xa3532d
-(void)writeData:(id)data withTimeout:(double)timeout tag:(long)tag;	// 0xa351b9
-(void)doReadTimeoutWithExtension:(double)extension;	// 0xa350b9
-(void)doReadTimeout;	// 0xa34e4d
-(void)setupReadTimerWithTimeout:(double)timeout;	// 0xa34cf1
-(void)endCurrentRead;	// 0xa34cb1
-(void)completeCurrentRead;	// 0xa34939
-(void)doReadEOF;	// 0xa34639
-(void)doReadData;	// 0xa33659
-(void)flushSSLBuffers;	// 0xa3324d
-(void)maybeDequeueRead;	// 0xa32fa1
-(float)progressOfReadReturningTag:(long*)readReturningTag bytesDone:(unsigned*)done total:(unsigned*)total;	// 0xa32d31
-(void)readDataToData:(id)data withTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset maxLength:(unsigned)length tag:(long)tag;	// 0xa32b6d
-(void)readDataToData:(id)data withTimeout:(double)timeout maxLength:(unsigned)length tag:(long)tag;	// 0xa32b35
-(void)readDataToData:(id)data withTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset tag:(long)tag;	// 0xa32ae1
-(void)readDataToData:(id)data withTimeout:(double)timeout tag:(long)tag;	// 0xa32aa9
-(void)readDataToLength:(unsigned)length withTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset tag:(long)tag;	// 0xa32911
-(void)readDataToLength:(unsigned)length withTimeout:(double)timeout tag:(long)tag;	// 0xa328dd
-(void)readDataWithTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset maxLength:(unsigned)length tag:(long)tag;	// 0xa32749
-(void)readDataWithTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset tag:(long)tag;	// 0xa32711
-(void)readDataWithTimeout:(double)timeout tag:(long)tag;	// 0xa326dd
-(void)resumeWriteSource;	// 0xa326a1
-(void)suspendWriteSource;	// 0xa32665
-(void)resumeReadSource;	// 0xa32629
-(void)suspendReadSource;	// 0xa325ed
-(BOOL)usingSecureTransportForTLS;	// 0xa325cd
-(BOOL)usingCFStreamForTLS;	// 0xa325ad
-(void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)newlyConnectedSocket;	// 0xa32271
-(void)getInterfaceAddress4:(id*)a4 address6:(id*)a6 fromDescription:(id)description port:(unsigned short)port;	// 0xa31ddd
-(unsigned short)localPortFromSocket6:(int)socket6;	// 0xa31569
-(unsigned short)localPortFromSocket4:(int)socket4;	// 0xa31505
-(id)localHostFromSocket6:(int)socket6;	// 0xa314b1
-(id)localHostFromSocket4:(int)socket4;	// 0xa31441
-(unsigned short)connectedPortFromSocket6:(int)socket6;	// 0xa313f9
-(unsigned short)connectedPortFromSocket4:(int)socket4;	// 0xa31395
-(id)connectedHostFromSocket6:(int)socket6;	// 0xa31341
-(id)connectedHostFromSocket4:(int)socket4;	// 0xa312d1
-(unsigned short)localPort6;	// 0xa312a1
-(unsigned short)localPort4;	// 0xa31271
-(id)localHost6;	// 0xa31235
-(id)localHost4;	// 0xa311f9
-(unsigned short)connectedPort6;	// 0xa311c9
-(unsigned short)connectedPort4;	// 0xa31199
-(id)connectedHost6;	// 0xa3115d
-(id)connectedHost4;	// 0xa31121
-(id)otherError:(id)error;	// 0xa306f1
-(id)connectionClosedError;	// 0xa30609
-(id)writeTimeoutError;	// 0xa30521
-(id)readTimeoutError;	// 0xa30439
-(id)readMaxedOutError;	// 0xa30351
-(id)connectTimeoutError;	// 0xa30269
-(id)sslError:(long)error;	// 0xa301e1
-(id)errnoError;	// 0xa30115
-(id)errnoErrorWithReason:(id)reason;	// 0xa30025
-(id)badParamError:(id)error;	// 0xa2fef1
-(id)badConfigError:(id)error;	// 0xa2fe75
-(void)maybeClose;	// 0xa2fce9
-(void)disconnectAfterReadingAndWriting;	// 0xa2fc39
-(void)disconnectAfterWriting;	// 0xa2fb89
-(void)disconnectAfterReading;	// 0xa2fad9
-(void)disconnect;	// 0xa2fa01
-(void)closeWithError:(id)error;	// 0xa2f52d
-(void)doConnectTimeout;	// 0xa2f4dd
-(void)endConnectTimeout;	// 0xa2f46d
-(void)startConnectTimeout:(double)timeout;	// 0xa2f311
-(void)didNotConnect:(int)connect error:(id)error;	// 0xa2f201
-(void)didConnect:(int)connect;	// 0xa2ebc9
-(BOOL)connectWithAddress4:(id)address4 address6:(id)a6 error:(id*)error;	// 0xa2e651
-(void)lookup:(int)lookup didFail:(id)fail;	// 0xa2e531
-(void)lookup:(int)lookup didSucceedWithAddress4:(id)address4 address6:(id)a6;	// 0xa2e2b1
-(BOOL)connectToAddress:(id)address viaInterface:(id)interface withTimeout:(double)timeout error:(id*)error;	// 0xa2de59
-(BOOL)connectToAddress:(id)address withTimeout:(double)timeout error:(id*)error;	// 0xa2de29
-(BOOL)connectToAddress:(id)address error:(id*)error;	// 0xa2ddf5
-(BOOL)connectToHost:(id)host onPort:(unsigned short)port viaInterface:(id)interface withTimeout:(double)timeout error:(id*)error;	// 0xa2d565
-(BOOL)connectToHost:(id)host onPort:(unsigned short)port withTimeout:(double)timeout error:(id*)error;	// 0xa2d531
-(BOOL)connectToHost:(id)host onPort:(unsigned short)port error:(id*)error;	// 0xa2d4f9
-(BOOL)preConnectWithInterface:(id)interface error:(id*)error;	// 0xa2d19d
-(BOOL)doAccept:(int)accept;	// 0xa2ce01
-(BOOL)acceptOnInterface:(id)interface port:(unsigned short)port error:(id*)error;	// 0xa2c311
-(BOOL)acceptOnPort:(unsigned short)port error:(id*)error;	// 0xa2c2ed
-(void)synchronouslySetDelegate:(id)delegate delegateQueue:(id)queue;	// 0xa2ba99
-(void)setDelegate:(id)delegate delegateQueue:(id)queue;	// 0xa2ba61
-(void)setDelegate:(id)delegate delegateQueue:(id)queue synchronously:(BOOL)synchronously;	// 0xa2b90d
-(void)getDelegate:(id*)delegate delegateQueue:(id*)queue;	// 0xa2b73d
-(void)synchronouslySetDelegateQueue:(id)queue;	// 0xa2b729
-(void)setDelegateQueue:(id)queue synchronously:(BOOL)synchronously;	// 0xa2b60d
-(void)synchronouslySetDelegate:(id)delegate;	// 0xa2b4cd
-(void)setDelegate:(id)delegate synchronously:(BOOL)synchronously;	// 0xa2b3b1
-(void)dealloc;	// 0xa2b13d
-(id)initWithDelegate:(id)delegate delegateQueue:(id)queue socketQueue:(id)queue3;	// 0xa2acc5
-(id)initWithDelegate:(id)delegate delegateQueue:(id)queue;	// 0xa2ac89
-(id)initWithSocketQueue:(id)socketQueue;	// 0xa2ac69
-(id)init;	// 0xa2ac45
@end

