#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void printOnConsole(char* message){
printf("%s",message); 
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
  int count = 0;
  count = count + isOutOfRange(temperature, 0, 45);
  count = count + isOutOfRange(soc, 20, 80);
  count = count + isOutOfRange(chargeRate,0,0.8);

  if (count > 1)
  {
    printOnConsole("Battery not okay\n");
    return false;
  }
  else
  {
    printOnConsole("Battery okay\n");
    return true;
  }
}
int main()
{
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
