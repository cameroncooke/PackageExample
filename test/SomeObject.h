//
//  SomeObject.h
//  test
//
//  Created by Cameron Cooke on 19/01/2021.
//

#import <Foundation/Foundation.h>

@import TestPackage;

NS_ASSUME_NONNULL_BEGIN

@interface SomeObject : NSObject

@property (nonatomic, assign) BOOL isEnabled;

- (void)setObject:(TestClass *)testObj;

@end

NS_ASSUME_NONNULL_END
