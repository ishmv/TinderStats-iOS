#import "DBManager.h"


static DBManager *sharedInstance = nil;
static sqlite3 *database = nil;
static sqlite3_stmt *statement = nil;

@implementation DBManager : NSObject

+(DBManager*)getSharedInstance{
    if (!sharedInstance) {
        sharedInstance = [[super allocWithZone:NULL]init];
        [sharedInstance createDB];
    }
    return sharedInstance;
}

-(NSString *) getDBPath {
    return [[[ALApplicationList sharedApplicationList] valueForKey:@"sandboxPath" forDisplayIdentifier:@"com.cardify.tinder"] stringByAppendingString: @"/Documents/tinderstats.db"];
}

-(BOOL) checkDBExists {
    databasePath = [self getDBPath];
    NSFileManager * filemgr = [NSFileManager defaultManager];
    if ([filemgr fileExistsAtPath: databasePath ] == NO)
        return NO;
    return YES;
}

-(BOOL)createDB{
    BOOL isSuccess = YES;
    databasePath = [self getDBPath];
    NSFileManager * filemgr = [NSFileManager defaultManager];
    if ([filemgr fileExistsAtPath: databasePath ] == NO)
    {

        const char *dbpath = [databasePath UTF8String];
        int openRetCode = sqlite3_open(dbpath, &database);
        if (openRetCode == SQLITE_OK)
        {
            char *errMsg;
            const char *sql_stmt = "create table if not exists statsTable (category integer primary key, number INT )";
            if (sqlite3_exec(database, sql_stmt, NULL, NULL, &errMsg)
                != SQLITE_OK)
            {
                isSuccess = NO;
                //NSLog(@"f41c0r: Failed to create table");
                //NSLog(@"f41c0r: %s",errMsg);
            }
            sqlite3_close(database);
            return  isSuccess;
        }
        else {
            isSuccess = NO;
            //NSLog(@"f41c0r: Failed to open/create database: %d",openRetCode );
        }
    }
    return isSuccess;
}


- (BOOL) initDB {
    const char *dbpath = [databasePath UTF8String];
    int sqlOpen = sqlite3_open(dbpath, &database);
    if (sqlOpen == SQLITE_OK)
    {
        for(int i =0; i<5; i++)
        {
            NSString *insertSQL = [NSString stringWithFormat:@"insert or replace into statsTable (category,number) values (\"%d\",\"%d\")", i, 0];
            ////NSLog(@"f41c0r: %@",insertSQL);
            const char *insert_stmt = [insertSQL UTF8String];
            sqlite3_prepare_v2(database, insert_stmt,-1, &statement, NULL);
            int insertRetCode = sqlite3_step(statement);
            if ( insertRetCode != SQLITE_DONE)
            {
                const char * errMsg = sqlite3_errmsg(database);
                NSLog(@"f41c0r: %s",errMsg);
                return NO;
            }
            sqlite3_finalize(statement);
            statement = nil;
        }
        return YES;
    }
    //NSLog(@"f41c0r: Error Opening the database, SQLite Error number \"%d\"",sqlOpen);
    return NO;
}


- (BOOL) saveField: (int) category dataToInsert:(int)number;
{
    const char *dbpath = [databasePath UTF8String];
    int sqlOpen = sqlite3_open(dbpath, &database);
    if (sqlOpen == SQLITE_OK)
    {
        NSString *insertSQL = [NSString stringWithFormat:@"insert or replace into statsTable (category,number) values (\"%d\",\"%d\")",category, number];
        const char *insert_stmt = [insertSQL UTF8String];
        //NSLog(@"f41c0r: %s",insert_stmt);
        sqlite3_prepare_v2(database, insert_stmt,-1, &statement, NULL);
        int insertRetCode = sqlite3_step(statement);
        if (insertRetCode != SQLITE_DONE) {
            const char * errMsg = sqlite3_errmsg(database);
            NSLog(@"f41c0r: %s",errMsg);
            return NO;
        }
        else {
            //NSLog(@"f41c0r: Database says SQLITE_DONE: %d\n", insertRetCode);
        }
        sqlite3_finalize(statement);
        statement = nil;
        return YES;
    }
    //NSLog(@"f41c0r: Error Opening the database, SQLite Error number \"%d\"",sqlOpen);
    return NO;
}

- (int) getData:(int)category;
{
    const char *dbpath = [databasePath UTF8String];
    int opendatabase = sqlite3_open(dbpath, &database);
    if ( opendatabase == SQLITE_OK)
    {
        NSString *getDataSQL = [NSString stringWithFormat:@"select number from statsTable where category = \"%d\"",category];
        //NSLog(@"f41c0r: %@", getDataSQL);
        const char *select_stmt = [getDataSQL UTF8String];
        int prep = sqlite3_prepare_v2(database, select_stmt,-1, &statement, NULL);
        if ( prep == SQLITE_OK)
        {
            int executeStatement = sqlite3_step(statement);
            if ( executeStatement == SQLITE_ROW)
            {
                int retval = sqlite3_column_int(statement, 0);
                sqlite3_finalize(statement);
                statement = nil;
                return retval;
            }
            else
            {
                //NSLog(@"f41c0r: An error occured while trying to select data from the tinderstatsapp database, %d\n",executeStatement);
                sqlite3_finalize(statement);
                statement = nil;
                return -1;
            }
        }
        else {
                //NSLog(@"f41c0r: An error occured while trying to prepare a statement, %d\n",prep);
        }
    }
    else
    {
        //NSLog(@"f41c0r: Could not open the tinderstatsapp database, %d\n", opendatabase);
    }
    return -1;
}


@end
