extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "add-2-n-u.c", 3, "reach_error");
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

unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  int i;
  int j;
  int m = 1000;
  int n = 1500;
  unsigned int A[m][n];
  unsigned int B[m][n];
  unsigned int C[m][n];
  i = 0;
  j = 0;
  while (i < m)
  {
    j = 0;
    while (j < n)
    {
      A[i][j] = __VERIFIER_nondet_uint("A[i][j]");
      B[i][j] = __VERIFIER_nondet_uint("B[i][j]");
      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  while (i < m)
  {
    j = 0;
    while (j < n)
    {
      C[i][j] = A[i][j] + B[i][j];
      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  while (i < m)
  {
    j = 0;
    while (j < n)
    {
      __VERIFIER_assert(C[i][j] == (A[i][j] + B[i][j]));
      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

