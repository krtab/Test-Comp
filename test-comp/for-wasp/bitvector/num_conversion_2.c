extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "num_conversion_2.c", 3, "reach_error");
}

extern unsigned char __VERIFIER_nondet_uchar(char *);
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

int main()
{
  unsigned char x = __VERIFIER_nondet_uchar("x");
  unsigned char y;
  unsigned char c;
  y = 0;
  c = 0;
  while (c < ((unsigned char) 8))
  {
    unsigned char i = ((unsigned char) 1) << c;
    unsigned char bit = x & i;
    if (bit != ((unsigned char) 0))
    {
      y = y + i;
    }

    c = c + ((unsigned char) 1);
  }

  __VERIFIER_assert(x == y);
  return 0;
}

