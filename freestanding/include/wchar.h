#ifndef LIBCXX_FREESTANDING_WCHAR_H
#define LIBCXX_FREESTANDING_WCHAR_H

#include <stddef.h>

struct mbstate_t;

wchar_t* wcschr( const wchar_t* str, wchar_t ch );
wchar_t* wcspbrk( const wchar_t* dest, const wchar_t* str );
wchar_t* wcsrchr( const wchar_t* str, wchar_t ch );
wchar_t* wcsstr( const wchar_t* dest, const wchar_t* src );
wchar_t *wmemchr( const wchar_t *ptr, wchar_t ch, size_t count );

#endif

