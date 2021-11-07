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

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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

int __VERIFIER_nondet_int();
int main()
{
  int n;
  int sum;
  int i;
  n = __VERIFIER_nondet_int("n");
  if (!__logand(1 <= n, n <= 1000))
    return 0;

  sum = 0;
  for (i = 1; i <= n; i++)
  {
    sum = sum + i;
  }

  __VERIFIER_assert((2 * sum) == (n * (n + 1)));
  return 0;
}

