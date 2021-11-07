extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "prodbin-ll.c", 6, "reach_error");
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
  int a;
  int b;
  long long x;
  long long y;
  long long z;
  a = __VERIFIER_nondet_int("a");
  assume_abort_if_not(__logand(a >= 0, a <= 50));
  b = __VERIFIER_nondet_int("b");
  assume_abort_if_not(__logand(b >= 0, b <= 50));
  assume_abort_if_not(b >= 1);
  x = a;
  y = b;
  z = 0;
  while (1)
  {
    __VERIFIER_assert((z + (x * y)) == (((long long) a) * b));
    if (!(y != 0))
      break;

    if ((y % 2) == 1)
    {
      z = z + x;
      y = y - 1;
    }

    x = 2 * x;
    y = y / 2;
  }

  __VERIFIER_assert(z == (((long long) a) * b));
  return 0;
}

