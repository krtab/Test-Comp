extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test22-2.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
struct dummy
{
  int a;
  int b;
};
struct dummy d1;
struct dummy d2;
void init()
{
  d1.a = __VERIFIER_nondet_int("a");
  d1.b = __VERIFIER_nondet_int("b");
  d2.a = __VERIFIER_nondet_int("a");
  d2.b = __VERIFIER_nondet_int("b");
}

struct dummy *get_dummy()
{
  return (__VERIFIER_nondet_bool("return_1")) ? (&d1) : (&d2);
}

int check(struct dummy *s1, int i)
{
  return s1->a == i;
}

int main()
{
  init();
  struct dummy *pd1 = get_dummy();
  struct dummy *pd2 = get_dummy();
  struct dummy *pd3 = get_dummy();
  int i = __VERIFIER_nondet_int("i");
  if (__logand(__logand(pd1 != 0, pd1 == pd2), (*pd2).a > 0))
  {
    int *pa = &pd1->a;
    i = pd3->a - 10;
    while (i < (*pa))
    {
      ++i;
    }

    if (!check(pd2, i))
    {
      goto ERROR;
    }

  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

