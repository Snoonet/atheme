/*
 * Copyright (c) 2005 Atheme Development Group
 * Rights to this code are as documented in doc/LICENSE.
 *
 * String stuff.
 *
 * $Id$
 */

#ifndef __CLAROSTRING
#define __CLAROSTRING

#ifndef HAVE_STRLCAT
E size_t strlcat(char *dest, const char *src, size_t count);
#endif
#ifndef HAVE_STRLCPY
E size_t strlcpy(char *dest, const char *src, size_t count);
#endif

#endif
