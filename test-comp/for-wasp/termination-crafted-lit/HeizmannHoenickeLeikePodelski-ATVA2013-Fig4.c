typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int y;
  x = __VERIFIER_nondet_int("x");
  y = 23;
  while (x >= y)
  {
    x = x - 1;
  }

  return 0;
}

