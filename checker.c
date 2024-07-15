#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void printOnConsole( int tempCount, int socCount, int chargeRatecount)
{
printf("Battery status : temp= %d,Soc= %d,ChargeRate= %d,\n",tempCount,socCount,chargeRatecount); 
}

int isOutOfRange(float value, float LB, float UB)
{
  return (value < LB || value > UB);
}
int isGreaterThan(float value, float threshold)
{
  return (value > threshold);
}
bool batteryIsOk(float temperature, float soc, float chargeRate) 
{ 
  int tempCount = 0;
  int socCount = 0;
  int chargeRatecount = 0;
  
  tempCount = tempCount + isOutOfRange(temperature, 0, 45);
  socCount = socCount + isOutOfRange(soc, 20, 80);
  chargeRatecount = chargeRatecount + isOutOfRange(chargeRate,0,0.8);

  if (tempCount > 1 || socCount > 1 || chargeRatecount > 1 )
  {
     printOnConsole(tempCount,socCount,chargeRatecount);
    return false;
  }
  else
  {
    printOnConsole(tempCount,socCount,chargeRatecount);
    return true;
  }
}
int main()
{
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
