extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "geo2.c", 8, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
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
    }

  }

  return;
}

int main()
{
  int z;
  int k;
  int x;
  int y;
  int c;
  z = __VERIFIER_nondet_int("z");
  k = __VERIFIER_nondet_int("k");
  x = 1;
  y = 1;
  c = 1;
  while (1)
  {
    __VERIFIER_assert((((1 + (x * z)) - x) - (z * y)) == 0);
    if (!(c < k))
      break;

    c = c + 1;
    x = (x * z) + 1;
    y = y * z;
  }

  __VERIFIER_assert((((1 + (x * z)) - x) - (z * y)) == 0);
  return 0;
}

