//
//  INSChainOperation.h
//  INSOperationsKit Demo
//
//  Created by Michal Zaborowski on 07.09.2015.
//  Copyright © 2015 Michal Zaborowski. All rights reserved.
//

#import <INSOperationsKit/INSOperationsKit.h>
#import "INSChainableOperationProtocol.h"

/**
 A subclass of `Operation` that executes zero or more operations as part of its
 own execution in serial queue, each opearation is passing data to next one. 
 This class of operation is very useful for abstracting several
 smaller operations into a larger operation. As an example, the `INSDownloadOperation`
 is composed of both a `INSParseOperation`.
 
 INSChainOperation is simmilar to INSGroupOpeartion but you don't need to establish
 dependencies between opearions and you are not responsible to pass data between them.

 */
@interface INSChainOperation : INSOperation
@property (nonatomic, assign) BOOL finishIfProducedAnyError;
+ (instancetype)operationWithOperations:(NSArray <NSOperation <INSChainableOperationProtocol> *>*)operations;
- (instancetype)initWithOperations:(NSArray <NSOperation <INSChainableOperationProtocol> *>*)operations;
- (void)addOperation:(NSOperation *)operation;
- (void)operationDidFinish:(NSOperation *)operation withErrors:(NSArray *)errors;
- (void)aggregateError:(NSError *)error;
@end
