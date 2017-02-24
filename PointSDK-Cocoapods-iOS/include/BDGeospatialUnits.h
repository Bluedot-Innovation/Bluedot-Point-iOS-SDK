//
//  Created by Bluedot Innovation
//  Copyright © 2016 Bluedot Innovation. All rights reserved.
//

#ifdef BDPlatformApple

#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>


typedef CLLocationDegrees      BDLocationDegrees;
typedef CLLocationDistance     BDLocationDistance;
typedef CLLocationAccuracy     BDLocationAccuracy;
typedef CLLocationSpeed        BDLocationSpeed;
typedef CLLocationDirection    BDLocationDirection;

/**
@brief Alias of CLLocationCoordinate2D
*/
typedef CLLocationCoordinate2D BDLocationCoordinate2D;

#define BDLocationCoordinate2DMake CLLocationCoordinate2DMake

#define kBDLocationAccuracyBestForNavigation kCLLocationAccuracyBestForNavigation
#define kBDLocationAccuracyBest              kCLLocationAccuracyBest
#define kBDLocationAccuracyNearestTenMeters  kCLLocationAccuracyNearestTenMeters
#define kBDLocationAccuracyHundredMeters     kCLLocationAccuracyHundredMeters
#define kBDLocationAccuracyKilometer         kCLLocationAccuracyKilometer
#define kBDLocationAccuracyThreeKilometers   kCLLocationAccuracyThreeKilometers

#else

typedef double BDLocationDegrees;
typedef double BDLocationDistance;
typedef double BDLocationAccuracy;
typedef double BDLocationSpeed;
typedef double BDLocationDirection;

/**
@brief Alias of CLLocationCoordinate2D
*/
typedef struct BDLocationCoordinate2D
{
    BDLocationDegrees latitude;
    BDLocationDegrees longitude;
}
BDLocationCoordinate2D;

BDLocationCoordinate2D BDLocationCoordinate2DMake(BDLocationDegrees latitude, BDLocationDegrees longitude);

#define kBDLocationAccuracyBestForNavigation -2
#define kBDLocationAccuracyBest              -1
#define kBDLocationAccuracyNearestTenMeters  10.0
#define kBDLocationAccuracyHundredMeters     100.0
#define kBDLocationAccuracyKilometer         1000.0
#define kBDLocationAccuracyThreeKilometers   3000.0

#endif

#define kBDLocationAccuracyGPS       kBDLocationAccuracyNearestTenMeters
#define kBDLocationAccuracyWifi      kBDLocationAccuracyHundredMeters
#define kBDLocationAccuracyCellTower kBDLocationAccuracyThreeKilometers

#define kBDLocationInvalidDegrees   -1.0
#define kBDLocationInvalidDistance  -1.0
#define kBDLocationInvalidAccuracy   0.0
#define kBDLocationInvalidSpeed     -1.0
#define kBDLocationInvalidDirection -1.0
