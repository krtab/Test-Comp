extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "indp5.c", 10, "reach_error");
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

}

extern int __VERIFIER_nondet_int(char *);
void *malloc(unsigned int size);
int N;
int main()
{
  N = __VERIFIER_nondet_int("N");
  if (N <= 0)
    return 1;

  assume_abort_if_not(N <= (2147483647 / (sizeof(int))));
  long long i;
  long long *a = malloc((sizeof(long long)) * N);
  long long sum[1];
  sum[0] = 0;
  for (i = 0; i < N; i++)
  {
    a[i] = (i + 1) * (i + 1);
  }

  for (i = 0; i < N; i++)
  {
    a[i] = a[i] - (i * i);
  }

  for (i = 0; i < N; i++)
  {
    a[i] = a[i] - i;
  }

  for (i = 0; i < N; i++)
  {
    a[i] = a[i] - i;
  }

  for (i = 0; i < N; i++)
  {
    sum[0] = sum[0] + a[i];
  }

  __VERIFIER_assert(sum[0] == N);
  return 1;
}

