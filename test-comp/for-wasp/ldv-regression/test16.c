extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test16.c", 3, "reach_error");
}

void equal(int *a, int *b)
{
  if ((*a) != (*b))
  {
    goto ERROR;
  }

  return;
  ERROR:
  {
    reach_error();
    abort();
  }

  return;
}

int a;
int b;
int *pa;
int *pb;
int main()
{
  pa = &a;
  pb = &b;
  a = 0;
  b = 1;
  *pa = *pb;
  equal(&a, &b);
  return 0;
}

