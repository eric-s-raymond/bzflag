/* bzflag
 * Copyright (c) 1993 - 2004 Tim Riker
 *
 * This package is free software;  you can redistribute it and/or
 * modify it under the terms of the license found in the file
 * named COPYING that should have accompanied this file.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "config.h"

#ifndef __VERSION_H__
#define __VERSION_H__

#ifndef BZ_BUILD_DATE
#define BZ_BUILD_DATE		getBuildDate()
#endif

#ifndef BZ_CONFIG_DIR_VERSION
#define BZ_CONFIG_DIR_VERSION	"1.12"
#endif

#ifndef BZ_CONFIG_FILE_NAME
#define BZ_CONFIG_FILE_NAME	"config.cfg"
#endif

#ifndef BZ_CONFIG_FILE_VERSION
#define BZ_CONFIG_FILE_VERSION	2
#endif

extern const char copyright[];

// various version functions in buildDate.cxx
extern const char* getProtocolVersion();
extern const char* getServerVersion();
extern const char* getAppVersion();

#endif //__VERSION_H__

// Local Variables: ***
// mode:C++ ***
// tab-width: 8 ***
// c-basic-offset: 2 ***
// indent-tabs-mode: t ***
// End: ***
// ex: shiftwidth=2 tabstop=8
