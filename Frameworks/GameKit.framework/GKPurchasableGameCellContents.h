/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKStarRatingView, GKUITheme, GKGame;



@interface GKPurchasableGameCellContents : GKMultilineCellContentView 
{
    GKGame *_game;
    GKStarRatingView *_ratingView;
    GKUITheme *_theme;
}

@property(retain) GKUITheme *theme;
@property(retain) GKStarRatingView *ratingView;
@property(retain) GKGame *game;

+ (id)purchasableGameCellContentsWithTheme:(id)arg1;

- (void)setTheme:(id)arg1;
- (id)theme;
- (id)ratingView;
- (void)setRatingView:(id)arg1;
- (void)drawLineIndex:(NSUInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 highlighted:(BOOL)arg3;
- (id)game;
- (void)setGame:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;

@end