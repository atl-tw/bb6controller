

#import <UIKit/UIKit.h>
#import "BLE.h"

@interface TableViewController : UITableViewController <BLEDelegate>
{
    IBOutlet UIButton *btnConnect;
    IBOutlet UISwitch *swDigitalIn;
    IBOutlet UISwitch *swDigitalOut;
    IBOutlet UISwitch *swAnalogIn;
    IBOutlet UILabel *lblAnalogIn;
    IBOutlet UISlider *sldPWM;
    IBOutlet UISlider *sldServo;
    IBOutlet UIActivityIndicatorView *indConnecting;
    IBOutlet UILabel *lblRSSI;
}

@property (strong, nonatomic) BLE *ble;

@end
