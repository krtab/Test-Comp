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

}

struct _S
{
  int n;
};
typedef struct _S S;
S a[100000];
int main()
{
  int i;
  int x;
  int y = 100;
  for (i = 0; i < 100000; i++)
  {
    x = y;
    a[i].n = y;
    y++;
  }

  for (i = 0; i < 100000; i++)
  {
    __VERIFIER_assert(a[i].n >= 100);
  }

  return 0;
}

