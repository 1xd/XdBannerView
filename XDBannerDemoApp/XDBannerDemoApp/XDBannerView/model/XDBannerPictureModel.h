//
//  XDBannerPictureModel.h
//  XDBannerDemoApp
//
//  Created by 1xd' mac on 2020/3/20.
//  Copyright © 2020 1xd' mac. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, XDBannerPictureSourceType) {
    XDBannerPictureSourceType_Download,     //get picture by downloading the picture according to 'pictureUrl'
    XDBannerPictureSourceType_LocalData,    //get picture from local 'NSData' object
    XDBannerPictureSourceType_ImageObj,     //get picture from local 'UIImage' object
};

NS_ASSUME_NONNULL_BEGIN

@interface XDBannerPictureModel : UIView

/// string-type URL of picture
@property (nonatomic, copy)     NSString *pictureUrl;

/// local picture data
@property (nonatomic, copy)     NSData *pictureData;

/// img obj
@property (nonatomic, strong)   UIImage *imgObjOfPicture;

/// source type  that automatically set when set upper propeties 
@property (nonatomic, assign)   XDBannerPictureSourceType sourceType;

/// block of the function by clicking the picture
@property (nonatomic, copy)     void(^clickFunc)(XDBannerPictureModel *picModel);


@end

NS_ASSUME_NONNULL_END
