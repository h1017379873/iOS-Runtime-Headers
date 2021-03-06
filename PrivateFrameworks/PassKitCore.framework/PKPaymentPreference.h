/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPreference : NSObject {
    NSString * _footer;
    BOOL  _isReadOnly;
    NSArray * _preferences;
    unsigned int  _selectedIndex;
    BOOL  _supportsDeletion;
    NSString * _title;
}

@property (nonatomic, copy) NSString *footer;
@property (nonatomic) BOOL isReadOnly;
@property (nonatomic, copy) NSArray *preferences;
@property (nonatomic) unsigned int selectedIndex;
@property (nonatomic, readonly) BOOL supportsDeletion;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)footer;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned int)arg3 readOnly:(BOOL)arg4;
- (BOOL)isReadOnly;
- (id)preferences;
- (unsigned int)selectedIndex;
- (void)setFooter:(id)arg1;
- (void)setIsReadOnly:(BOOL)arg1;
- (void)setPreferences:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)supportsDeletion;
- (id)title;

@end
