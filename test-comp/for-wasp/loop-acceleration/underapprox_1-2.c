extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "underapprox_1-2.c", 3, "reach_error");
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

int main(void)
{
  unsigned int x = 0;
  unsigned int y = 1;
  while (x < 6)
  {
    x++;
    y *= 2;
  }

  __VERIFIER_assert(y % 3);
}

