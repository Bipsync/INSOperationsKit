//
//  INSChainableOperationProtocol.h
//  INSOperationsKit Demo
//
//  Created by Michal Zaborowski on 07.09.2015.
//  Copyright © 2015 Michal Zaborowski. All rights reserved.
//

@protocol INSChainableOperationProtocol
- (void)chainedOperation:(NSOperation *)operation didFinishWithErrors:(NSArray *)errors;
@end
