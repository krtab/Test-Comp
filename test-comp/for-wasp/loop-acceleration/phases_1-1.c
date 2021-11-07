extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "phases_1-1.c", 3, "reach_error");
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
  while (x < 0x0fffffff)
  {
    if (x < 0xfff0)
    {
      x++;
    }
    else
    {
      x += 2;
    }

  }

  __VERIFIER_assert(!(x % 2));
}

