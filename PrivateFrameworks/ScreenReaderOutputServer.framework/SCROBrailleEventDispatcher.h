/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleEventDispatcher : NSObject {
    NSMutableArray * _brailleEventQueue;
    bool  _isValid;
    struct __CFArray { } * _queue;
    NSLock * _queueLock;
    struct __CFRunLoopSource { } * _queueSource;
    struct __CFRunLoop { } * _runLoop;
    id  _target;
}

- (void)_processQueue;
- (void)dealloc;
- (void)enqueueEvent:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (void)start;

@end
