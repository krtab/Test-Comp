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
  y = __VERIFIER_nondet_int("y");
  while ((x + y) > 0)
  {
    x = x - 1;
    y = (-2) * y;
  }

  return 0;
}

