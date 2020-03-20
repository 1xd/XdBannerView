//
//  XDBannerView.m
//  XDBannerDemoApp
//
//  Created by 1xd' mac on 2020/3/20.
//  Copyright © 2020 1xd' mac. All rights reserved.
//

#import "XDBannerView.h"

@interface XDBannerView ()

/// picture models
@property (nonatomic, copy) NSArray<XDBannerPictureModel *> *picModelArr;

@end

@implementation XDBannerView

- (instancetype)initWithPicModel:(NSArray<XDBannerPictureModel *> *)picModelArr frame:(CGRect)bannerFrame {
    if (self = [super initWithFrame:bannerFrame]) {
        
    }
    return self;
}

@end
