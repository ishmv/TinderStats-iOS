#import <Foundation/Foundation.h>
#import <sqlite3.h>
#import <AppList/AppList.h>

@interface DBManager : NSObject
{
    NSString *databasePath;
}

+(DBManager*)getSharedInstance;
-(NSString *) getDBPath;
-(BOOL) checkDBExists;
-(BOOL) createDB;
-(BOOL) initDB;
-(BOOL) saveField: (int) category dataToInsert: (int) number;
-(int) getData:(int) category;



@end
