void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
int __VERIFIER_nondet_int(char *);
void reach_error()
{
  __assert_fail("0", "AllInterval-005.c", 5, "reach_error");
}

int main()
{
  int cond0;
  int dummy = 0;
  int N;
  int var0;
  var0 = __VERIFIER_nondet_int("var0");
  assume(var0 >= 0);
  assume(var0 <= 4);
  int var1;
  var1 = __VERIFIER_nondet_int("var1");
  assume(var1 >= 0);
  assume(var1 <= 4);
  int var2;
  var2 = __VERIFIER_nondet_int("var2");
  assume(var2 >= 0);
  assume(var2 <= 4);
  int var3;
  var3 = __VERIFIER_nondet_int("var3");
  assume(var3 >= 0);
  assume(var3 <= 4);
  int var4;
  var4 = __VERIFIER_nondet_int("var4");
  assume(var4 >= 0);
  assume(var4 <= 4);
  int var5;
  var5 = __VERIFIER_nondet_int("var5");
  assume(var5 >= 1);
  assume(var5 <= 4);
  int var6;
  var6 = __VERIFIER_nondet_int("var6");
  assume(var6 >= 1);
  assume(var6 <= 4);
  int var7;
  var7 = __VERIFIER_nondet_int("var7");
  assume(var7 >= 1);
  assume(var7 <= 4);
  int var8;
  var8 = __VERIFIER_nondet_int("var8");
  assume(var8 >= 1);
  assume(var8 <= 4);
  int myvar0 = 1;
  assume(var0 != var1);
  assume(var0 != var2);
  assume(var0 != var3);
  assume(var0 != var4);
  assume(var1 != var2);
  assume(var1 != var3);
  assume(var1 != var4);
  assume(var2 != var3);
  assume(var2 != var4);
  assume(var3 != var4);
  assume(var5 != var6);
  assume(var5 != var7);
  assume(var5 != var8);
  assume(var6 != var7);
  assume(var6 != var8);
  assume(var7 != var8);
  int var_for_abs;
  var_for_abs = var0 - var1;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var5 == var_for_abs);
  var_for_abs = var1 - var2;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var6 == var_for_abs);
  var_for_abs = var2 - var3;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var7 == var_for_abs);
  var_for_abs = var3 - var4;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var8 == var_for_abs);
  reach_error();
  return 0;
}

