#ifndef WARNING_PARAMETERS_H
#define WARNING_PARAMETERS_H
#include <stdbool.h>

enum Language { ENGLISH, GERMAN };
enum Language language = 1;

const char *messages[2][5] = {
    {
        "Normal",
        "Warning: Approaching discharge",
        "Warning: Approaching charge-peak",
        "Alarm: Low limit breached",
        "Alarm: High limit breached"
    },
    {
        "Normal",
        "Warnung: Entladung nähert sich",
        "Warnung: Ladehöhe nähert sich",
        "Alarm: Untergrenze überschritten",
        "Alarm: Obergrenze überschritten"
    }
};

typedef struct {
    float min;
    float max;
    float warning_tolerance;
    bool enable_warning;
} ParameterConfig;

extern const char messages[][];

#endif
