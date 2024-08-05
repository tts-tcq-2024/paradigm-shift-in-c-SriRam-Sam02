#ifndef BATTERY_CONDITION_STATUS_H
#define BATTERY_CONDITION_STATUS_H

enum Language { ENGLISH, GERMAN };
enum Language language = 1;

typedef struct {
    float min;
    float max;
    float warning_tolerance;
    bool enable_warning;
} ParameterConfig;

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

#endif