//
//  CFAEventsIncidentDetailViewController.h
//  CFAEvents
//
//  Created by Robyn Van Deventer on 24/02/2016.
//  Copyright © 2016 Robyn Van Deventer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Incident.h"

@interface CFAEventsIncidentDetailViewController : UIViewController

- (instancetype)initWithIncident:(Incident *)selectedIncident;

@end
