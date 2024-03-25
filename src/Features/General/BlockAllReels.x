#import "../../InstagramHeaders.h"
#import "../../Manager.h"

// Block all Reels
%hook IGSundialFeedViewController
- (id)view {
  return [BHIManager blockAllReels] ? nil : %orig;
}
%end