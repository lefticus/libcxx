#ifndef LIBCXX_FREESTANDING_STDLIB_H
#define LIBCXX_FREESTANDING_STDLIB_H

struct mbstate_t;

struct div_t {
  int quot;
  int rem;
};
struct ldiv_t {
  long quot;
  long rem;
};
struct lldiv_t {
  long long quot;
  long long rem;
};

long labs(long n);
long long llabs(long long n);
div_t div(int x, int y);
ldiv_t ldiv(long x, long y);
lldiv_t lldiv(long long x, long long y);

double atof(const char* str);
int atoi(const char* str);
long atol(const char* str);
long long atoll(const char* str);

float strtof(const char* str, char** str_end);
double strtod(const char* str, char** str_end);
long double strtold(const char* str, char** str_end);

long strtol(const char* str, char** str_end, int base);
long long strtoll(const char* str, char** str_end, int base);

unsigned long strtoul(const char* str, char** str_end, int base);
unsigned long long strtoull(const char* str, char** str_end, int base);

int rand();
void srand(unsigned seed);

void* calloc(size_t num, size_t size);
void* malloc(size_t size);

void free(void* ptr);
void* realloc(void* ptr, size_t new_size);

void abort(void);
int atexit(void (*func)(void));
void exit(int exit_code);
void _Exit(int exit_code);
char* getenv(const char* name);

int system(const char* command);
void* bsearch(const void* key, const void* ptr, size_t count, size_t size,
              int (*comp)(const void*, const void*));
void qsort(void* ptr, size_t count, size_t size,
           int (*comp)(const void*, const void*));
size_t wcstombs(char* dst, const wchar_t* src, size_t len);
int wctomb(char* s, wchar_t wc);
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* pwc, const char* s, size_t n);
size_t mbrtowc(wchar_t* pwc, const char* s, size_t n, mbstate_t* ps);
size_t mbstowcs(wchar_t* dst, const char* src, size_t len);

#endif
