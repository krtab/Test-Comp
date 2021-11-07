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
  __assert_fail("0", "AllInterval-015.c", 5, "reach_error");
}

int main()
{
  int cond0;
  int dummy = 0;
  int N;
  int var0;
  var0 = __VERIFIER_nondet_int("var0");
  assume(var0 >= 0);
  assume(var0 <= 14);
  int var1;
  var1 = __VERIFIER_nondet_int("var1");
  assume(var1 >= 0);
  assume(var1 <= 14);
  int var2;
  var2 = __VERIFIER_nondet_int("var2");
  assume(var2 >= 0);
  assume(var2 <= 14);
  int var3;
  var3 = __VERIFIER_nondet_int("var3");
  assume(var3 >= 0);
  assume(var3 <= 14);
  int var4;
  var4 = __VERIFIER_nondet_int("var4");
  assume(var4 >= 0);
  assume(var4 <= 14);
  int var5;
  var5 = __VERIFIER_nondet_int("var5");
  assume(var5 >= 0);
  assume(var5 <= 14);
  int var6;
  var6 = __VERIFIER_nondet_int("var6");
  assume(var6 >= 0);
  assume(var6 <= 14);
  int var7;
  var7 = __VERIFIER_nondet_int("var7");
  assume(var7 >= 0);
  assume(var7 <= 14);
  int var8;
  var8 = __VERIFIER_nondet_int("var8");
  assume(var8 >= 0);
  assume(var8 <= 14);
  int var9;
  var9 = __VERIFIER_nondet_int("var9");
  assume(var9 >= 0);
  assume(var9 <= 14);
  int var10;
  var10 = __VERIFIER_nondet_int("var10");
  assume(var10 >= 0);
  assume(var10 <= 14);
  int var11;
  var11 = __VERIFIER_nondet_int("var11");
  assume(var11 >= 0);
  assume(var11 <= 14);
  int var12;
  var12 = __VERIFIER_nondet_int("var12");
  assume(var12 >= 0);
  assume(var12 <= 14);
  int var13;
  var13 = __VERIFIER_nondet_int("var13");
  assume(var13 >= 0);
  assume(var13 <= 14);
  int var14;
  var14 = __VERIFIER_nondet_int("var14");
  assume(var14 >= 0);
  assume(var14 <= 14);
  int var15;
  var15 = __VERIFIER_nondet_int("var15");
  assume(var15 >= 1);
  assume(var15 <= 14);
  int var16;
  var16 = __VERIFIER_nondet_int("var16");
  assume(var16 >= 1);
  assume(var16 <= 14);
  int var17;
  var17 = __VERIFIER_nondet_int("var17");
  assume(var17 >= 1);
  assume(var17 <= 14);
  int var18;
  var18 = __VERIFIER_nondet_int("var18");
  assume(var18 >= 1);
  assume(var18 <= 14);
  int var19;
  var19 = __VERIFIER_nondet_int("var19");
  assume(var19 >= 1);
  assume(var19 <= 14);
  int var20;
  var20 = __VERIFIER_nondet_int("var20");
  assume(var20 >= 1);
  assume(var20 <= 14);
  int var21;
  var21 = __VERIFIER_nondet_int("var21");
  assume(var21 >= 1);
  assume(var21 <= 14);
  int var22;
  var22 = __VERIFIER_nondet_int("var22");
  assume(var22 >= 1);
  assume(var22 <= 14);
  int var23;
  var23 = __VERIFIER_nondet_int("var23");
  assume(var23 >= 1);
  assume(var23 <= 14);
  int var24;
  var24 = __VERIFIER_nondet_int("var24");
  assume(var24 >= 1);
  assume(var24 <= 14);
  int var25;
  var25 = __VERIFIER_nondet_int("var25");
  assume(var25 >= 1);
  assume(var25 <= 14);
  int var26;
  var26 = __VERIFIER_nondet_int("var26");
  assume(var26 >= 1);
  assume(var26 <= 14);
  int var27;
  var27 = __VERIFIER_nondet_int("var27");
  assume(var27 >= 1);
  assume(var27 <= 14);
  int var28;
  var28 = __VERIFIER_nondet_int("var28");
  assume(var28 >= 1);
  assume(var28 <= 14);
  int myvar0 = 1;
  assume(var0 != var1);
  assume(var0 != var2);
  assume(var0 != var3);
  assume(var0 != var4);
  assume(var0 != var5);
  assume(var0 != var6);
  assume(var0 != var7);
  assume(var0 != var8);
  assume(var0 != var9);
  assume(var0 != var10);
  assume(var0 != var11);
  assume(var0 != var12);
  assume(var0 != var13);
  assume(var0 != var14);
  assume(var1 != var2);
  assume(var1 != var3);
  assume(var1 != var4);
  assume(var1 != var5);
  assume(var1 != var6);
  assume(var1 != var7);
  assume(var1 != var8);
  assume(var1 != var9);
  assume(var1 != var10);
  assume(var1 != var11);
  assume(var1 != var12);
  assume(var1 != var13);
  assume(var1 != var14);
  assume(var2 != var3);
  assume(var2 != var4);
  assume(var2 != var5);
  assume(var2 != var6);
  assume(var2 != var7);
  assume(var2 != var8);
  assume(var2 != var9);
  assume(var2 != var10);
  assume(var2 != var11);
  assume(var2 != var12);
  assume(var2 != var13);
  assume(var2 != var14);
  assume(var3 != var4);
  assume(var3 != var5);
  assume(var3 != var6);
  assume(var3 != var7);
  assume(var3 != var8);
  assume(var3 != var9);
  assume(var3 != var10);
  assume(var3 != var11);
  assume(var3 != var12);
  assume(var3 != var13);
  assume(var3 != var14);
  assume(var4 != var5);
  assume(var4 != var6);
  assume(var4 != var7);
  assume(var4 != var8);
  assume(var4 != var9);
  assume(var4 != var10);
  assume(var4 != var11);
  assume(var4 != var12);
  assume(var4 != var13);
  assume(var4 != var14);
  assume(var5 != var6);
  assume(var5 != var7);
  assume(var5 != var8);
  assume(var5 != var9);
  assume(var5 != var10);
  assume(var5 != var11);
  assume(var5 != var12);
  assume(var5 != var13);
  assume(var5 != var14);
  assume(var6 != var7);
  assume(var6 != var8);
  assume(var6 != var9);
  assume(var6 != var10);
  assume(var6 != var11);
  assume(var6 != var12);
  assume(var6 != var13);
  assume(var6 != var14);
  assume(var7 != var8);
  assume(var7 != var9);
  assume(var7 != var10);
  assume(var7 != var11);
  assume(var7 != var12);
  assume(var7 != var13);
  assume(var7 != var14);
  assume(var8 != var9);
  assume(var8 != var10);
  assume(var8 != var11);
  assume(var8 != var12);
  assume(var8 != var13);
  assume(var8 != var14);
  assume(var9 != var10);
  assume(var9 != var11);
  assume(var9 != var12);
  assume(var9 != var13);
  assume(var9 != var14);
  assume(var10 != var11);
  assume(var10 != var12);
  assume(var10 != var13);
  assume(var10 != var14);
  assume(var11 != var12);
  assume(var11 != var13);
  assume(var11 != var14);
  assume(var12 != var13);
  assume(var12 != var14);
  assume(var13 != var14);
  assume(var15 != var16);
  assume(var15 != var17);
  assume(var15 != var18);
  assume(var15 != var19);
  assume(var15 != var20);
  assume(var15 != var21);
  assume(var15 != var22);
  assume(var15 != var23);
  assume(var15 != var24);
  assume(var15 != var25);
  assume(var15 != var26);
  assume(var15 != var27);
  assume(var15 != var28);
  assume(var16 != var17);
  assume(var16 != var18);
  assume(var16 != var19);
  assume(var16 != var20);
  assume(var16 != var21);
  assume(var16 != var22);
  assume(var16 != var23);
  assume(var16 != var24);
  assume(var16 != var25);
  assume(var16 != var26);
  assume(var16 != var27);
  assume(var16 != var28);
  assume(var17 != var18);
  assume(var17 != var19);
  assume(var17 != var20);
  assume(var17 != var21);
  assume(var17 != var22);
  assume(var17 != var23);
  assume(var17 != var24);
  assume(var17 != var25);
  assume(var17 != var26);
  assume(var17 != var27);
  assume(var17 != var28);
  assume(var18 != var19);
  assume(var18 != var20);
  assume(var18 != var21);
  assume(var18 != var22);
  assume(var18 != var23);
  assume(var18 != var24);
  assume(var18 != var25);
  assume(var18 != var26);
  assume(var18 != var27);
  assume(var18 != var28);
  assume(var19 != var20);
  assume(var19 != var21);
  assume(var19 != var22);
  assume(var19 != var23);
  assume(var19 != var24);
  assume(var19 != var25);
  assume(var19 != var26);
  assume(var19 != var27);
  assume(var19 != var28);
  assume(var20 != var21);
  assume(var20 != var22);
  assume(var20 != var23);
  assume(var20 != var24);
  assume(var20 != var25);
  assume(var20 != var26);
  assume(var20 != var27);
  assume(var20 != var28);
  assume(var21 != var22);
  assume(var21 != var23);
  assume(var21 != var24);
  assume(var21 != var25);
  assume(var21 != var26);
  assume(var21 != var27);
  assume(var21 != var28);
  assume(var22 != var23);
  assume(var22 != var24);
  assume(var22 != var25);
  assume(var22 != var26);
  assume(var22 != var27);
  assume(var22 != var28);
  assume(var23 != var24);
  assume(var23 != var25);
  assume(var23 != var26);
  assume(var23 != var27);
  assume(var23 != var28);
  assume(var24 != var25);
  assume(var24 != var26);
  assume(var24 != var27);
  assume(var24 != var28);
  assume(var25 != var26);
  assume(var25 != var27);
  assume(var25 != var28);
  assume(var26 != var27);
  assume(var26 != var28);
  assume(var27 != var28);
  int var_for_abs;
  var_for_abs = var0 - var1;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var15 == var_for_abs);
  var_for_abs = var1 - var2;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var16 == var_for_abs);
  var_for_abs = var2 - var3;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var17 == var_for_abs);
  var_for_abs = var3 - var4;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var18 == var_for_abs);
  var_for_abs = var4 - var5;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var19 == var_for_abs);
  var_for_abs = var5 - var6;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var20 == var_for_abs);
  var_for_abs = var6 - var7;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var21 == var_for_abs);
  var_for_abs = var7 - var8;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var22 == var_for_abs);
  var_for_abs = var8 - var9;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var23 == var_for_abs);
  var_for_abs = var9 - var10;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var24 == var_for_abs);
  var_for_abs = var10 - var11;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var25 == var_for_abs);
  var_for_abs = var11 - var12;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var26 == var_for_abs);
  var_for_abs = var12 - var13;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var27 == var_for_abs);
  var_for_abs = var13 - var14;
  var_for_abs = __ternary(var_for_abs >= 0, var_for_abs, var_for_abs * (-1));
  assume(var28 == var_for_abs);
  reach_error();
  return 0;
}

