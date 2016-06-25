#import "F41RootViewController.h"

@implementation F41RootViewController {
    NSArray * tableElements;
    NSArray * tableColors;
    DBManager * dbmanager;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    return NO;
}


- (void)loadView {
	[super loadView];


	self.title = @"TinderStats";
    self.tableView.scrollEnabled = NO;

    tableElements = [NSArray arrayWithObjects:@"Likes:", @"Superlikes:", @"Passes:", @"Matches:", @"Superlike Matches:", @"Match Rate:", @"Superlike Match Rate:", @"Rate of Pickiness", nil];
    tableColors = [NSArray arrayWithObjects:[UIColor blueColor], [UIColor cyanColor], [UIColor redColor], [UIColor purpleColor ], [UIColor yellowColor ],[UIColor magentaColor ],  [UIColor greenColor ], [UIColor brownColor ], nil];
    
    dbmanager = [[DBManager alloc] init];
    if(![dbmanager checkDBExists])
    {
        [dbmanager createDB];
        [dbmanager initDB];
    }

}

#pragma mark - Table View Data Source

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"Path to tinderstats.db File:"
                                   message: [dbmanager getDBPath]
                                   preferredStyle:UIAlertControllerStyleAlert];
     
    UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
       handler:^(UIAlertAction * action) {}];
     
    [alert addAction:defaultAction];
    [self presentViewController:alert animated:YES completion:nil];
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [tableElements count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *simpleTableIdentifier = @"SimpleTableCell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:simpleTableIdentifier];
    NSLog(@"f41c0r: hit");
    
    if (cell == nil)
    {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:simpleTableIdentifier];
    }
    int idx = (int) indexPath.row;
    NSLog(@"f41c0r: idx = %d", idx);
    if (idx < 5)
    {
        int num = [dbmanager getData: (int) indexPath.row];
        NSString *numString = [NSString stringWithFormat:@" %d", num];
        cell.textLabel.text =[[tableElements objectAtIndex:indexPath.row] stringByAppendingString:numString];
    }
    else
    {
        int likes = [dbmanager getData:0];
        int superlikes = [dbmanager getData:1];
        int passes = [dbmanager getData:2];
        int totalSwipes = likes + superlikes + passes;
        if (totalSwipes == 0) // divide by zero
            totalSwipes = 1;

        NSLog(@"f41c0r: l: %d, sl: %d, p: %d, ts: %d",likes, superlikes, passes, totalSwipes);
        
        if(idx == 5) // Overall match rate
        {
            int matches = [dbmanager getData:3];
            int superlikeMatches = [dbmanager getData:4];
            float matchRateFloat = (matches + superlikeMatches) / totalSwipes;
            NSString *matchRateString = [NSString stringWithFormat:@" %4.1f%%", matchRateFloat];
            cell.textLabel.text = [[tableElements objectAtIndex:indexPath.row] stringByAppendingString: matchRateString];
        }
        else if(idx == 6) // Superlike match rate
        {
            int superlikeMatches = [dbmanager getData:4];
            float superlikeMatchRateFloat = superlikeMatches / totalSwipes;
            NSString *superMatchRateString = [NSString stringWithFormat:@" %4.1f%%", superlikeMatchRateFloat];
            cell.textLabel.text = [[tableElements objectAtIndex:indexPath.row] stringByAppendingString: superMatchRateString];
        }
        else // Rate of pickiness (e.g. percent people you like instead of reject)
        {
            float pickinessFloat = 100 * ((float)(likes + superlikes) / ((float) totalSwipes));
            NSLog(@"f41c0r: %f",pickinessFloat);
            NSString *pickinessString = [NSString stringWithFormat:@" %4.1f%%", pickinessFloat];
            cell.textLabel.text = [[tableElements objectAtIndex:indexPath.row] stringByAppendingString: pickinessString];
        }
    }
    cell.textLabel.textColor = [tableColors objectAtIndex:indexPath.row];
    return cell;
}

@end
