//
//  PKLoginViewController.h
//  PamaKids
//
//  Created by leon on 13-4-28.
//  Copyright (c) 2013年 leon. All rights reserved.
//

#import "PKViewController.h"
#import "ApiCmdUser.h"
#import "DDMenuController.h"

@interface PKLoginViewController : PKViewController<ApiNotify,UITextFieldDelegate,UMSocialUIDelegate,UMSocialDataDelegate>{
    UITextField *textUserName,*textPassword;
    ApiCmdUser *apiUser;
}

@end
