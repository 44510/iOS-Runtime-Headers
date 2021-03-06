/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTokenDistanceMappingTransformer : NSObject <PMLTransformerProtocol> {
    unsigned long long  _maxDistance;
    NSString * _targetString;
}

@property (nonatomic) unsigned long long maxDistance;
@property (nonatomic, retain) NSString *targetString;

+ (bool)debugAppendText:(id)arg1;
+ (void)debugSetContext:(id)arg1;
+ (void)debugStoreContext;
+ (id)transformArray:(id)arg1 withTargetIndex:(unsigned long long)arg2 maximumDistance:(unsigned long long)arg3;
+ (id)withTarget:(id)arg1 maxDistance:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 maxDistance:(unsigned long long)arg2;
- (unsigned long long)maxDistance;
- (void)setMaxDistance:(unsigned long long)arg1;
- (void)setTargetString:(id)arg1;
- (id)targetString;
- (id)transform:(id)arg1;

@end
