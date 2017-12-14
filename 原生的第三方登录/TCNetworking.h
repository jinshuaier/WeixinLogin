//
//  TCNetworking.h
//  顺道嘉商家版
//
//  Created by GeYang on 2016/12/5.
//  Copyright © 2016年 北京同创共享网络科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TCNetworking : NSObject
//基础POST请求
+ (void)postWithTcUrlString:(NSString *)urlString
                   paramter:(id)paramter
                    success:(void(^)(NSString *jsonStr, NSDictionary *jsonDic))success
                    failure:(void (^)(NSError *error))failure;
@end
