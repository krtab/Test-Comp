extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "lcm1.c", 8, "reach_error");
}

extern unsigned __VERIFIER_nondet_uint(char *);
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

int counter = 0;
int main()
{
  unsigned a;
  unsigned b;
  unsigned x;
  unsigned y;
  unsigned u;
  unsigned v;
  a = __VERIFIER_nondet_uint("a");
  b = __VERIFIER_nondet_uint("b");
  assume_abort_if_not(a >= 1);
  assume_abort_if_not(b >= 1);
  assume_abort_if_not(a <= 65535);
  assume_abort_if_not(b <= 65535);
  x = a;
  y = b;
  u = b;
  v = 0;
  while ((counter++) < 20)
  {
    __VERIFIER_assert(((x * u) + (y * v)) == (a * b));
    if (!(x != y))
      break;

    while ((counter++) < 20)
    {
      __VERIFIER_assert(((x * u) + (y * v)) == (a * b));
      if (!(x > y))
        break;

      x = x - y;
      v = v + u;
    }

    while ((counter++) < 20)
    {
      __VERIFIER_assert(((x * u) + (y * v)) == (a * b));
      if (!(x < y))
        break;

      y = y - x;
      u = u + v;
    }

  }

  __VERIFIER_assert(((u * y) + (v * y)) == (a * b));
  __VERIFIER_assert(x == y);
  return 0;
}

