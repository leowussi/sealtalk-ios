//
//  RCDGroupManagerCell.h
//  SealTalk
//
//  Created by 张改红 on 2019/6/18.
//  Copyright © 2019 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
static NSString *RCDGroupManagerCellIdentifier = @"RCDGroupManagerCellIdentifier";
@protocol RCDGroupManagerCellDelegate <NSObject>
-(void)didSelectUserId:(NSString *)userId;

@end

@interface RCDGroupManagerCell : UITableViewCell
+ (instancetype)cellWithTableView:(UITableView *)tableView;
@property (nonatomic, weak) id<RCDGroupManagerCellDelegate> delegate;
- (void)setDataModel:(NSString *)userId;
- (void)deleteButtonShow;
@end

NS_ASSUME_NONNULL_END