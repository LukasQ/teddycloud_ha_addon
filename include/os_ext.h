#pragma once

#include <stdio.h>
#include "os_port.h"

FILE *osPopen(const char *command, const char *type);
int osPclose(FILE *stream);