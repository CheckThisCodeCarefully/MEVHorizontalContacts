//
//  MEVHorizontalContactsCell.h
//  People Tracker
//
//  https://github.com/manuelescrig/MEVHorizontalContacts
//
//  Created by Manuel Escrig Ventura on 24/02/16.
//  Copyright (c) 2016 Manuel Escrig Ventura. All rights reserved.
//  Licence: MIT-Licence
//

@import UIKit;

#import "MEVHorizontalContactsModel.h"


@protocol MEVHorizontalContactsCellDataSource <NSObject>

@required

- (NSInteger)numberOfItemsInCellIndexPath:(NSIndexPath *)indexPath;

- (NSString *)textForItemAtIndex:(NSInteger)index atCellIndexPath:(NSIndexPath *)indexPath;

- (UIImage *)imageForItemAtIndex:(NSInteger)index atCellIndexPath:(NSIndexPath *)indexPath;

- (CGFloat)heightForLabel;

- (CGFloat)itemSpacing;

@optional

- (UIColor *)textColorForItemAtIndex:(NSInteger)index atCellIndexPath:(NSIndexPath *)indexPath;

- (UIColor *)backgroundColorForItemAtIndex:(NSInteger)index atCellIndexPath:(NSIndexPath *)indexPath;

- (UIColor *)tintColorForItemAtIndex:(NSInteger)index atCellIndexPath:(NSIndexPath *)indexPath;

@end


@protocol MEVHorizontalContactsCellDelegate <NSObject>

- (void)cellSelectedAtIndexPath:(NSIndexPath *)indexPath;

- (void)menuOptionSelected:(NSInteger)option atCellIndexPath:(NSIndexPath *)indexPath;

@end


@interface MEVHorizontalContactsCell : UICollectionViewCell

@property (nonatomic, strong) NSIndexPath *cellIndexPath;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UILabel *label;
@property (nonatomic, strong) MEVHorizontalContactsModel *contact;
@property (nonatomic, weak) id<MEVHorizontalContactsCellDelegate> cellDelegate;
@property (nonatomic, weak) id<MEVHorizontalContactsCellDataSource> cellDataSource;

@property (nonatomic, assign) CGFloat labelHeight;
@property (nonatomic, assign) CGFloat itemSpacing;

- (void)showMenuOptions;

- (void)hideMenuOptions;

- (void)setContactModel:(MEVHorizontalContactsModel *)contact;


@end
