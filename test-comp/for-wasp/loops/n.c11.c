extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "n.c11.c", 3, "reach_error");
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

extern _Bool __VERIFIER_nondet_bool(char *);
int main()
{
  int a[5];
  unsigned int len = 0;
  int i;
  while (__VERIFIER_nondet_bool("while_1"))
  {
    if (len == 4)
      len = 0;

    a[len] = 0;
    len++;
  }

  __VERIFIER_assert(__logand(len >= 0, len < 5));
  return 1;
}

