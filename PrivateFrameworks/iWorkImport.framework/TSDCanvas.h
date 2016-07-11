/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCanvas : NSObject {
    NSSet * mAllReps;
    bool  mAllowsFontSubpixelQuantization;
    struct CGColor { } * mBackgroundColor;
    NSMutableArray * mBlocksToPerform;
    NSObject<OS_dispatch_queue> * mBlocksToPerformAccessQueue;
    TSDInteractiveCanvasController * mCanvasController;
    bool  mClipToCanvas;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  mContentInset;
    double  mContentsScale;
    <TSDCanvasDelegate> * mDelegate;
    bool  mIgnoringClickThrough;
    bool  mInLayout;
    NSArray * mInfos;
    struct { 
        unsigned int layout : 1; 
        unsigned int reps : 1; 
        unsigned int visibleBounds : 1; 
        unsigned int layers : 1; 
    }  mInvalidFlags;
    bool  mIsTemporaryForLayout;
    TSDLayoutController * mLayoutController;
    NSArray * mPreviouslyVisibleLayouts;
    struct __CFDictionary { } * mRepsByLayout;
    bool  mSuppressesShadowsAndReflections;
    NSArray * mTopLevelReps;
    struct CGSize { 
        double width; 
        double height; 
    }  mUnscaledSize;
    double  mViewScale;
}

@property (nonatomic, readonly) TSKAccessController *accessController;
@property (nonatomic) bool allowsFontSubpixelQuantization;
@property (nonatomic) struct CGColor { }*backgroundColor;
@property (nonatomic, readonly) TSDInteractiveCanvasController *canvasController;
@property (nonatomic, readonly) TSKChangeNotifier *changeNotifier;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) <TSDCanvasDelegate> *delegate;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (nonatomic, copy) NSArray *infosToDisplay;
@property (nonatomic, readonly) bool isCanvasInteractive;
@property (nonatomic, readonly) bool isTemporaryForLayout;
@property (nonatomic, readonly) TSDLayoutController *layoutController;
@property (nonatomic, readonly) TSPObjectContext *objectContext;
@property (nonatomic, readonly) bool supportsAdaptiveLayout;
@property (nonatomic) bool suppressesShadowsAndReflections;
@property (nonatomic) struct CGSize { double x1; double x2; } unscaledSize;
@property (nonatomic) double viewScale;

- (id)accessController;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)allReps;
- (bool)allowsFontSubpixelQuantization;
- (struct CGColor { }*)backgroundColor;
- (id)canvasController;
- (id)changeNotifier;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (double)contentsScale;
- (struct CGPoint { double x1; double x2; })convertBoundsToUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertBoundsToUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertBoundsToUnscaledSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertUnscaledToBoundsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertUnscaledToBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)documentRoot;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 inTopLevelReps:(id)arg2 smallRepOutset:(double)arg3 passingTest:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_clipRectForCreatingRepsFromLayouts;
- (void)i_clipsImagesToBounds:(bool)arg1;
- (struct CGContext { }*)i_createContextToDrawImageInScaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTargetIntegralSize:(struct CGSize { double x1; double x2; })arg2 returningBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 integralBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 forceSRGB:(bool)arg5;
- (void)i_drawBackgroundInContext:(struct CGContext { }*)arg1;
- (void)i_drawBackgroundInContext:(struct CGContext { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)i_drawRepsInContext:(struct CGContext { }*)arg1;
- (void)i_drawRepsInContext:(struct CGContext { }*)arg1 distort:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CGImage { }*)i_image;
- (struct CGImage { }*)i_imageInScaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceSRGB:(bool)arg2;
- (struct CGImage { }*)i_imageInScaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTargetIntegralSize:(struct CGSize { double x1; double x2; })arg2 distortedToMatch:(bool)arg3 forceSRGB:(bool)arg4;
- (bool)i_needsLayout;
- (struct CGImage { }*)i_newImageInContext:(struct CGContext { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 integralBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 distortedToMatch:(bool)arg4;
- (void)i_performBlockWhileIgnoringClickThrough:(id /* block */)arg1;
- (void)i_registerRep:(id)arg1;
- (void)i_setCanvasController:(id)arg1;
- (void)i_setContentsScale:(double)arg1;
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(bool)arg2;
- (bool)i_shouldIgnoreClickThrough;
- (void)i_unregisterRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_unscaledRectOfLayouts;
- (void)i_updateInfosInLayoutController;
- (id)infosToDisplay;
- (id)init;
- (id)initForTemporaryLayout;
- (id)initWithLayoutControllerClass:(Class)arg1 delegate:(id)arg2;
- (void)invalidateLayers;
- (void)invalidateReps;
- (void)invalidateVisibleBounds;
- (bool)isCanvasInteractive;
- (bool)isDrawingIntoPDF;
- (bool)isPrinting;
- (bool)isRenderingForKPF;
- (bool)isTemporaryForLayout;
- (id)layoutController;
- (void)layoutIfNeeded;
- (void)layoutInvalidated;
- (id)objectContext;
- (void)orderRepsForLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_bounds;
- (bool)p_expandHitRegionOfPoint:(struct CGPoint { double x1; double x2; })arg1 forRep:(id)arg2 smallRepOutset:(double)arg3 forShortestDistance:(double*)arg4;
- (void)p_layoutWithReadLock;
- (void)p_removeAllReps;
- (bool)p_shouldRep:(id)arg1 countAsClosestSmallRepForSizeLimit:(double)arg2;
- (bool)p_updateRepsFromLayouts;
- (void)performBlockAfterLayoutIfNecessary:(id /* block */)arg1;
- (void)recreateAllLayoutsAndReps;
- (id)repForLayout:(id)arg1;
- (Class)rootLayoutClass;
- (void)setAllowsFontSubpixelQuantization:(bool)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfosToDisplay:(id)arg1;
- (void)setSuppressesShadowsAndReflections:(bool)arg1;
- (void)setUnscaledSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewScale:(double)arg1;
- (bool)shouldShowInstructionalText;
- (bool)shouldShowTextOverflowGlyphs;
- (bool)shouldSuppressBackgrounds;
- (bool)spellCheckingSupported;
- (bool)spellCheckingSuppressed;
- (bool)supportsAdaptiveLayout;
- (bool)suppressesShadowsAndReflections;
- (void)teardown;
- (id)textRendererForLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (id)topLevelReps;
- (struct CGSize { double x1; double x2; })unscaledSize;
- (double)viewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleUnscaledRectForClippingReps;
- (bool)wantsEditingLayoutsForOffscreenInfos;

@end