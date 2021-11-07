extern void abort(void);
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
void reach_error()
{
  assert(0);
}

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
extern char __VERIFIER_nondet_char(char *);
extern int __VERIFIER_nondet_int(char *);
struct node_t
{
  char data;
  struct node_t *prev;
  struct node_t *next;
};
struct list_t
{
  struct node_t *first;
  struct node_t *last;
};
static void append(struct list_t *head, char input)
{
  struct node_t *node = malloc(sizeof(*node));
  node->data = input;
  if (__logand(head->first == ((void *) 0), head->last == ((void *) 0)))
  {
    head->first = node;
    head->last = node;
    node->prev = (void *) 0;
    node->next = (void *) 0;
    return;
  }

  node->prev = head->last;
  node->next = (void *) 0;
  head->last->next = node;
  head->last = node;
}

int main()
{
  struct list_t *list = malloc(sizeof(*list));
  list->first = (void *) 0;
  list->last = (void *) 0;
  struct list_t *list2 = malloc(sizeof(*list2));
  list2->first = (void *) 0;
  list2->last = (void *) 0;
  char userInput;
  do
  {
    char userInput = __VERIFIER_nondet_char("userInput");
    append(list, userInput);
  }
  while (__VERIFIER_nondet_int("while_1"));
  int length = 5;
  int c = 0;
  for (c = 0; c < 5; c++)
  {
    char userInput = __VERIFIER_nondet_char("userInput");
    append(list2, userInput);
  }

  struct node_t *cursor = list->first;
  struct node_t *next = cursor->next;
  while (cursor != ((void *) 0))
  {
    next = cursor->next;
    free(cursor);
    cursor = next;
  }

  cursor = list2->last;
  struct node_t *prev = cursor->prev;
  for (c = 0; c < 5; c++)
  {
    prev = cursor->prev;
    free(cursor);
    cursor = prev;
  }

  cursor = (void *) 0;
  prev = (void *) 0;
  next = (void *) 0;
  free(list2);
  free(list);
  return 0;
}

