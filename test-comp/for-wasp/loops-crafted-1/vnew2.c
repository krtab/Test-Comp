extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "vnew2.c", 3, "reach_error");
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

int SIZE = 20000001;
unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  unsigned int n;
  unsigned int i;
  unsigned int k;
  unsigned int j;
  n = __VERIFIER_nondet_uint("n");
  if (!(n <= SIZE))
    return 0;

  i = (j = (k = 0));
  while (i < n)
  {
    i = i + 3;
    j = j + 3;
    k = k + 3;
  }

  if (n > 0)
    __VERIFIER_assert(__logand(__logand(i == j, j == k), i % (SIZE + 2)));

  return 0;
}

