/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDPivotTable;

@interface EPPivotTableStyleFlattener : EPStyleFlattener  {
    EDPivotTable *mPivotTable;
    long mFirstHeaderRow;
    long mFirstDataRow;
    long mFirstDataColumn;
    unsigned int mRowFieldsCount;
    unsigned int mColumnFieldsCount;
    unsigned int mPageFieldsCount;
}


- (unsigned int)constrainLevel:(unsigned int)arg1;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (id)styleFromObject:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (void)addSubtotalColumnLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addColumnSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addSubtotalRowLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addRowSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (int)stripeOffset:(int)arg1 row:(bool)arg2;
- (bool)isObjectSupported:(id)arg1;
- (void)clearCache;

@end