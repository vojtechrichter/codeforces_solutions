#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <assert.h>
#include <inttypes.h>

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;
typedef int8_t S8;
typedef int16_t S16;
typedef int32_t S32;
typedef int64_t S64;
typedef float F32;
typedef double F64;

#define Min(A,B) (((A)<(B))?(A):(B))
#define Max(A,B) (((A)>(B))?(A):(B))

#define MAX_BUF_SIZE 1024
#define DEFAULT_BUF_SIZE MAX_BUF_SIZE

static char *readline(char *buffer, size_t buffer_size)
{
    #if defined(SUBMIT_CASE)
    char *result = gets(buffer);
    #endif

    char *result = gets_s(buffer, buffer_size);

    return(buffer);
}

#endif // TEMPLATE_H