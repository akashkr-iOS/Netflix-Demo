//
//  SMTSmartechProtocol.h
//  Smartech
//
//  Created by Netcore Solutions on 25/01/21.
//  Copyright © 2021 Netcore Solutions. All rights reserved.
//

#ifndef SMTSmartechProtocol_h
#define SMTSmartechProtocol_h

@protocol SMTSmartechProtocol

/**
 @brief This method is for passing tracked events from AppInbox SDK to Smartech SDK.
 
 @param eventId ID of the event.
 @param payloadDictionary Payload to be passed with the event.
 */
- (void)trackEventFromAppInboxWithID:(NSInteger)eventId andPayload:(NSDictionary * _Nullable)payloadDictionary;

@end

#endif /* SMTSmartechProtocol_h */
