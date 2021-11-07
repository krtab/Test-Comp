void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed long int64_t;
typedef unsigned long uint64_t;
typedef signed long intmax_t;
typedef unsigned long uintmax_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef signed long ptrdiff_t;
typedef unsigned long size_t;
typedef int wchar_t;
typedef signed long ssize_t;
typedef signed long suseconds_t;
typedef signed long useconds_t;
typedef signed long long time_t;
typedef int32_t pid_t;
typedef uint32_t uid32_t;
typedef uint32_t gid32_t;
typedef int32_t clockid_t;
typedef int32_t timer_t;
typedef long int fpos_t;
typedef uint32_t socklen_t;
typedef uint16_t sa_family_t;
void abort(void);
void *alloca(size_t);
void *calloc(size_t, size_t);
void *malloc(size_t);
void free(void *);
void *realloc(void *, size_t);
char *getenv(const char *name);
int setenv(const char *name, const char *value, int overwrite);
int unsetenv(const char *name);
long int strtol(const char *nptr, char **endptr, int base);
unsigned long int strtoul(const char *nptr, char **endptr, int base);
void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
typedef unsigned long long restr_t;
void summ_not_implemented_error(char *fname);
void summ_print_byte(char byte);
void *summ_maximize(void *sym_var, unsigned int length);
int summ_is_symbolic(void *sym_var, unsigned int length);
void *summ_new_sym_var(unsigned int length);
void summ_assume(restr_t restr);
void *_solver_Concat(void *sym_var, void *sym_var2, unsigned int length1, unsigned int length2);
void *_solver_Extract(void *sym_var, unsigned int start, unsigned int end, unsigned int length);
void *_solver_ZeroExt(void *sym_var, unsigned int to_extend, unsigned int length);
void *_solver_SignExt(void *sym_var, unsigned int to_extend, unsigned int length);
void summ_print_restriction(restr_t restr);
restr_t _solver_NOT(restr_t restr1);
restr_t _solver_Or(restr_t restr1, restr_t restr2);
restr_t _solver_And(restr_t restr1, restr_t restr2);
restr_t _solver_EQ(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_NEQ(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_LT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_LE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SLT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SLE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_IF(restr_t restr, void *sym_var, void *sym_var2, unsigned int length);
int _solver_is_it_possible(restr_t restr);
restr_t summ_true();
restr_t summ_false();
int _solver_must_be(restr_t restr);
int is_numeric(char c);
restr_t _solver_GE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_GT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SGE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SGT(void *sym_var, void *sym_var2, unsigned int length);
restr_t sym_is_numeric(void *var);
int pow(int x, unsigned n);
restr_t equal_rstr(char *s1, char *s2, int n);
int memcmp1(void *s1, void *s2, int n);
int memcmp2(void *s1, void *s2, int n);
int memcmp3(void *s1, void *s2, int n);
int memcmp4(void *s1, void *s2, int n);
void *memset1(void *str, int c, int n);
void *memcpy1(void *dest, void *src, int n);
void *memmove1(void *dest, void *src, int n);
void *memmove2(void *dest, void *src, int n);
char *memchr1(char *s, int c, int n);
char *memchr2(char *s, int c, int n);
char *memchr3(char *s, int c, int n);
char *memchr4(char *s, int c, int n);
char *strncpy1(char *dest, char *source, int n);
char *strncpy2(char *dest, char *source, int n);
int strlen1(char *s);
int strlen2(char *s);
int strlen3(char *s);
int strcmp1(char *s1, char *s2);
int strcmp2(char *s1, char *s2);
int strcmp3(char *s1, char *s2);
int strlen(char *s);
int strcmp(char *s1, char *s2);
char *strncpy(char *, char *, int);
int memcmp(void *s1, void *s2, int n);
void *memcpy(void *, void *, int);
void *memset(void *, int, int);
void *memmove(void *dest, void *src, int n);
char *memchr(char *s, int c, int n);
void c1();
void c2();
enum 
{
  STATE_1,
  STATE_2
};
struct command
{
  char *name;
  void (*function)();
  char state_needed;
};
int state = STATE_1;
char *global = 0;
const struct command commands[] = {{"c1", c1, STATE_1}, {"c2", c2, STATE_2}};
void parse_input(char *input)
{
  for (int i = 0; i < 2; i++)
  {
    if (strcmp(commands[i].name, input) == 0)
    {
      if (state >= commands[i].state_needed)
      {
        commands[i].function();
        return;
      }

    }

  }

}

void c1()
{
  char *x = (char *) malloc(sizeof(char));
  if (!x)
  {
    return;
  }

  if (global)
  {
    free(global);
  }

  global = x;
  state = STATE_2;
}

void c2()
{
  char *y = 0;
  if (__logor(!y, !global))
  {
    return;
  }

  free(y);
  free(global);
  state = STATE_1;
}

int main(void)
{
  parse_input("c1");
  parse_input("c1");
  parse_input("c2");
  return 0;
}

