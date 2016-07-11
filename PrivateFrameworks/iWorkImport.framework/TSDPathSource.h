/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPathSource : NSObject <NSCopying, TSDMixing> {
    bool  mHorizontalFlip;
    bool  mVerticalFlip;
}

@property (getter=isClosed, nonatomic, readonly) bool closed;
@property bool hasHorizontalFlip;
@property bool hasVerticalFlip;

+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)pathSourceWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;

- (id)bezierPath;
- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasHorizontalFlip;
- (bool)hasVerticalFlip;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (id)interiorWrapPath;
- (bool)isCircular;
- (bool)isClosed;
- (bool)isEqual:(id)arg1;
- (bool)isRectangular;
- (bool)isRectangularForever;
- (void)loadSharedFromArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pathFlipTransform;
- (Class)preferredControllerClass;
- (void)saveSharedToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (void)scaleToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasHorizontalFlip:(bool)arg1;
- (void)setHasVerticalFlip:(bool)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (id)valueForSetSelector:(SEL)arg1;

@end