#import "DBManager.h"

%hook TNDRUserCardCellManager
- (void)trackRatingOfLiked:(BOOL)fp8 recSuperLikedCurrentUser:(BOOL)fp12 superLiked:(BOOL)fp16 method:(id)fp20 fromMore:(BOOL)fp24 teaserType:(id)fp28 teaserValue:(id)fp32 firstDegrees:(int)fp36 secondDegrees:(int)fp40 {

            DBManager * dbmanager;
            dbmanager = [[DBManager alloc] init];
            if(![dbmanager checkDBExists])
            {
                [dbmanager createDB];
                [dbmanager initDB];
            }

            if(fp16) {
                NSLog(@"f41c0r: WAS SUPERLIKED, trackRatingOfLiked %d, recSuperLikedCurrentUser %d, superLiked %d", (int) fp8, (int) fp12, (int) fp16);
            }
            else{
                if(fp8) {
                    NSLog(@"f41c0r: WAS LIKED, trackRatingOfLiked %d, recSuperLikedCurrentUser %d, superLiked %d", (int) fp8, (int) fp12, (int) fp16);
                    int currentLikes = [dbmanager getData: 0];
                    if(currentLikes == -1)
                        NSLog(@"f41c0r: error getting current data");
                    else {
                        currentLikes = currentLikes + 1;
                        [dbmanager saveField: 0 dataToInsert: currentLikes];
                    }
                }
                else {
                    NSLog(@"f41c0r: WAS NOT LIKED, trackRatingOfLiked %d, recSuperLikedCurrentUser %d, superLiked %d", (int) fp8, (int) fp12, (int) fp16);
                    int currentPasses = [dbmanager getData: 2];
                    if( currentPasses  == -1)
                        NSLog(@"f41c0r: error getting current data");
                    else {
                        currentPasses = currentPasses + 1;
                        [dbmanager saveField: 2 dataToInsert: currentPasses];
                    }
                }
            }
            %orig; // Call the original implementation of this method
            return;
}
%end
