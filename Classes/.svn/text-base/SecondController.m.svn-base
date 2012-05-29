//
//  SecondController.m
//  DropDownDemo
//
//  Created by Ameya on 25/09/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "SecondController.h"


@implementation SecondController

@synthesize serachBarController;

@synthesize dropDownView;

/*
 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
	
	arrayData = [[NSArray alloc] initWithArray:[NSArray arrayWithObjects:@"Test1",@"Test2",nil]];
	
	dropDownView = [[DropDownView alloc] initWithArrayData:arrayData cellHeight:30 heightTableView:200 paddingTop:0 paddingLeft:0 paddingRight:0 refView:serachBarController animation:BOTH openAnimationDuration:2 closeAnimationDuration:2];
	
	dropDownView.delegate = self;
	
	[self.view addSubview:dropDownView.view];
	
	[super viewDidLoad];
}


/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

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
	
	[arrayData release];
	
	[serachBarController release];
	
	[dropDownView release];
	
    [super dealloc];
}

-(void)dropDownCellSelected:(NSInteger)returnIndex{
	
	serachBarController.text = [arrayData objectAtIndex:returnIndex];
	
}	

- (void)searchBarTextDidBeginEditing:(UISearchBar *)searchBar{
	[dropDownView openAnimation];
}// called when text starts editing
- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar{
	[self.serachBarController resignFirstResponder];
}	// called when keyboard search button pressed
- (void)searchBar:(UISearchBar *)searchBar textDidChange:(NSString *)searchText{
	
	if([searchText isEqualToString:@""])
			[dropDownView openAnimation];
}	

@end
