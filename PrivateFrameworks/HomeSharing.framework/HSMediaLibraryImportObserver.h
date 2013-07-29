/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSTimer, <HSMediaLibraryImportObserverDelegate>;

@interface HSMediaLibraryImportObserver : NSObject  {
    NSTimer *_updateTimer;
    unsigned int _consecutiveUpdateFailures;
    BOOL _stopped;
    BOOL _updating;
    <HSMediaLibraryImportObserverDelegate> *_delegate;
    double _updateInterval;
}

@property <HSMediaLibraryImportObserverDelegate> * delegate;
@property(getter=isUpdating,readonly) BOOL updating;
@property double updateInterval;


- (void)beginUpdating;
- (void)_updateImportStatus:(id)arg1;
- (BOOL)isUpdating;
- (void)stopUpdating;
- (id)init;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end