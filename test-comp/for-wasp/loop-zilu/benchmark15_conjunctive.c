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
void reach_error(void)
{
  assert(0);
}

extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    reach_error();
  }

}

int main()
{
  int low = __VERIFIER_nondet_int("low");
  int mid = __VERIFIER_nondet_int("mid");
  int high = __VERIFIER_nondet_int("high");
  if (!__logand(__logand(low == 0, mid >= 1), high == (2 * mid)))
    return 0;

  while (mid > 0)
  {
    low = low + 1;
    high = high - 1;
    mid = mid - 1;
  }

  __VERIFIER_assert(low == high);
  return 0;
}

