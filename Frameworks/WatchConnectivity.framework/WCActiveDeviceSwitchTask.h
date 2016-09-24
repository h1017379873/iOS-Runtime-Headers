/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCActiveDeviceSwitchTask : NSObject {
    BOOL  _clientReadyForSessionState;
    unsigned int  _taskState;
}

@property BOOL clientReadyForSessionState;
@property unsigned int taskState;

+ (id)taskStateToString:(unsigned int)arg1;

- (BOOL)clientReadyForSessionState;
- (id)description;
- (void)setClientReadyForSessionState:(BOOL)arg1;
- (void)setTaskState:(unsigned int)arg1;
- (unsigned int)taskState;

@end