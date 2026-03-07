#ifndef _TEMPLATELIB_H_
#define _TEMPLATELIB_H_

#if __has_include("config.h")
#include "config.h"
#endif

#ifndef EXAMPLE_CONFIG_VAL
#define EXAMPLE_CONFIG_VAL      (500)
#endif 

size_t example_public_func();

#endif