#include <iostream>
#include "eps_functions.h"

using namespace std;

////
/// Power is measured in Watts
//

const float MAX_TOTAL_POWER = 26.0000;
const float BATTERY_ENERGY_CAPACITY = 38.5;
float CURRENT_POWER_USAGE = 0; // How much power we are currently using
// NOTE: One satelite cycle is appromixately 92 min/5520 sec

void testAllStubFunctions();

int main(int argc, char* argv[]) {

    cout << "The EPS sudocode says Hello! Starting function diagnostics...\n\n";
    testAllStubFunctions();
    cout << "\n\n...Finished function diagnostics.\n";
    return 1;
}

void testAllStubFunctions() {
    cout << "Current Power Usage: " << getCurrentPowerUsage() << endl;
    CURRENT_POWER_USAGE += 10;
    isPowerAvailable(20);
    cout << "Current Power Usage: " << getCurrentPowerUsage() << endl;
    CURRENT_POWER_USAGE += 25;
    isPowerAvailable(15);
    getUpdatedBatteryEnergy();
    enableESPOverhead();
    disableEPSOverhead();
    enableBatteryHeaters();
    disableBatteryHeaters();
    enableCamera();
    disableCamera();
    enableADRV9361();
    disableADRV9361();
    enableFineSunSensor();
    disableFineSunSensor();
    enableCoarseSunSensor();
    disableCoardSunSensor();
    enableMagnetometer();
    disableMagnetometer();
    enableMagnetorquers();
    disableMagnetorquers();
    enableUHFRecieve();
    disableUHFRecieve();
    enableUHFTransmit();
    disableUHFTransmit();
    enableXBandComms();
    disableXBandComms();
}