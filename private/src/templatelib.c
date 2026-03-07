#include <errno.h>
#include <stddef.h>
#include "FreeRTOS.h"

#include "templatelib.h"
#include "templatelib-priv.h"


size_t example_public_func()
{
    return example_private_func();
}

size_t example_private_func()
{
    return EXAMPLE_CONFIG_VAL;
}