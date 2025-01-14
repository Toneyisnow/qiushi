//
//  PurchaseInViewController.h
//  qiushi
//
//  Created by xyxd mac on 12-8-31.
//  Copyright (c) 2012年 XYXD. All rights reserved.
//

#import "ViewController.h"

#import <StoreKit/StoreKit.h>

#define ProductID_IAP0p99 @"com.xyxd.qiushis.qcgg"//$0.99
#define ProductID_IAP1p99 @"com.xyxd.qiushis.kafeis" //$1.99
#define ProductID_IAP4p99 @"com.xyxd.qiushis.yinbis" //$4.99
#define ProductID_IAP9p99 @"com.xyxd.qiushis.jinbi" //$19.99



enum{
    IAP0p99=10,
    IAP1p99,
    IAP4p99,
    IAP9p99,
    IAP24p99,
}buyCoinsTag;

@interface PurchaseInViewController : ViewController<SKProductsRequestDelegate,SKPaymentTransactionObserver,UITableViewDataSource,UITableViewDelegate>
{
    SKProductsRequest *request;
    int buyType;
}

@property (unsafe_unretained, nonatomic) IBOutlet UITableView *mTableView;

@end
