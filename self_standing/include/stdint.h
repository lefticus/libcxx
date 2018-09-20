#ifndef LIBCXX_FREESTANDING_STDINT_H
#define LIBCXX_FREESTANDING_STDINT_H

static_assert(sizeof(long long) == 8);
using int64_t = signed long long;
using uint64_t = unsigned long long;
using int_least64_t = int64_t;
using uint_least64_t = uint64_t;
using int_fast64_t = int64_t;
using uint_fast64_t = uint64_t;

static_assert(sizeof(int) == 4);
using int32_t = signed int;
using uint32_t = unsigned int;
using int_least32_t = int32_t;
using uint_least32_t = uint32_t;
using int_fast32_t = int32_t;
using uint_fast32_t = uint32_t;

static_assert(sizeof(short) == 2);
using int16_t = signed short;
using uint16_t = unsigned short;
using int_least16_t = int16_t;
using uint_least16_t = uint16_t;
using int_fast16_t = int32_t;
using uint_fast16_t = uint32_t;

static_assert(sizeof(char) == 1);
using int8_t = signed char;
using uint8_t = unsigned char;
using int_least8_t = int8_t;
using uint_least8_t = uint8_t;
using int_fast8_t = int8_t;
using uint_fast8_t = uint8_t;

using intptr_t = int32_t;
using uintptr_t = uint32_t;
using intmax_t = int64_t;
using uintmax_t = uint64_t;

#endif
