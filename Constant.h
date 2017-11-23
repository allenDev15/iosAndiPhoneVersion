//
//  Constant.h
//  iosAndiPhoneVersion
//
//  Created by dev on 2017/11/23.
//  Copyright © 2017年 licong_allen. All rights reserved.
//

#ifndef Constant_h
#define Constant_h

/**iphone4 or ipad（the app not adaptation for ipad）*/
#define IPHONE4_OR_SAME_RADIO_DEVICE   (fabs(([[UIScreen mainScreen] bounds].size.width/2) - ([[UIScreen mainScreen] bounds].size.height/3)) < 0.000001 ? YES : NO)

/**iphone 5*/
#define iPhone5  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/**ios 7*/
#define IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0 && [[[UIDevice currentDevice] systemVersion] floatValue] < 8.0 ? YES : NO)

/**ios 8*/
#define IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0 && [[[UIDevice currentDevice] systemVersion] floatValue] < 9.0 ? YES : NO)

/**ios 9*/
#define IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0 && [[[UIDevice currentDevice] systemVersion] floatValue] < 10.0 ? YES : NO)

#define IOS7_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IOS8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define IOS9_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)

#endif /* Constant_h */
