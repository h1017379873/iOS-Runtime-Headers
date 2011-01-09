/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLCDSubImageView, TPLCDTextView;



@interface TPLCDView : TPLCDBar 
{
    TPLCDTextView *_textView;
    TPLCDTextView *_secondLineTextView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled : 1;
}

+ (float)textFontSize;
+ (float)labelFontSize;
+ (void)_initializeSafeCategory;

- (void)setContentsAlpha:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text1Frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text2Frame;
- (void)setSecondLineText:(id)arg1;
- (id)secondLineText;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (void)blinkLabel;
- (id)subImage;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)setShadowColor:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setSubImage:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end