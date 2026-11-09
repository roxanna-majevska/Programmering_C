#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <stdbool.h>

// REQ-04: är temperaturen mellan -40 och 85?
bool is_valid_temperature(int temperature);

// REQ-02, REQ-03, REQ-06: vilken text ska visas?
const char *classify_temperature(int temperature);

#endif