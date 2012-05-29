//
//  FirstController.h
//  DropDownDemo
//
//  Created by Abdullah Md. Zubair on 19/09/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DropDownView.h"

@interface FirstController : UIViewController<DropDownViewDelegate> {

	UIButton *button;
	
	NSArray *arrayData;
	
	DropDownView *dropDownView;
	
}

@property (nonatomic,retain) IBOutlet UIButton *button;

-(IBAction)actionButtonClick;

@end
