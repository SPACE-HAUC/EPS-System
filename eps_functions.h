#ifndef EPS_FUNCTIONS_H
#define EPS_FUNCTIONS_H

/*
NOTE: It would be convenient if the EPS can check how much power
each piece of hardware is currently using.

TASKS: 

- Make TURN_ON and TURN_OFF functions for all hardware that
correctly increments the CURRENT_POWER_USAGE and decrements it.

- Make an isPowerAvailable function to see if we can turn on a specific
hardware. Check the CURRENT_POWER_USAGE,the battery has enough power to 
support this new incoming hardware, return true, otherwise return false.

- Make an updateCurrentBatteryPower function
*/

extern float CURRENT_POWER_USAGE;
float getCurrentPowerUsage();

float getUpdatedBatteryEnergy();
bool isPowerAvailable(float incomingHardwarePower);
bool enableESPOverhead();
bool disableEPSOverhead();
bool enableBatteryHeaters();
bool disableBatteryHeaters();
bool enableCamera();
bool disableCamera();
bool enableADRV9361();
bool disableADRV9361();
bool enableFineSunSensor();
bool disableFineSunSensor();
bool enableCoarseSunSensor();
bool disableCoardSunSensor();
bool enableMagnetometer();
bool disableMagnetometer();
bool enableMagnetorquers();
bool disableMagnetorquers();
bool enableUHFRecieve();
bool disableUHFRecieve();
bool enableUHFTransmit();
bool disableUHFTransmit();
bool enableXBandComms();
bool disableXBandComms();
 
#endif