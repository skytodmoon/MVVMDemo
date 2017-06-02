//
//  DYBaseTableViewController.h
//  DYPlayNews
//
//  Created by 袁斌 on 2017/6/2.
//  Copyright © 2017年 https://github.com/DefaultYuan. All rights reserved.
//

#import "DYBaseViewController.h"

@protocol DYBaseTableViewProtocol <NSObject>

@required
- (UITableView *)tableView;

@end

@interface DYBaseTableViewController : DYBaseViewController<UITableViewDelegate, UITableViewDataSource>

@end
