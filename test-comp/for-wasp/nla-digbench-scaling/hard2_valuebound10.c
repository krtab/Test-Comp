extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "hard2.c", 8, "reach_error");
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
  int A;
  int B;
  int r;
  int d;
  int p;
  int q;
  A = __VERIFIER_nondet_int("A");
  assume_abort_if_not(__logand(A >= 0, A <= 10));
  B = 1;
  r = A;
  d = B;
  p = 1;
  q = 0;
  while (1)
  {
    __VERIFIER_assert(q == 0);
    __VERIFIER_assert(r == A);
    __VERIFIER_assert(d == (B * p));
    if (!(r >= d))
      break;

    d = 2 * d;
    p = 2 * p;
  }

  while (1)
  {
    __VERIFIER_assert(A == ((q * B) + r));
    __VERIFIER_assert(d == (B * p));
    if (!(p != 1))
      break;

    d = d / 2;
    p = p / 2;
    if (r >= d)
    {
      r = r - d;
      q = q + p;
    }

  }

  __VERIFIER_assert(A == ((d * q) + r));
  __VERIFIER_assert(B == d);
  return 0;
}

