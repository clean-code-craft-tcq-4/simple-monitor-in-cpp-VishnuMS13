#include "checker.hpp"

bool bBatteryIsOk(float temperature, float soc, float chargeRate) 
{
  bool temperatureCondition = true;
  bool socCondition = true;
  bool chargeRateCondition = true;
  bool batteryCondition = false;

  temperatureCondition = bTemperatureIsOk(temperature);
  socCondition = bSocIsOk(soc);
  chargeRateCondition = bChargeRateIsOk(chargeRate);
  
  batteryCondition = (temperatureCondition && socCondition && chargeRateCondition);
  
  return batteryCondition;
}

bool bTemperatureIsOk(float temperature)
{
  bool retTemperatureCondition = true;
  if(temperature < 0 || temperature > 45) 
  {
    retTemperatureCondition = false;
    cout << "Temperature out of range!" << endl;
  }

  return retTemperatureCondition;
}

bool bSocIsOk(float soc)
{
  bool retSocCondition = true;
  if(soc < 20 || soc > 80) 
  {
    retSocCondition = false;
    cout << "State of Charge out of range!" << endl;
  }

  return retSocCondition;
}

bool bChargeRateIsOk(float chargeRate)
{
  bool retChargeRateCondition = true;
  if(chargeRate > 0.8) 
  {
    retChargeRateCondition = false;
    cout << "Charge Rate out of range!" << endl;
  }

  return retChargeRateCondition;
}
