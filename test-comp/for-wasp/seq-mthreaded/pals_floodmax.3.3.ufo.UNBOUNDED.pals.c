extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "pals_floodmax.3.3.ufo.UNBOUNDED.pals.c", 3, "reach_error");
}

char __VERIFIER_nondet_char(char *);
unsigned char __VERIFIER_nondet_uchar(char *);
_Bool __VERIFIER_nondet_bool(char *);
void __VERIFIER_assert(_Bool arg);
void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

typedef char msg_t;
typedef int port_t;
extern void read(port_t p, msg_t m);
extern void write(port_t p, msg_t m);
msg_t nomsg = (msg_t) (-1);
port_t p12;
char p12_old;
char p12_new;
_Bool ep12;
port_t p13;
char p13_old;
char p13_new;
_Bool ep13;
port_t p21;
char p21_old;
char p21_new;
_Bool ep21;
port_t p23;
char p23_old;
char p23_new;
_Bool ep23;
port_t p31;
char p31_old;
char p31_new;
_Bool ep31;
port_t p32;
char p32_old;
char p32_new;
_Bool ep32;
char id1;
unsigned char r1;
char st1;
char nl1;
char m1;
char max1;
_Bool mode1;
char id2;
unsigned char r2;
char st2;
char nl2;
char m2;
char max2;
_Bool mode2;
char id3;
unsigned char r3;
char st3;
char nl3;
char m3;
char max3;
_Bool mode3;
void node1(void)
{
  {
    if (mode1)
    {
      if (r1 == 255)
      {
        r1 = 2;
      }

      r1 = r1 + 1;
      if (ep21)
      {
        m1 = p21_old;
        p21_old = nomsg;
        if (((int) m1) > ((int) max1))
        {
          max1 = m1;
        }

      }

      if (ep31)
      {
        m1 = p31_old;
        p31_old = nomsg;
        if (((int) m1) > ((int) max1))
        {
          max1 = m1;
        }

      }

      if (((int) r1) == 2)
      {
        if (((int) max1) == ((int) id1))
        {
          nl1 = (char) 1;
        }
        else
        {
          st1 = (char) 1;
        }

      }

      mode1 = (_Bool) 0;
    }
    else
    {
      if (((int) r1) < 2)
      {
        if (ep12)
        {
          p12_new = (__logand(max1 != nomsg, p12_new == nomsg)) ? (max1) : (p12_new);
        }

        if (ep13)
        {
          p13_new = (__logand(max1 != nomsg, p13_new == nomsg)) ? (max1) : (p13_new);
        }

      }

      mode1 = (_Bool) 1;
    }

    return;
  }
}

void node2(void)
{
  {
    if (mode2)
    {
      if (r2 == 255)
      {
        r2 = 2;
      }

      r2 = r2 + 1;
      if (ep12)
      {
        m2 = p12_old;
        p12_old = nomsg;
        if (((int) m2) > ((int) max2))
        {
          max2 = m2;
        }

      }

      if (ep32)
      {
        m2 = p32_old;
        p32_old = nomsg;
        if (((int) m2) > ((int) max2))
        {
          max2 = m2;
        }

      }

      if (((int) r2) == 2)
      {
        if (((int) max2) == ((int) id2))
        {
          st2 = (char) 1;
        }
        else
        {
          nl2 = (char) 1;
        }

      }

      mode2 = (_Bool) 0;
    }
    else
    {
      if (((int) r2) < 2)
      {
        if (ep21)
        {
          p21_new = (__logand(max2 != nomsg, p21_new == nomsg)) ? (max2) : (p21_new);
        }

        if (ep23)
        {
          p23_new = (__logand(max2 != nomsg, p23_new == nomsg)) ? (max2) : (p23_new);
        }

      }

      mode2 = (_Bool) 1;
    }

    return;
  }
}

void node3(void)
{
  {
    if (mode3)
    {
      if (r3 == 255)
      {
        r3 = 2;
      }

      r3 = r3 + 1;
      if (ep13)
      {
        m3 = p13_old;
        p13_old = nomsg;
        if (((int) m3) > ((int) max3))
        {
          max3 = m3;
        }

      }

      if (ep23)
      {
        m3 = p23_old;
        p23_old = nomsg;
        if (((int) m3) > ((int) max3))
        {
          max3 = m3;
        }

      }

      if (((int) r3) == 2)
      {
        if (((int) max3) == ((int) id3))
        {
          st3 = (char) 1;
        }
        else
        {
          nl3 = (char) 1;
        }

      }

      mode3 = (_Bool) 0;
    }
    else
    {
      if (((int) r3) < 2)
      {
        if (ep31)
        {
          p31_new = (__logand(max3 != nomsg, p31_new == nomsg)) ? (max3) : (p31_new);
        }

        if (ep32)
        {
          p32_new = (__logand(max3 != nomsg, p32_new == nomsg)) ? (max3) : (p32_new);
        }

      }

      mode3 = (_Bool) 1;
    }

    return;
  }
}

int init(void)
{
  _Bool r121;
  _Bool r131;
  _Bool r211;
  _Bool r231;
  _Bool r311;
  _Bool r321;
  _Bool r122;
  int tmp;
  _Bool r132;
  int tmp___0;
  _Bool r212;
  int tmp___1;
  _Bool r232;
  int tmp___2;
  _Bool r312;
  int tmp___3;
  _Bool r322;
  int tmp___4;
  int tmp___5;
  {
    r121 = ep12;
    r131 = ep13;
    r211 = ep21;
    r231 = ep23;
    r311 = ep31;
    r321 = ep32;
    if (r121)
    {
      tmp = 1;
    }
    else
      if (r131)
    {
      if (ep32)
      {
        tmp = 1;
      }
      else
      {
        tmp = 0;
      }

    }
    else
    {
      tmp = 0;
    }


    r122 = (_Bool) tmp;
    if (r131)
    {
      tmp___0 = 1;
    }
    else
      if (r121)
    {
      if (ep23)
      {
        tmp___0 = 1;
      }
      else
      {
        tmp___0 = 0;
      }

    }
    else
    {
      tmp___0 = 0;
    }


    r132 = (_Bool) tmp___0;
    if (r211)
    {
      tmp___1 = 1;
    }
    else
      if (r231)
    {
      if (ep31)
      {
        tmp___1 = 1;
      }
      else
      {
        tmp___1 = 0;
      }

    }
    else
    {
      tmp___1 = 0;
    }


    r212 = (_Bool) tmp___1;
    if (r231)
    {
      tmp___2 = 1;
    }
    else
      if (r211)
    {
      if (ep13)
      {
        tmp___2 = 1;
      }
      else
      {
        tmp___2 = 0;
      }

    }
    else
    {
      tmp___2 = 0;
    }


    r232 = (_Bool) tmp___2;
    if (r311)
    {
      tmp___3 = 1;
    }
    else
      if (r321)
    {
      if (ep21)
      {
        tmp___3 = 1;
      }
      else
      {
        tmp___3 = 0;
      }

    }
    else
    {
      tmp___3 = 0;
    }


    r312 = (_Bool) tmp___3;
    if (r321)
    {
      tmp___4 = 1;
    }
    else
      if (r311)
    {
      if (ep12)
      {
        tmp___4 = 1;
      }
      else
      {
        tmp___4 = 0;
      }

    }
    else
    {
      tmp___4 = 0;
    }


    r322 = (_Bool) tmp___4;
    if (((int) id1) != ((int) id2))
    {
      if (((int) id1) != ((int) id3))
      {
        if (((int) id2) != ((int) id3))
        {
          if (((int) id1) >= 0)
          {
            if (((int) id2) >= 0)
            {
              if (((int) id3) >= 0)
              {
                if (((int) r1) == 0)
                {
                  if (((int) r2) == 0)
                  {
                    if (((int) r3) == 0)
                    {
                      if (r122)
                      {
                        if (r132)
                        {
                          if (r212)
                          {
                            if (r232)
                            {
                              if (r312)
                              {
                                if (r322)
                                {
                                  if (((int) max1) == ((int) id1))
                                  {
                                    if (((int) max2) == ((int) id2))
                                    {
                                      if (((int) max3) == ((int) id3))
                                      {
                                        if (((int) st1) == 0)
                                        {
                                          if (((int) st2) == 0)
                                          {
                                            if (((int) st3) == 0)
                                            {
                                              if (((int) nl1) == 0)
                                              {
                                                if (((int) nl2) == 0)
                                                {
                                                  if (((int) nl3) == 0)
                                                  {
                                                    if (((int) mode1) == 0)
                                                    {
                                                      if (((int) mode2) == 0)
                                                      {
                                                        if (((int) mode3) == 0)
                                                        {
                                                          tmp___5 = 1;
                                                        }
                                                        else
                                                        {
                                                          tmp___5 = 0;
                                                        }

                                                      }
                                                      else
                                                      {
                                                        tmp___5 = 0;
                                                      }

                                                    }
                                                    else
                                                    {
                                                      tmp___5 = 0;
                                                    }

                                                  }
                                                  else
                                                  {
                                                    tmp___5 = 0;
                                                  }

                                                }
                                                else
                                                {
                                                  tmp___5 = 0;
                                                }

                                              }
                                              else
                                              {
                                                tmp___5 = 0;
                                              }

                                            }
                                            else
                                            {
                                              tmp___5 = 0;
                                            }

                                          }
                                          else
                                          {
                                            tmp___5 = 0;
                                          }

                                        }
                                        else
                                        {
                                          tmp___5 = 0;
                                        }

                                      }
                                      else
                                      {
                                        tmp___5 = 0;
                                      }

                                    }
                                    else
                                    {
                                      tmp___5 = 0;
                                    }

                                  }
                                  else
                                  {
                                    tmp___5 = 0;
                                  }

                                }
                                else
                                {
                                  tmp___5 = 0;
                                }

                              }
                              else
                              {
                                tmp___5 = 0;
                              }

                            }
                            else
                            {
                              tmp___5 = 0;
                            }

                          }
                          else
                          {
                            tmp___5 = 0;
                          }

                        }
                        else
                        {
                          tmp___5 = 0;
                        }

                      }
                      else
                      {
                        tmp___5 = 0;
                      }

                    }
                    else
                    {
                      tmp___5 = 0;
                    }

                  }
                  else
                  {
                    tmp___5 = 0;
                  }

                }
                else
                {
                  tmp___5 = 0;
                }

              }
              else
              {
                tmp___5 = 0;
              }

            }
            else
            {
              tmp___5 = 0;
            }

          }
          else
          {
            tmp___5 = 0;
          }

        }
        else
        {
          tmp___5 = 0;
        }

      }
      else
      {
        tmp___5 = 0;
      }

    }
    else
    {
      tmp___5 = 0;
    }

    return tmp___5;
  }
}

int check(void)
{
  int tmp;
  {
    if (((((int) st1) + ((int) st2)) + ((int) st3)) <= 1)
    {
      if ((((int) st1) + ((int) nl1)) <= 1)
      {
        if ((((int) st2) + ((int) nl2)) <= 1)
        {
          if ((((int) st3) + ((int) nl3)) <= 1)
          {
            if (((int) r1) >= 2)
            {
              goto _L___1;
            }
            else
              if (((((int) st1) + ((int) st2)) + ((int) st3)) == 0)
            {
              _L___1:
              if (((int) r1) < 2)
              {
                goto _L___0;
              }
              else
                if (((((int) st1) + ((int) st2)) + ((int) st3)) == 1)
              {
                _L___0:
                if (((int) r1) >= 2)
                {
                  goto _L;
                }
                else
                  if (((((int) nl1) + ((int) nl2)) + ((int) nl3)) == 0)
                {
                  _L:
                  if (((int) r1) < 2)
                  {
                    tmp = 1;
                  }
                  else
                    if (((((int) nl1) + ((int) nl2)) + ((int) nl3)) == 2)
                  {
                    tmp = 1;
                  }
                  else
                  {
                    tmp = 0;
                  }



                }
                else
                {
                  tmp = 0;
                }



              }
              else
              {
                tmp = 0;
              }



            }
            else
            {
              tmp = 0;
            }


          }
          else
          {
            tmp = 0;
          }

        }
        else
        {
          tmp = 0;
        }

      }
      else
      {
        tmp = 0;
      }

    }
    else
    {
      tmp = 0;
    }

    return tmp;
  }
}

int main(void)
{
  int c1;
  int i2;
  {
    c1 = 0;
    ep12 = __VERIFIER_nondet_bool("ep12");
    ep13 = __VERIFIER_nondet_bool("ep13");
    ep21 = __VERIFIER_nondet_bool("ep21");
    ep23 = __VERIFIER_nondet_bool("ep23");
    ep31 = __VERIFIER_nondet_bool("ep31");
    ep32 = __VERIFIER_nondet_bool("ep32");
    id1 = __VERIFIER_nondet_char("id1");
    r1 = __VERIFIER_nondet_uchar("r1");
    st1 = __VERIFIER_nondet_char("st1");
    nl1 = __VERIFIER_nondet_char("nl1");
    m1 = __VERIFIER_nondet_char("m1");
    max1 = __VERIFIER_nondet_char("max1");
    mode1 = __VERIFIER_nondet_bool("mode1");
    id2 = __VERIFIER_nondet_char("id2");
    r2 = __VERIFIER_nondet_uchar("r2");
    st2 = __VERIFIER_nondet_char("st2");
    nl2 = __VERIFIER_nondet_char("nl2");
    m2 = __VERIFIER_nondet_char("m2");
    max2 = __VERIFIER_nondet_char("max2");
    mode2 = __VERIFIER_nondet_bool("mode2");
    id3 = __VERIFIER_nondet_char("id3");
    r3 = __VERIFIER_nondet_uchar("r3");
    st3 = __VERIFIER_nondet_char("st3");
    nl3 = __VERIFIER_nondet_char("nl3");
    m3 = __VERIFIER_nondet_char("m3");
    max3 = __VERIFIER_nondet_char("max3");
    mode3 = __VERIFIER_nondet_bool("mode3");
    i2 = init();
    assume_abort_if_not(i2);
    p12_old = nomsg;
    p12_new = nomsg;
    p13_old = nomsg;
    p13_new = nomsg;
    p21_old = nomsg;
    p21_new = nomsg;
    p23_old = nomsg;
    p23_new = nomsg;
    p31_old = nomsg;
    p31_new = nomsg;
    p32_old = nomsg;
    p32_new = nomsg;
    i2 = 0;
    while (1)
    {
      {
        node1();
        node2();
        node3();
        p12_old = p12_new;
        p12_new = nomsg;
        p13_old = p13_new;
        p13_new = nomsg;
        p21_old = p21_new;
        p21_new = nomsg;
        p23_old = p23_new;
        p23_new = nomsg;
        p31_old = p31_new;
        p31_new = nomsg;
        p32_old = p32_new;
        p32_new = nomsg;
        c1 = check();
        __VERIFIER_assert(c1);
      }
    }

  }
  return 0;
}

void __VERIFIER_assert(_Bool arg)
{
  {
    if (!arg)
    {
      {
        ERROR:
        {
          reach_error();
          abort();
        }

      }
    }

  }
}

