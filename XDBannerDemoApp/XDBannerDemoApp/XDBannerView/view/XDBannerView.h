//
//  XDBannerView.h
//  XDBannerDemoApp
//
//  Created by 1xd' mac on 2020/3/20.
//  Copyright © 2020 1xd' mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XDBannerPictureModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface XDBannerView : UIView

#pragma mark - Normal initial function with complex initail type of picture and offer click callback

/// use array of XDBannerPictureModel - instaces and frame to initialize a banner instance
/// @param picModelArr array of XDBannerPictureModel - instaces
/// @param bannerFrame frame of this banner
- (instancetype)initWithPicModel:(NSArray<XDBannerPictureModel *> *)picModelArr frame:(CGRect)bannerFrame;

#pragma mark - Simple initial function without function of clicking picture

/// use array of link and frame to initialize a banner instance
/// @param picLinks picture url for downloading
/// @param bannerFrame frame of this banner
- (instancetype)initWithPictureLinks:(NSArray<NSString *> *)picLinks frame:(CGRect)bannerFrame;

/// use array of UIImage instance and frame to initialize a banner instance
/// @param imgs array of UIImage instance
/// @param bannerFrame frame of this banner
- (instancetype)initWithImages:(NSArray<UIImage *> *)imgs frame:(CGRect)bannerFrame;

/// use array of NSData instance and frame to initialize a banner instance
/// @param dataArr array of NSData instance
/// @param bannerFrame frame of this banner
- (instancetype)initWithDataArray:(NSArray<NSData *> *)dataArr frame:(CGRect)bannerFrame;

@end

NS_ASSUME_NONNULL_END
