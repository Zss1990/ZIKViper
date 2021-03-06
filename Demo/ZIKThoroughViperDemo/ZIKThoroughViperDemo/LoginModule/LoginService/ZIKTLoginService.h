//
//  ZIKTLoginService.h
//  ZIKTViperDemo
//
//  Created by zuik on 2017/7/15.
//  Copyright © 2017年 zuik. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class ZIKTUserModel;
@interface ZIKTLoginService : NSObject
+ (instancetype)sharedInstance;
- (nullable ZIKTUserModel *)loginedUser;
- (void)loginWithAccount:(NSString *)account
                password:(NSString *)password
              success:(void(^_Nullable)(void))successHandler
                error:(void(^_Nullable)(void))errorHandler;
@end

NS_ASSUME_NONNULL_END
