//
//  FirstController.m
//  DropDownDemo
//
//  Created by Ameya on 25/09/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "FirstController.h"


@implementation FirstController

@synthesize button;


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
	
    [super viewDidLoad];

	arrayData = [[NSArray alloc] initWithArray:[NSArray arrayWithObjects:@"Test1",@"Test2",nil]];
	
	dropDownView = [[DropDownView alloc] initWithArrayData:arrayData cellHeight:30 heightTableView:200 paddingTop:-8 paddingLeft:-5 paddingRight:-10 refView:button animation:BLENDIN openAnimationDuration:2 closeAnimationDuration:2];
	
	dropDownView.delegate = self;
	
	[self.view addSubview:dropDownView.view];
	
	[button setTitle:[arrayData objectAtIndex:0] forState:UIControlStateNormal];
	
}



- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}


- (void)dealloc {

	[button release];
	
    [super dealloc];


}

#pragma mark -
#pragma mark DropDownViewDelegate

-(void)dropDownCellSelected:(NSInteger)returnIndex{
	
	[button setTitle:[arrayData objectAtIndex:returnIndex] forState:UIControlStateNormal];
	
}	

#pragma mark -
#pragma mark Class methods

-(IBAction)actionButtonClick{
	
	[dropDownView openAnimation];
	
}	

@end
