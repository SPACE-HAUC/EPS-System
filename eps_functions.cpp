#include "eps_functions.h"
#include <iostream>

float getCurrentPowerUsage() {
    return CURRENT_POWER_USAGE;
}

float getUpdatedBatteryEnergy() {
    std::cout << "This function gets the current battery energy\n";
    return 50;
}

/* 
    This may not be done yet. If the battery energy is all we need to determine
    if we have available power, then it's done. Otherwise I may need to add upon
    this function.
*/ 
bool isPowerAvailable(float incomingHardwarePower) {
    if ((CURRENT_POWER_USAGE + incomingHardwarePower) >= getUpdatedBatteryEnergy()) {
        std::cerr << "ERROR: Hardware will exceed the current amount of power the battery has.\n";
        return false;
    }
    std::cout << "There is power available\n";
    return true;
}


/*
    **NOTE: All enable functions must check if there is enough power available first.
    Next, increment
*/

bool enableESPOverhead() {
    std::cout << "Turning on EPS Overhead\n";
    return true;
}

bool disableEPSOverhead() {
    std::cout << "Turning off EPS Overhead\n";
    return true;
}

bool enableBatteryHeaters() {
    std::cout << "Turning on Battery Heaters\n";
    return true;
}

bool disableBatteryHeaters() {
    std::cout << "Turning off Battery Heaters\n";
    return true;
}

bool enableCamera() {
    std::cout << "Turning on Camera\n";
    return true;
}

bool disableCamera() {
    std::cout << "Turning off Camera\n";
    return true;
}

bool enableADRV9361() {
    std::cout << "Turning on ADRV 9361\n";
    return true;
}

bool disableADRV9361() {
    std::cout << "Turning of ADRV 9361\n";
    return true;
}

bool enableFineSunSensor() {
    std::cout << "Turning on Fine Sun Sensor\n";
    return true;
}

bool disableFineSunSensor() {
    std::cout << "Turning off Fine Sun Sensor\n";
    return true;
}

bool enableCoarseSunSensor() {
    std::cout << "Turning on Coarse Sun Sensor\n";
    return true;
}

bool disableCoardSunSensor() {
    std::cout << "Turning off Coarse Sun Sensor\n";
    return true;
}

bool enableMagnetometer() {
    std::cout << "Turning on Magnetometer\n";
    return true;
}

bool disableMagnetometer() {
    std::cout << "Turning off Magnetometer\n";
    return true;
}

bool enableMagnetorquers() {
    std::cout << "Turning on Magnetorquers\n";
    return true;
}

bool disableMagnetorquers() {
    std::cout << "Turning off Magnetorquers\n";
    return true;
}

bool enableUHFRecieve() {
    std::cout << "Turning on UHF Recieve\n";
    return true;
}

bool disableUHFRecieve() {
    std::cout << "Turning off UHF Receive\n";
    return true;
}

bool enableUHFTransmit() {
    std::cout << "Turning on UHF Transmit\n";
    return true;
}

bool disableUHFTransmit() {
    std::cout << "Turning off UHF Transmit\n";
    return true;
}

bool enableXBandComms() {
    std::cout << "Turning on X-Band Comms\n";
    return true;
}

bool disableXBandComms() {
    std::cout << "Turning off X-Band Comms\n";
    return true;
}
