/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STGenericIntent : NSObject <NSCoding> {
    BOOL  _appInForeground;
    NSString * _attributes;
    BOOL  _finishedState;
    BOOL  _handled;
    STGenericIntentRequest * _intentRequest;
    BOOL  _isLaunch;
    NSString * _name;
    NSMutableDictionary * _parameters;
    AFSiriTask * _siriTask;
    NSString * _utterance;
}

@property (nonatomic) BOOL appInForeground;
@property (nonatomic, copy) NSString *attributes;
@property (nonatomic) BOOL finishedState;
@property (nonatomic) BOOL handled;
@property (nonatomic, retain) STGenericIntentRequest *intentRequest;
@property (nonatomic) BOOL isLaunch;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableDictionary *parameters;
@property (nonatomic, retain) AFSiriTask *siriTask;
@property (nonatomic, copy) NSString *utterance;

- (void).cxx_destruct;
- (void)addParam:(id)arg1 withValue:(id)arg2;
- (BOOL)appInForeground;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (void)finished;
- (BOOL)finishedState;
- (id)getDateRangeParameter:(id)arg1;
- (id)getGroupParameter:(id)arg1;
- (id)getPersonParameter:(id)arg1;
- (id)getPlacesParameter:(id)arg1;
- (id)getTopicParameter:(id)arg1;
- (void)handleWithProgress:(int)arg1;
- (BOOL)handled;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)intentRequest;
- (BOOL)isLaunch;
- (id)name;
- (id)parameters;
- (void)setAppInForeground:(BOOL)arg1;
- (void)setAttributes:(id)arg1;
- (void)setFinishedState:(BOOL)arg1;
- (void)setHandled:(BOOL)arg1;
- (void)setIntentRequest:(id)arg1;
- (void)setIsLaunch:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setSiriTask:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)siriTask;
- (id)utterance;

@end
