/***********************************************************************************************************************************
BZ2 Common

Developed using the documentation in https://www.sourceware.org/bzip2/manual/manual.html#libprog
***********************************************************************************************************************************/
#ifndef COMMON_COMPRESS_BZ2_COMMON_H
#define COMMON_COMPRESS_BZ2_COMMON_H

#include <stddef.h>

/***********************************************************************************************************************************
BZ2 extension
***********************************************************************************************************************************/
#define BZ2_EXT                                                     "bz2"

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
int bz2Error(int error);

#endif
