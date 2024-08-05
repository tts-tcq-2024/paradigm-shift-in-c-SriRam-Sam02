#include "WarningChecker.h"
#include "Battery_Condition_Status.h"

int isLessThan(float value, ParameterConfig config) {
    return (value < config.min) ? 3 : 0;
}

int isGreaterThan(float value, ParameterConfig config) {
    return (value > config.max) ? 4 : 0;
}

int warningChecker(float value, ParameterConfig config) {
    
    float warning_min = config.min + (config.max * config.warning_tolerance);
    float warning_max = config.max - (config.max * config.warning_tolerance);
    if (value < warning_min) {
        return 1; 
    }
    if (value > warning_max) {
        return 2; 
    }
    return 0;  
}
