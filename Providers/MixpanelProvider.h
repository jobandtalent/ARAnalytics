#import "ARAnalyticalProvider.h"

extern NSString *const ARMixpanelTrackedScreenEventName;

@interface MixpanelProvider : ARAnalyticalProvider
- (id)initWithIdentifier:(NSString *)identifier andHost:(NSString *)host;
- (void)createAlias:(NSString *)alias;
- (void)registerSuperProperties:(NSDictionary *)properties;
- (NSDictionary *)currentSuperProperties;
- (void)reset;
@end
