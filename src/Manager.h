#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BHIManager : NSObject

+ (BOOL)hideAds;
+ (BOOL)downloadMedia;
+ (BOOL)profileImageSave;
+ (BOOL)removeSuggestedPost;
+ (BOOL)removeSuggestedAccounts;
+ (BOOL)removeSuggestedReels;
+ (BOOL)removeSuggestedThreads;
+ (BOOL)removeFeedPost;
+ (BOOL)showLikeCount;
+ (BOOL)postLikeConfirmation;
+ (BOOL)reelsLikeConfirmation;
+ (BOOL)followConfirmation;
+ (BOOL)callConfirmation;
+ (BOOL)voiceMessageConfirmation;
+ (BOOL)stickerInteractConfirmation;
+ (BOOL)postCommentConfirmation;
+ (BOOL)copyDecription;
+ (BOOL)removeReelsTab;
+ (BOOL)blockAllReels;
+ (BOOL)noRecentSearches;
+ (BOOL)hideExploreGrid;
+ (BOOL)hideTrendingSearches;
+ (BOOL)Padlock;
+ (BOOL)keepDeletedMessage;
+ (BOOL)hideLastSeen;
+ (BOOL)noScreenShotAlert;
+ (BOOL)unlimitedReplay;
+ (BOOL)noSeenReceipt;
+ (BOOL)FLEX;

+ (void)showSaveVC:(id)item;
+ (void)cleanCache;
+ (BOOL)isEmpty:(NSURL *)url;
+ (NSString *)getDownloadingPersent:(float)per;

@end