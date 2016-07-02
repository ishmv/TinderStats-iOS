#import "F41AppDelegate.h"

@implementation F41AppDelegate

- (void)applicationDidFinishLaunching:(UIApplication *)application {
	_window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    _f41RootViewController = [[F41RootViewController alloc] init];
	_rootViewController = [[UINavigationController alloc] initWithRootViewController: _f41RootViewController ];
	_window.rootViewController = _rootViewController;
	[_window makeKeyAndVisible];
}

- (void) applicationDidBecomeActive:(UIApplication *) application {
    NSLog(@"f41c0r: Application entered foreground F41AppDelegate");
    [_f41RootViewController reloadTable];
}

- (void)dealloc {
	[_window release];
	[_rootViewController release];
    [_f41RootViewController release];
	[super dealloc];
}

@end
