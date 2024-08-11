#include <stdbool.h>

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

int isLessThan(float value, ParameterConfig config);
int isGreaterThan(float value, ParameterConfig config);
int warningChecker(float value, ParameterConfig config);
void displayWarning(const char* param_name, int message_index);
int messageIndexMapping(float value, ParameterConfig config);
void parameterValidation(const char* param_name, float value, ParameterConfig config);

