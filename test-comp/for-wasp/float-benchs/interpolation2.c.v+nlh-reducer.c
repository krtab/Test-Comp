int __return_main;
void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "interpolation2.c.v+nlh-reducer.c", 4, "reach_error");
}

float __VERIFIER_nondet_float(char *);
void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

void __VERIFIER_assert(int cond);
int main();
int __return_136;
int main()
{
  int main__i;
  float main__z;
  float main__t;
  float main__min[5] = {5, 10, 12, 30, 150};
  float main__max[5] = {10, 12, 30, 150, 300};
  float main__org[5] = {1, 5, -10, 30, 20};
  float main__slope[5] = {4, -15, 40, -10, 0};
  main__t = __VERIFIER_nondet_float("main__t");
  int main____CPAchecker_TMP_0;
  if (main__t >= main__min[0])
  {
    if (main__t <= main__max[4UL])
    {
      main____CPAchecker_TMP_0 = 1;
      if (main____CPAchecker_TMP_0 != 0)
      {
        main__i = 0;
        if (main__i < 5UL)
        {
          if (main__t <= main__max[main__i])
          {
            label_111:
            ;

            label_124:
            ;

            main__z = main__org[main__i] + ((main__slope[main__i] * (main__t - main__min[main__i])) / (main__max[main__i] - main__min[main__i]));
            int main____CPAchecker_TMP_1;
            if (main__z >= (-10.0))
            {
              if (main__z <= 30.0)
              {
                main____CPAchecker_TMP_1 = 1;
                label_129:
                ;

                {
                  int __tmp_1;
                  __tmp_1 = main____CPAchecker_TMP_1;
                  int __VERIFIER_assert__cond;
                  __VERIFIER_assert__cond = __tmp_1;
                  if (__VERIFIER_assert__cond == 0)
                  {
                    {
                      reach_error();
                    }
                    return __return_main;
                  }
                  else
                  {
                    __return_136 = 0;
                    return __return_136;
                  }

                }
              }
              else
              {
                label_128:
                ;

                main____CPAchecker_TMP_1 = 0;
                goto label_129;
              }

            }
            else
            {
              goto label_128;
            }

          }
          else
          {
            main__i = main__i + 1;
            if (main__i < 5UL)
            {
              if (main__t <= main__max[main__i])
              {
                goto label_111;
              }
              else
              {
                main__i = main__i + 1;
                if (main__i < 5UL)
                {
                  if (main__t <= main__max[main__i])
                  {
                    goto label_111;
                  }
                  else
                  {
                    label_120:
                    ;

                    main__i = main__i + 1;
                    if (main__i < 5UL)
                    {
                      if (main__t <= main__max[main__i])
                      {
                        goto label_111;
                      }
                      else
                      {
                        goto label_120;
                      }

                    }
                    else
                    {
                      goto label_124;
                    }

                  }

                }
                else
                {
                  return __return_main;
                }

              }

            }
            else
            {
              return __return_main;
            }

          }

        }
        else
        {
          return __return_main;
        }

      }
      else
      {
        return __return_main;
      }

    }
    else
    {
      return __return_main;
    }

  }
  else
  {
    return __return_main;
  }

}

