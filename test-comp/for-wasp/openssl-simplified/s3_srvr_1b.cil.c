extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "s3_srvr_1b.cil.c", 3, "reach_error");
}

extern char __VERIFIER_nondet_char(char *);
extern int __VERIFIER_nondet_int(char *);
extern long __VERIFIER_nondet_long(char *);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int s__state;
  int s__hit = __VERIFIER_nondet_int("s__hit");
  int blastFlag;
  int tmp___1;
  s__state = 8466;
  blastFlag = 0;
  while (1)
  {
    if (__logand(s__state <= 8512, blastFlag > 2))
    {
      goto ERROR;
    }

    {
      {
        {
          {
            {
              if (s__state == 8466)
              {
                goto switch_1_8466;
              }
              else
              {
                {
                  {
                    if (s__state == 8512)
                    {
                      goto switch_1_8512;
                    }
                    else
                    {
                      {
                        {
                          {
                            {
                              {
                                {
                                  {
                                    {
                                      {
                                        {
                                          {
                                            {
                                              {
                                                if (s__state == 8640)
                                                {
                                                  goto switch_1_8640;
                                                }
                                                else
                                                {
                                                  {
                                                    if (s__state == 8656)
                                                    {
                                                      goto switch_1_8656;
                                                    }
                                                    else
                                                    {
                                                      {
                                                        {
                                                          goto end;
                                                          switch_1_8466:
                                                          if (blastFlag == 0)
                                                          {
                                                            blastFlag = 2;
                                                          }


                                                          if (s__hit)
                                                          {
                                                            s__state = 8656;
                                                          }
                                                          else
                                                          {
                                                            s__state = 8512;
                                                          }

                                                          goto switch_1_break;
                                                          switch_1_8512:
                                                          tmp___1 = __VERIFIER_nondet_int("tmp___1");

                                                          if (tmp___1)
                                                          {
                                                            s__state = 8466;
                                                          }
                                                          else
                                                          {
                                                            s__state = 8640;
                                                          }

                                                          goto switch_1_break;
                                                          switch_1_8640:
                                                          if (blastFlag == 3)
                                                          {
                                                            blastFlag = 4;
                                                          }


                                                          if (s__hit)
                                                          {
                                                            goto end;
                                                          }
                                                          else
                                                          {
                                                            s__state = 8656;
                                                          }

                                                          goto switch_1_break;
                                                          switch_1_8656:
                                                          if (blastFlag == 2)
                                                          {
                                                            blastFlag = 3;
                                                          }


                                                          if (blastFlag == 4)
                                                          {
                                                            blastFlag = 5;
                                                          }
                                                          else
                                                          {
                                                            if (blastFlag == 5)
                                                            {
                                                              goto ERROR;
                                                            }

                                                          }

                                                          if (s__hit)
                                                          {
                                                            s__state = 8640;
                                                          }
                                                          else
                                                          {
                                                            goto end;
                                                          }

                                                          goto switch_1_break;
                                                        }
                                                      }
                                                    }

                                                  }
                                                }

                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                  }
                }
              }

            }
          }
        }
      }
    }
    switch_1_break:
    ;

  }

  end:
  return -1;

  ERROR:
  {
    reach_error();
    abort();
  }

  return -1;
}

