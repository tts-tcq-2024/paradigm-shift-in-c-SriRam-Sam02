#ifndef BATTERY_CONDITION_STATUS_H
#define BATTERY_CONDITION_STATUS_H
#include <stdbool.h>

typedef struct {
    float min;
    float max;
    float warning_tolerance;
    bool enable_warning;
} ParameterConfig;

int isLessThan(float value, ParameterConfig config);
int isGreaterThan(float value, ParameterConfig config);
int warningChecker(float value, ParameterConfig config);
void displayWarning(const char* param_name, int message_index);
int messageIndexMapping(float value, ParameterConfig config);
void parameterValidation(const char* param_name, float value, ParameterConfig config);

#endif
