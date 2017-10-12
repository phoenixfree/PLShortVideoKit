#import "GPUImageFilterGroup.h"
#import "SixInputFilter.h"
#import "KWRenderProtocol.h"
#import "GPUImage.h"
#import "GPUImageFourInputFilter.h"

@interface EarlybirdFilter : SixInputFilter

@end

@interface Earlybird : GPUImageFilterGroup <KWRenderProtocol>
{
    GPUImagePicture *imageSource1;
    GPUImagePicture *imageSource2;
    GPUImagePicture *imageSource3;
    GPUImagePicture *imageSource4;
    GPUImagePicture *imageSource5;
}

@property(nonatomic, readonly) BOOL needTrackData;

@end
