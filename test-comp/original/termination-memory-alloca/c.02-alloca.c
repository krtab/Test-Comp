#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int test_fun(int x, int y)
{
    int* x_ref = alloca(sizeof(int));
    int* y_ref = alloca(sizeof(int));
    int* c = alloca(sizeof(int));
    *x_ref = x;
    *y_ref = y;
    *c = 0;
    while (*x_ref >= 0 && *x_ref < 2147483647) {
        *x_ref = *x_ref + 1;
        *y_ref = 1;
        while (*x_ref > *y_ref) {
            *y_ref = *y_ref + 1;
        }
        *x_ref = *x_ref - 2;
    }
    return *c;
}

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  return test_fun(x,y);
}
