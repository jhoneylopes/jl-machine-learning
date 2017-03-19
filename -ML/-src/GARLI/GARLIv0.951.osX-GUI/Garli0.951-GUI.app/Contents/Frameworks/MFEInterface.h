@protocol MFEInterface

- (oneway void)reportProgress:(NSDictionary *)progressDict;
- (oneway void)didBeginInitializingSearch;
- (oneway void)didBeginRun;
- (oneway void)didBeginBranchOptimization;
- (oneway void)reportFinalScore:(double)score;
- (oneway void)didBeginBootstrapReplicate:(int)repNumber;
- (oneway void)didCompleteBoostrapReplicate:(int)repNumber;
- (oneway void)didEncounterError:(NSString *)errorMessage;
- (BOOL)programShouldTerminate;
@end
