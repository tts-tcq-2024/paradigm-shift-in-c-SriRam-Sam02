#include <stdio.h>
#include "Battery_Condition_Status.h"
#include "WarningChecker.h"

void displayWarning(const char* param_name, int message_index) {
    printf("Checking parameters values:\n");
    printf("%s: %s\n", param_name, messages[language][message_index]); 
}

int messageIndexMapping(float value, ParameterConfig config) {
    int message_index = 0;
    message_index = isLessThan(value, config);
    if (message_index != 0) {
        return message_index;
    }
    message_index = isGreaterThan(value, config);
    if (message_index != 0) {
        return message_index;
    }
    return warningChecker(value, config);
}

void parameterValidation(const char* param_name, float value, ParameterConfig config) {
    int message_index = messageIndexMapping(value, config);
    displayWarning(param_name, message_index);
}

