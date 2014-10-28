/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKNotifiableEventsPredicate : NSPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)predicate;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPropertiesToLoad;
- (BOOL)evaluateWithObject:(id)arg1;
- (BOOL)shouldLoadDefaultProperties;

@end