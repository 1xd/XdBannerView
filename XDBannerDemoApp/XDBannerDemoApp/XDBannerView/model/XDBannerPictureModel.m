//
//  XDBannerPictureModel.m
//  XDBannerDemoApp
//
//  Created by 1xd' mac on 2020/3/20.
//  Copyright © 2020 1xd' mac. All rights reserved.
//

#import "XDBannerPictureModel.h"

@implementation XDBannerPictureModel

- (void)setPictureUrl:(NSString *)pictureUrl {
    _pictureUrl = pictureUrl;
    
    self.sourceType = XDBannerPictureSourceType_Download;
}

- (void)setImgObjOfPicture:(UIImage *)imgObjOfPicture {
    _imgObjOfPicture = imgObjOfPicture;
    
    self.sourceType = XDBannerPictureSourceType_ImageObj;
}

- (void)setPictureData:(NSData *)pictureData {
    _pictureData = pictureData;
    
    self.sourceType = XDBannerPictureSourceType_LocalData;
}
@end
