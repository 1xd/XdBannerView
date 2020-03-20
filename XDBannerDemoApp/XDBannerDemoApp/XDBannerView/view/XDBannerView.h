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

/// use array of XDBannerPictureModel - instaces and frame to initialize a banner instance
/// @param picModelArr array of XDBannerPictureModel - instaces
/// @param bannerFrame frame of this banner
- (instancetype)initWithPicModel:(NSArray<XDBannerPictureModel *> *)picModelArr frame:(CGRect)bannerFrame;

@end

NS_ASSUME_NONNULL_END
