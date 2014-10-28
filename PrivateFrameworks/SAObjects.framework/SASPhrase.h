/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SASPhrase : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSArray * interpretations;
@property BOOL lowConfidence;
@property BOOL speechRepairApplied;
@property(readonly) Class superclass;

+ (id)phrase;
+ (id)phraseWithDictionary:(id)arg1 context:(id)arg2;

- (id)af_speechInterpretations;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interpretations;
- (BOOL)lowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setLowConfidence:(BOOL)arg1;
- (void)setSpeechRepairApplied:(BOOL)arg1;
- (BOOL)speechRepairApplied;

@end