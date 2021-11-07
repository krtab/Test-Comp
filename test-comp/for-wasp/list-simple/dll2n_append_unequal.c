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
typedef struct node
{
  int data;
  struct node *next;
  struct node *prev;
} *DLL;
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

DLL node_create(int data)
{
  DLL temp = (DLL) malloc(sizeof(struct node));
  if (((void *) 0) == temp)
  {
    myexit(1);
  }

  temp->next = (void *) 0;
  temp->prev = (void *) 0;
  temp->data = data;
  return temp;
}

DLL dll_create(int len, int data)
{
  DLL head = (void *) 0;
  while (len > 0)
  {
    DLL new_head = node_create(data);
    new_head->data = data;
    new_head->next = head;
    if (head)
    {
      head->prev = new_head;
    }

    head = new_head;
    len--;
  }

  return head;
}

void dll_destroy(DLL head)
{
  while (head)
  {
    DLL temp = head->next;
    free(head);
    head = temp;
  }

}

void dll_append(DLL *head, int data)
{
  DLL new_last = node_create(data);
  if (((void *) 0) == (*head))
  {
    *head = new_last;
  }
  else
  {
    DLL last = *head;
    while (last->next)
    {
      last = last->next;
    }

    last->next = new_last;
    new_last->prev = last;
  }

}

int main()
{
  const int len = 2;
  const int data = 1;
  DLL s = dll_create(len, data);
  const int uneq = 5;
  dll_append(&s, uneq);
  DLL ptr = s;
  int count = 0;
  if (ptr->next)
  {
    while (ptr->next)
    {
      if (data != ptr->data)
      {
        goto ERROR;
      }

      ptr = ptr->next;
      count++;
    }

    if (uneq != ptr->data)
    {
      goto ERROR;
    }

    count++;
  }

  if (count != (1 + len))
  {
    goto ERROR;
  }

  dll_destroy(s);
  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

