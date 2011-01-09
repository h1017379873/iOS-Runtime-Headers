/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, UIView, UIColor, UIToolbarButtonBadge, UISelectionIndicatorView;



@interface UIToolbarButton : UIControl 
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    UIView *_info;
    UILabel *_label;
    UIToolbarButtonBadge *_badge;
    UISelectionIndicatorView *_selectedIndicator;
    NSInteger _barStyle;
    NSInteger _style;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _glowAdjust;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    BOOL _bezel;
    float _width;
    float _labelHeight;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _infoInsets;
    UIColor *_tintColor;
    BOOL _isAnimatedTrashButton;
    BOOL _imageIsBackground;
    id _customToolbarAppearance;
}

@property(getter=isAnimatedTrashButton) BOOL animatedTrashButton;

+ (id)_defaultLabelFont;
+ (id)_defaultLabelColor;
+ (id)_pushButtonWithBarStyle:(NSInteger)arg1 withStyle:(NSInteger)arg2 withTintColor:(id)arg3;
+ (void)_adjustPushButton:(id)arg1 withBarStyle:(NSInteger)arg2 withStyle:(NSInteger)arg3 withTintColor:(id)arg4 isMinibar:(BOOL)arg5;
+ (void)_initializeSafeCategory;

- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 labelHeight:(float)arg4 withBarStyle:(NSInteger)arg5 withStyle:(NSInteger)arg6 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg7 possibleTitles:(id)arg8 withTintColor:(id)arg9 bezel:(BOOL)arg10 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg11 glowInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg12;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 highlightImage:(id)arg3 label:(id)arg4 labelHeight:(float)arg5 withBarStyle:(NSInteger)arg6 withStyle:(NSInteger)arg7 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg8 possibleTitles:(id)arg9 withTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg12 glowInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg13 imageIsBackground:(BOOL)arg14;
- (void)setSizesToFitImage:(BOOL)arg1;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 selectedTitle:(id)arg3;
- (void)_setButtonBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_buttonBarHitRect;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (void)setUseSelectedImage:(BOOL)arg1;
- (void)_positionBadge;
- (void)_setBadgeValue:(id)arg1;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setInfoWidth:(float)arg1;
- (void)_adjustPushButton:(BOOL)arg1;
- (BOOL)_isBordered;
- (void)_setOn:(BOOL)arg1;
- (BOOL)_isOn;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2;
- (void)_setBarHeight:(float)arg1;
- (BOOL)_useBarHeight;
- (void)_adjustPushButtonWithBarStyle:(NSInteger)arg1 withTintColor:(id)arg2 isMinibar:(BOOL)arg3;
- (void)_setCustomToolbarAppearance:(id)arg1;
- (BOOL)isAnimatedTrashButton;
- (void)setAnimatedTrashButton:(BOOL)arg1;
- (void)_setSelected:(BOOL)arg1;
- (id)_info;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)setEnabled:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;

@end