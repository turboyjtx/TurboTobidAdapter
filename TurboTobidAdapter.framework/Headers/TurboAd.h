//
//  TurboAd.h
//  TurboTobidAdapter
//
//  Created by turbo on 2025/5/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TurboAd : NSObject

+ (instancetype)sharedInstance;

//获取版本号
+ (void)getSDKVerson;

//初始化
- (void)init:(NSString *)appID;

@end

NS_ASSUME_NONNULL_END
