typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int j;
  int m;
  int n;
  n = __VERIFIER_nondet_int("n");
  m = __VERIFIER_nondet_int("m");
  if (__logand(m > 0, n > m))
  {
    i = 0;
    j = 0;
    while (i < n)
    {
      if (j < m)
      {
        j = j + 1;
      }
      else
      {
        j = 0;
        i = i + 1;
      }

    }

  }

  return 0;
}

