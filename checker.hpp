#include <assert.h>
#include <iostream>
using namespace std;

bool bTemperatureIsOk(float temperature);
bool bSocIsOk(float soc);
bool bChargeRateIsOk(float chargeRate);
bool bBatteryIsOk(float temperature, float soc, float chargeRate);