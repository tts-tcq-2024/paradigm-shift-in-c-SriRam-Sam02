#ifndef WARNING_CHECKER_H
#define WARNING_CHECKER_H

extern ParameterConfig;

int isLessThan(float value, ParameterConfig config);
int isGreaterThan(float value, ParameterConfig config);
int warningChecker(float value, ParameterConfig config);

#endif
