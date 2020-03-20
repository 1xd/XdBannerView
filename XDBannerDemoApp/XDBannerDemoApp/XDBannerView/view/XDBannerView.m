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
@property (nonatomic, copy)     NSArray<XDBannerPictureModel *> *picModelArr;

/// roll-back scrollView
@property (nonatomic, retain)   UIScrollView *rollBackSclView;

@end

@implementation XDBannerView

#pragma mark - initail funcion
- (instancetype)initWithPicModel:(NSArray<XDBannerPictureModel *> *)picModelArr frame:(CGRect)bannerFrame {
    if (self = [super initWithFrame:bannerFrame]) {
        
    }
    return self;
}

- (instancetype)initWithPictureLinks:(NSArray<NSString *> *)picLinks frame:(CGRect)bannerFrame {
    if (self = [super initWithFrame:bannerFrame]) {
        
    }
    return self;
}

- (instancetype)initWithImages:(NSArray<UIImage *> *)imgs frame:(CGRect)bannerFrame {
    if (self = [super initWithFrame:bannerFrame]) {
        
    }
    return self;
}

- (instancetype)initWithDataArray:(NSArray<NSData *> *)dataArr frame:(CGRect)bannerFrame {
    if (self = [super initWithFrame:bannerFrame]) {
        
    }
    return self;
}

#pragma mark - getter
- (UIScrollView *)rollBackSclView {
    if (!_rollBackSclView) {
        _rollBackSclView = ({
            UIScrollView *scl =[[UIScrollView alloc]init];
            scl;
        });
    }
    return _rollBackSclView;
}

@end
