#ifndef LIBCXX_FREESTANDING_STDDEF_H
#define LIBCXX_FREESTANDING_STDDEF_H

static_assert(sizeof(unsigned int) == 4);
using size_t = unsigned int;

using ptrdiff_t = signed int;


#endif
