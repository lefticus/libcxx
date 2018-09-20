#ifndef LIBCXX_FREESTANDING_STRING_H
#define LIBCXX_FREESTANDING_STRING_H

extern "C" {
char* strchr(const char* str, int ch);
char* strpbrk(const char* dest, const char* breakset);
size_t strcspn(const char* dest, const char* src);
char* strrchr(const char* str, int ch);
void* memchr(const void* ptr, int ch, size_t count);
size_t strlen(const char* str);
void* memset(void* dest, int ch, size_t count);
char* strtok(char* str, const char* delim);
void* memmove(void* dest, const void* src, size_t count);
size_t strspn(const char* dest, const char* src);
int strcmp(const char* lhs, const char* rhs);
int strncmp(const char* lhs, const char* rhs, size_t count);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, size_t count);
int strcoll(const char* lhs, const char* rhs);
int memcmp(const void* lhs, const void* rhs, size_t count);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, size_t count);
char* strstr(const char* str, const char* substr);
size_t strxfrm(char*  dest, const char*  src, size_t count);
void* memcpy( void * dest, const void * src, size_t count );
char* strerror( int errnum );
}

#endif
