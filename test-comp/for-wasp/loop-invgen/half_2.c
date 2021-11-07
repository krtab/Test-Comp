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
  int i;
  int k;
  n = __VERIFIER_nondet_int("n");
  if (!(n <= 1000000))
    return 0;

  k = n;
  i = 0;
  while (i < n)
  {
    k--;
    i = i + 2;
  }

  int j = 0;
  while (j < (n / 2))
  {
    __VERIFIER_assert(k > 0);
    k--;
    j++;
  }

  return 0;
}

