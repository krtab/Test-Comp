extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "id_i20_o20-2.c", 4, "reach_error");
}

int id(int x)
{
  if (x == 0)
    return 0;

  return id(x - 1) + 1;
}

int main(void)
{
  int input = 20;
  int result = id(input);
  if (result == 20)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

