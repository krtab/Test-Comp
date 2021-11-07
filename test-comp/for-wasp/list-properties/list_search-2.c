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

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
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
typedef struct list
{
  int key;
  struct list *next;
} mlist;
mlist *head;
mlist *search_list(mlist *l, int k)
{
  l = head;
  while (__logand(l != ((void *) 0), l->key != k))
  {
    l = l->next;
  }

  return l;
}

int delete_list(mlist *l)
{
  mlist *tmp;
  tmp = head;
  if (head != l)
  {
    while (tmp->next != l)
    {
      tmp = tmp->next;
    }

  }
  else
  {
    head = l->next;
  }

  tmp->next = l->next;
  free(l);
  return 0;
}

int insert_list(mlist *l, int k)
{
  l = (mlist *) malloc(sizeof(mlist));
  if (head == ((void *) 0))
  {
    l->key = k;
    l->next = (void *) 0;
  }
  else
  {
    l->key = k;
    l->next = head;
  }

  head = l;
  return 0;
}

int main(void)
{
  int i;
  mlist *mylist = 0;
  mlist *temp;
  insert_list(mylist, 2);
  insert_list(mylist, 5);
  insert_list(mylist, 1);
  insert_list(mylist, 3);
  mylist = head;
  while (mylist)
  {
    mylist = mylist->next;
  }

  temp = search_list(mylist, 2);
  __VERIFIER_assert(temp->key == 2);
  delete_list(temp);
  mylist = head;
  while (mylist)
  {
    mylist = mylist->next;
  }

  return 0;
}

