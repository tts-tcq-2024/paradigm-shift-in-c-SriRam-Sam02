#include <assert.h>
#include <stdbool.h>
#include "Battery_Condition_Status.h"
#include "WarningChecker.h"

ParameterConfig SoC = {20, 80, 0.05, true};
ParameterConfig Temperature = {0, 45, 0.05, true};
ParameterConfig Charge_rate = {0, 0.8, 0.05, true};

int main()
{
    float config_SoC = 90;
    float config_Temperature = 20;
    float config_Charge_rate = 0.5;
    
    assert(parameterValidation("SoC", config_SoC, SoC));
    assert(parameterValidation("Temperature", config_Temperature, Temperature));
    assert(parameterValidation("Charge_rate", config_Charge_rate, Charge_rate));

    return 0;  
}

