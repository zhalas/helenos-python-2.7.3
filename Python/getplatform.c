
#include "Python.h"

#undef PLATFORM

#ifndef PLATFORM
#define PLATFORM "unknown"
#endif

const char *
Py_GetPlatform(void)
{
	return PLATFORM;
}
