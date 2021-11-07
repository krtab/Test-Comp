extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "partial_mod_count_1.c", 3, "reach_error");
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

int N = 1000000;
int main()
{
  int i;
  int j = 0;
  int a[N];
  unsigned int R = 1;
  for (i = 0; i < N; i++)
  {
    a[i] = i + 1;
    if (i > (N / 2))
      a[i] = i % R;

  }

  for (i = 0; i < N; i++)
  {
    if (a[i] == 0)
      j++;

    __VERIFIER_assert(j < (N / 2));
  }

  return 0;
}

