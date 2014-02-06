#ifndef TMEM_H
#define TMEM_H
#include <stddef.h>

int memcmp(const void*, const void*, size_t);
void* memcpy(void*, const void*, size_t);
void* memmove(void*, const void*, size_t);
void* memset(void*, int, size_t);

#endif
