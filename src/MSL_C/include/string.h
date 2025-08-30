#ifndef MSL_STRING_H
#define MSL_STRING_H
#include <MSL_C/include/extras.h>
#include <MSL_C/include/mem.h>
#include <types.h>
#ifdef __cplusplus
extern "C" {
#endif

char* strcpy(char*, const char*);
char* strncpy(char*, const char*, unsigned long);

char* strcat(char*, const char*);
char* strncat(char*, const char*, unsigned long);

int strcmp(const char*, const char*);
int strncmp(const char*, const char*, unsigned long);

char* strchr(const char*, int);
char* strstr(const char*, const char*);

size_t strlen(const char*);

#ifdef __cplusplus
}
#endif
#endif
