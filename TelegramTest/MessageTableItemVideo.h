//
//  MessageTableItemVideo.h
//  Telegram P-Edition
//
//  Created by Dmitry Kondratyev on 2/13/14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import "MessageTableItem.h"
#import "DownloadQueue.h"
#import "UploadQueue.h"
#import "DownloadVideoItem.h"
#import "TGImageObject.h"
@interface MessageTableItemVideo : MessageTableItem

@property (nonatomic, strong) NSAttributedString *videoTimeAttributedString;
@property (nonatomic) NSSize videoTimeSize;

@property (nonatomic, strong) TLFileLocation *videoPhotoLocation;

@property (nonatomic) int videoSize;

@property (nonatomic,strong) TGImageObject *imageObject;
-(void)rebuildTimeString;

-(BOOL)canDownload;
@end
