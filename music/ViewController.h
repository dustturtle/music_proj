//
//  ViewController.h
//  music
//
//  Created by a a a a a on 12-1-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import<AVFoundation/AVFoundation.h>
@interface ViewController : UIViewController
<AVAudioPlayerDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>
{
    UIImageView* rootImageView;
   
    AVAudioPlayer* _audioPlayer;
    NSMutableArray* _pNames;
    NSMutableArray* _hNames;
   
    int _songIndex;
    UIButton* leftButton;
    UIButton* rightButton;
    
    UILabel* _label;
    UISlider* _slider;
    UISlider* _volumeSlider;
    NSTimer* processTimer;
    NSTimer* timer1;
}
-(void)loadMusic:(NSString*)name type:(NSString*)type;
@end
