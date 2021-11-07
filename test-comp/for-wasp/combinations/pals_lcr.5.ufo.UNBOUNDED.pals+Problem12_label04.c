extern unsigned int __VERIFIER_nondet_uint(char *);
extern char __VERIFIER_nondet_char(char *);
extern int __VERIFIER_nondet_int(char *);
extern long __VERIFIER_nondet_long(char *);
extern unsigned long __VERIFIER_nondet_ulong(char *);
extern float __VERIFIER_nondet_float(char *);
extern void exit(int);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "pals_lcr.5.ufo.UNBOUNDED.pals.c", 3, "reach_error");
}

_Bool __VERIFIER_nondet_bool(char *);
char __VERIFIER_nondet_char(char *);
unsigned char __VERIFIER_nondet_uchar(char *);
void assert(_Bool arg);
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
unsigned char r1;
port_t p1;
char p1_old;
char p1_new;
char id1;
char st1;
msg_t send1;
_Bool mode1;
port_t p2;
char p2_old;
char p2_new;
char id2;
char st2;
msg_t send2;
_Bool mode2;
port_t p3;
char p3_old;
char p3_new;
char id3;
char st3;
msg_t send3;
_Bool mode3;
port_t p4;
char p4_old;
char p4_new;
char id4;
char st4;
msg_t send4;
_Bool mode4;
port_t p5;
char p5_old;
char p5_new;
char id5;
char st5;
msg_t send5;
_Bool mode5;
void node1(void)
{
  msg_t m1;
  {
    m1 = nomsg;
    if (mode1)
    {
      if (r1 == 255)
      {
        r1 = 4;
      }

      r1 = r1 + 1;
      m1 = p5_old;
      p5_old = nomsg;
      if (((int) m1) != ((int) nomsg))
      {
        if (((int) m1) > ((int) id1))
        {
          send1 = m1;
        }
        else
          if (((int) m1) == ((int) id1))
        {
          st1 = (char) 1;
        }


      }

      mode1 = (_Bool) 0;
    }
    else
    {
      p1_new = (__logand(send1 != nomsg, p1_new == nomsg)) ? (send1) : (p1_new);
      mode1 = (_Bool) 1;
    }

    return;
  }
}

void node2(void)
{
  msg_t m2;
  {
    m2 = nomsg;
    if (mode2)
    {
      m2 = p1_old;
      p1_old = nomsg;
      if (((int) m2) != ((int) nomsg))
      {
        if (((int) m2) > ((int) id2))
        {
          send2 = m2;
        }
        else
          if (((int) m2) == ((int) id2))
        {
          st2 = (char) 1;
        }


      }

      mode2 = (_Bool) 0;
    }
    else
    {
      p2_new = (__logand(send2 != nomsg, p2_new == nomsg)) ? (send2) : (p2_new);
      mode2 = (_Bool) 1;
    }

    return;
  }
}

void node3(void)
{
  msg_t m3;
  {
    m3 = nomsg;
    if (mode3)
    {
      m3 = p2_old;
      p2_old = nomsg;
      if (((int) m3) != ((int) nomsg))
      {
        if (((int) m3) > ((int) id3))
        {
          send3 = m3;
        }
        else
          if (((int) m3) == ((int) id3))
        {
          st3 = (char) 1;
        }


      }

      mode3 = (_Bool) 0;
    }
    else
    {
      p3_new = (__logand(send3 != nomsg, p3_new == nomsg)) ? (send3) : (p3_new);
      mode3 = (_Bool) 1;
    }

    return;
  }
}

void node4(void)
{
  msg_t m4;
  {
    m4 = nomsg;
    if (mode4)
    {
      m4 = p3_old;
      p3_old = nomsg;
      if (((int) m4) != ((int) nomsg))
      {
        if (((int) m4) > ((int) id4))
        {
          send4 = m4;
        }
        else
          if (((int) m4) == ((int) id4))
        {
          st4 = (char) 1;
        }


      }

      mode4 = (_Bool) 0;
    }
    else
    {
      p4_new = (__logand(send4 != nomsg, p4_new == nomsg)) ? (send4) : (p4_new);
      mode4 = (_Bool) 1;
    }

    return;
  }
}

void node5(void)
{
  msg_t m5;
  {
    m5 = nomsg;
    if (mode5)
    {
      m5 = p4_old;
      p4_old = nomsg;
      if (((int) m5) != ((int) nomsg))
      {
        if (((int) m5) > ((int) id5))
        {
          send5 = m5;
        }
        else
          if (((int) m5) == ((int) id5))
        {
          st5 = (char) 1;
        }


      }

      mode5 = (_Bool) 0;
    }
    else
    {
      p5_new = (__logand(send5 != nomsg, p5_new == nomsg)) ? (send5) : (p5_new);
      mode5 = (_Bool) 1;
    }

    return;
  }
}

void (*nodes[5])(void) = {&node1, &node2, &node3, &node4, &node5};
int init(void)
{
  int tmp;
  {
    if (((int) r1) == 0)
    {
      if (((int) id1) >= 0)
      {
        if (((int) st1) == 0)
        {
          if (((int) send1) == ((int) id1))
          {
            if (((int) mode1) == 0)
            {
              if (((int) id2) >= 0)
              {
                if (((int) st2) == 0)
                {
                  if (((int) send2) == ((int) id2))
                  {
                    if (((int) mode2) == 0)
                    {
                      if (((int) id3) >= 0)
                      {
                        if (((int) st3) == 0)
                        {
                          if (((int) send3) == ((int) id3))
                          {
                            if (((int) mode3) == 0)
                            {
                              if (((int) id4) >= 0)
                              {
                                if (((int) st4) == 0)
                                {
                                  if (((int) send4) == ((int) id4))
                                  {
                                    if (((int) mode4) == 0)
                                    {
                                      if (((int) id5) >= 0)
                                      {
                                        if (((int) st5) == 0)
                                        {
                                          if (((int) send5) == ((int) id5))
                                          {
                                            if (((int) mode5) == 0)
                                            {
                                              if (((int) id1) != ((int) id2))
                                              {
                                                if (((int) id1) != ((int) id3))
                                                {
                                                  if (((int) id1) != ((int) id4))
                                                  {
                                                    if (((int) id1) != ((int) id5))
                                                    {
                                                      if (((int) id2) != ((int) id3))
                                                      {
                                                        if (((int) id2) != ((int) id4))
                                                        {
                                                          if (((int) id2) != ((int) id5))
                                                          {
                                                            if (((int) id3) != ((int) id4))
                                                            {
                                                              if (((int) id3) != ((int) id5))
                                                              {
                                                                if (((int) id4) != ((int) id5))
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

int check(void)
{
  int tmp;
  {
    if (((((((int) st1) + ((int) st2)) + ((int) st3)) + ((int) st4)) + ((int) st5)) <= 1)
    {
      if (((int) r1) >= 5)
      {
        goto _L;
      }
      else
        if (((((((int) st1) + ((int) st2)) + ((int) st3)) + ((int) st4)) + ((int) st5)) == 0)
      {
        _L:
        if (((int) r1) < 5)
        {
          tmp = 1;
        }
        else
          if (((((((int) st1) + ((int) st2)) + ((int) st3)) + ((int) st4)) + ((int) st5)) == 1)
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

    return tmp;
  }
}

int main1(void)
{
  int c1;
  int i2;
  {
    c1 = 0;
    r1 = __VERIFIER_nondet_uchar("r1");
    id1 = __VERIFIER_nondet_char("id1");
    st1 = __VERIFIER_nondet_char("st1");
    send1 = __VERIFIER_nondet_char("send1");
    mode1 = __VERIFIER_nondet_bool("mode1");
    id2 = __VERIFIER_nondet_char("id2");
    st2 = __VERIFIER_nondet_char("st2");
    send2 = __VERIFIER_nondet_char("send2");
    mode2 = __VERIFIER_nondet_bool("mode2");
    id3 = __VERIFIER_nondet_char("id3");
    st3 = __VERIFIER_nondet_char("st3");
    send3 = __VERIFIER_nondet_char("send3");
    mode3 = __VERIFIER_nondet_bool("mode3");
    id4 = __VERIFIER_nondet_char("id4");
    st4 = __VERIFIER_nondet_char("st4");
    send4 = __VERIFIER_nondet_char("send4");
    mode4 = __VERIFIER_nondet_bool("mode4");
    id5 = __VERIFIER_nondet_char("id5");
    st5 = __VERIFIER_nondet_char("st5");
    send5 = __VERIFIER_nondet_char("send5");
    mode5 = __VERIFIER_nondet_bool("mode5");
    i2 = init();
    assume_abort_if_not(i2);
    p1_old = nomsg;
    p1_new = nomsg;
    p2_old = nomsg;
    p2_new = nomsg;
    p3_old = nomsg;
    p3_new = nomsg;
    p4_old = nomsg;
    p4_new = nomsg;
    p5_old = nomsg;
    p5_new = nomsg;
    i2 = 0;
    while (1)
    {
      {
        node1();
        node2();
        node3();
        node4();
        node5();
        p1_old = p1_new;
        p1_new = nomsg;
        p2_old = p2_new;
        p2_new = nomsg;
        p3_old = p3_new;
        p3_new = nomsg;
        p4_old = p4_new;
        p4_new = nomsg;
        p5_old = p5_new;
        p5_new = nomsg;
        c1 = check();
        assert(c1);
      }
    }

  }
  return 0;
}

int calculate_output(int);
int calculate_output2(int);
int calculate_output3(int);
int calculate_output4(int);
int inputC = 3;
int inputF = 6;
int inputA = 1;
int inputB = 2;
int inputD = 4;
int inputE = 5;
int a17 = -124;
int a5 = 4;
int a24 = 15;
int a2 = 170;
int a7 = 13;
int calculate_output2(int input);
int calculate_output3(int input);
int calculate_output4(int input);
int calculate_output(int input)
{
  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 13), a5 == 3))
  {
    error_7:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), a17 <= (-108)), a24 == 13), a5 == 4))
  {
    error_35:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 14), a5 == 4))
  {
    error_55:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 13), a5 == 4))
  {
    error_40:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), a17 <= (-108)), a24 == 14), a5 == 4))
  {
    error_48:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 14), a5 == 4))
  {
    error_51:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), 255 < a17), a24 == 14), a5 == 3))
  {
    error_20:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), a17 <= (-108)), a24 == 13), a5 == 4))
  {
    error_37:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 14), a5 == 3))
  {
    error_19:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), a17 <= (-108)), a24 == 13), a5 == 3))
  {
    error_0:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), 255 < a17), a24 == 15), a5 == 3))
  {
    error_34:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), a17 <= (-108)), a24 == 15), a5 == 3))
  {
    error_25:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 14), a5 == 4))
  {
    error_50:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 13), a5 == 3))
  {
    error_3:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 15), a5 == 3))
  {
    error_28:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 13), a5 == 4))
  {
    error_39:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), 255 < a17), a24 == 14), a5 == 3))
  {
    error_21:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 13), a5 == 3))
  {
    error_6:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 13), a5 == 4))
  {
    error_38:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 15), a5 == 3))
  {
    error_30:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 13), a5 == 4))
  {
    error_42:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), 255 < a17), a24 == 13), a5 == 3))
  {
    error_10:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), a17 <= (-108)), a24 == 14), a5 == 3))
  {
    error_13:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), 255 < a17), a24 == 13), a5 == 3))
  {
    error_8:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 14), a5 == 4))
  {
    error_52:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 15), a5 == 3))
  {
    error_27:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 14), a5 == 4))
  {
    error_53:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 14), a5 == 4))
  {
    error_54:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), 255 < a17), a24 == 14), a5 == 4))
  {
    error_58:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), a17 <= (-108)), a24 == 15), a5 == 3))
  {
    error_23:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), a17 <= (-108)), a24 == 13), a5 == 3))
  {
    globalError:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), 255 < a17), a24 == 14), a5 == 4))
  {
    error_57:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), a17 <= (-108)), a24 == 14), a5 == 4))
  {
    error_47:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), a17 <= (-108)), a24 == 14), a5 == 3))
  {
    error_11:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 14), a5 == 3))
  {
    error_17:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 13), a5 == 4))
  {
    error_43:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), a17 <= (-108)), a24 == 14), a5 == 4))
  {
    error_49:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), 255 < a17), a24 == 15), a5 == 3))
  {
    error_32:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), a17 <= (-108)), a24 == 15), a5 == 4))
  {
    error_59:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 15), a5 == 3))
  {
    error_26:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), a17 <= (-108)), a24 == 15), a5 == 3))
  {
    error_24:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), a17 <= (-108)), a24 == 13), a5 == 3))
  {
    error_1:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 14), a5 == 3))
  {
    error_14:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), 255 < a17), a24 == 15), a5 == 3))
  {
    error_33:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), 255 < a17), a24 == 13), a5 == 4))
  {
    error_44:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), 255 < a17), a24 == 13), a5 == 4))
  {
    error_45:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 13), a5 == 4))
  {
    error_41:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 14), a5 == 3))
  {
    error_18:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 14), a5 == 3))
  {
    error_15:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 15), a5 == 3))
  {
    error_29:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), 255 < a17), a24 == 14), a5 == 4))
  {
    error_56:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), a17 <= (-108)), a24 == 13), a5 == 4))
  {
    error_36:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), a17 <= (-108)), a24 == 14), a5 == 3))
  {
    error_12:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 13), a5 == 3))
  {
    error_5:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 13), a5 == 3))
  {
    error_4:
    {
      reach_error();
      abort();
    }

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), 255 < a17), a24 == 13), a5 == 4))
  {
    error_46:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 12, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 13), a5 == 3))
  {
    error_2:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 15), a5 == 3))
  {
    error_31:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), 255 < a17), a24 == 14), a5 == 3))
  {
    error_22:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 14, a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 14), a5 == 3))
  {
    error_16:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(a7 == 13, a2 <= 189), 255 < a17), a24 == 13), a5 == 3))
  {
    error_9:
    exit(0);

  }

  if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 4, __logor(__logand(a7 == 12, 255 < a17), __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14))))), a5 == 4), a24 == 14))
  {
    a17 = ((((a17 % 109) + (-11)) - 547674) + (-15873)) - (-563482);
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 13, __logand(__logand(input == 2, __logor(a7 == 13, a7 == 14)), a5 == 3)), a17 <= (-108)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * (-5)) - (-478038)) / (-5);
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(a7 == 12, __logand(111 < a17, 255 >= a17)), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14))), input == 1), a24 == 14), __logand(189 < a2, 281 >= a2)), a5 == 5))
  {
    a2 = ((a2 - 384978) + (-172247)) * 1;
    a17 = ((a17 * 5) + 542386) * 1;
    a7 = 12;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 4)), a5 == 3), a24 == 14))
  {
    a2 = (((a2 + (-131864)) * 10) / 9) - 73578;
    a17 = (((a17 - 0) % 299946) + (-300053)) * 1;
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(a24 == 13, __logand(input == 6, __logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(255 < a17, a7 == 12)))), a2 <= 189)))
  {
    a2 = ((((a2 * 9) / 10) % 45) + 236) * 1;
    a17 = (((a17 + (-100855)) - 172157) / 5) + 357533;
    a7 = 13;
    a24 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(255 < a17, a7 == 12)), input == 3))), a5 == 6))
  {
    a17 = (((a17 / 5) % 109) - (-2)) - 41;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a2 <= 189, __logand(__logand(__logand(input == 1, __logor(a7 == 13, a7 == 14)), a17 <= (-108)), a24 == 15))))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 1, a5 == 4)), a7 == 13), 255 < a17)))
  {
    a17 = (((a17 % 71) + 119) * 1) + (-2);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 4)))))
  {
    a2 = ((a2 + 448263) + (-951842)) * 1;
    a17 = ((a17 * 5) / 5) + (-274764);
    a7 = 14;
    a24 = 15;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(a2 <= 189, __logand(input == 1, a24 == 15))), 255 < a17), a7 == 14))
  {
    a2 = ((((a2 % 45) + 236) * 5) % 45) - (-199);
    a7 = 13;
    a24 = 14;
    return 26;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 1), a24 == 15))), a5 == 5))
  {
    a17 = ((((a17 % 109) + 16) * 5) % 109) - (-2);
    a7 = 14;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logor(a7 == 12, a7 == 13), input == 5)), a24 == 13)), a5 == 6))
  {
    a17 = ((((a17 + 0) - (-350799)) - (-197891)) % 71) - (-182);
    a7 = 14;
    a24 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(a17 <= (-108), __logand(__logand(a5 == 4, input == 2), __logand(189 < a2, 281 >= a2)))), a7 == 12))
  {
    a17 = (((((a17 - 0) * 9) / 10) / 5) % 109) - (-93);
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand((-108) < a17, 111 >= a17), __logand(a24 == 13, __logand(__logor(a7 == 12, a7 == 13), input == 4)))), __logand(189 < a2, 281 >= a2)))
  {
    a7 = 12;
    return 26;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(a5 == 4, __logand(a2 <= 189, __logand(a24 == 15, __logand(__logor(a7 == 13, a7 == 14), input == 5))))))
  {
    a17 = (((a17 - 135275) * 10) / 9) * 3;
    a7 = 13;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 6), a5 == 7), a24 == 13)))
  {
    a17 = (((a17 % 109) + 2) - 1) - (-2);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logor(__logand(__logand(a24 == 13, __logand(a17 <= (-108), a7 == 13)), a5 == 5), __logor(__logand(a5 == 4, __logand(a24 == 15, __logand(a7 == 14, 255 < a17))), __logand(a5 == 5, __logand(a24 == 13, __logand(a7 == 12, a17 <= (-108)))))), input == 1), __logand(189 < a2, 281 >= a2)))
  {
    a17 = ((((a17 - 0) % 109) - (-2)) + (-577173)) + 577173;
    a7 = 14;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 13, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), __logand(189 < a2, 281 >= a2))), a5 == 3), a17 <= (-108)))
  {
    a2 = ((a2 + (-532580)) * 1) + (-62227);
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 4, __logand(__logand(__logand(input == 5, __logor(a7 == 12, a7 == 13)), a24 == 14), __logand(189 < a2, 281 >= a2))), a17 <= (-108)))
  {
    a2 = ((a2 * 5) / (-5)) / 5;
    a17 = ((((a17 % 109) + 4) * 5) % 109) + 1;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 3, __logand(__logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 12), __logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108)))), input == 2), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 - 260500) / 5) + (-428690);
    a17 = (((a17 % 71) - (-184)) * 1) - (-1);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a5 == 4, __logand(__logand(input == 1, a24 == 15), __logand((-108) < a17, 111 >= a17))), a2 <= 189), a7 == 12))
  {
    a24 = 13;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(a5 == 4, __logand(__logand(input == 2, a24 == 15), a7 == 12)), __logand((-108) < a17, 111 >= a17))))
  {
    a7 = 14;
    a24 = 13;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(a24 == 13, __logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 5, __logand(__logand(input == 2, a2 <= 189), a7 == 14)))))
  {
    a7 = 13;
    a24 = 15;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(a5 == 5, __logand(input == 3, a24 == 13)), a7 == 14), __logand(111 < a17, 255 >= a17))))
  {
    a17 = ((a17 * 5) + (-131690)) - 406420;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a5 == 5, input == 1), __logand(189 < a2, 281 >= a2)), a24 == 13), a7 == 13), __logand((-108) < a17, 111 >= a17)))
  {
    a2 = ((a2 / 5) - 248849) * 2;
    a17 = (((a17 / 5) * 5) / 5) - 458249;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 6, __logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(a7 == 13, __logand(111 < a17, 255 >= a17)))), a24 == 15)), a5 == 3))
  {
    a17 = (((a17 - (-260026)) + 97662) * 10) / 9;
    a7 = 12;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(__logand(__logand(__logand((-108) < a17, 111 >= a17), input == 1), a7 == 13), a2 <= 189)), a24 == 14))
  {
    a17 = (((a17 % 71) + 184) - (-1)) - 1;
    a7 = 14;
    a24 = 13;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, __logand(a5 == 5, __logand(__logand(111 < a17, 255 >= a17), __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 6))))))
  {
    a17 = ((a17 - 33426) - 518487) - 34791;
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(255 < a17, __logand(input == 3, __logor(a7 == 13, a7 == 14))), a5 == 7)), a24 == 15))
  {
    a17 = (((a17 - 593212) - (-274925)) - (-137841)) + (-419796);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 13, __logand(__logand((-108) < a17, 111 >= a17), __logand(input == 4, __logor(a7 == 12, a7 == 13))))), a5 == 6))
  {
    a2 = ((a2 - 356828) + (-57766)) * 1;
    a7 = 14;
    return 26;
  }
  else
    if (__logand(a17 <= (-108), __logand(__logand(__logand(__logand(input == 5, __logor(a7 == 12, a7 == 13)), a5 == 5), __logand(189 < a2, 281 >= a2)), a24 == 14)))
  {
    a2 = ((a2 - 367280) / 5) + (-340709);
    a17 = ((((a17 % 299872) + 300127) * 1) + (-276171)) + 347263;
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 5, __logand(input == 6, __logor(__logand(a24 == 14, __logand(a7 == 13, a17 <= (-108))), __logor(__logand(a24 == 13, __logand(255 < a17, a7 == 14)), __logand(a24 == 14, __logand(a7 == 12, a17 <= (-108)))))))))
  {
    a17 = ((((a17 - 0) % 299946) + (-300053)) - (-266634)) + (-266635);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(a24 == 13, __logand(__logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(a7 == 12, 255 < a17)), input == 1))), a2 <= 189))
  {
    a17 = (((a17 + (-600109)) - 2) / 5) - 329060;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(__logand(__logor(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), __logand(__logand((-108) < a17, 111 >= a17), a7 == 13)), input == 4), a2 <= 189)), a24 == 13))
  {
    a2 = (((a2 / 5) - 178027) % 45) - (-249);
    a17 = (((a17 / 5) - 189029) * 10) / 9;
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 15, __logand(__logand(__logand(input == 6, __logor(a7 == 13, a7 == 14)), a5 == 4), __logand((-108) < a17, 111 >= a17)))))
  {
    a17 = (((a17 - (-591336)) + (-371053)) * (-1)) / 10;
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 3), a5 == 3)), a24 == 14))
  {
    a2 = ((a2 * (-5)) * 5) - 39358;
    a17 = (((a17 % 109) - (-1)) + (-513301)) + 513302;
    a7 = 13;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(255 < a17, a7 == 12)), input == 2), a5 == 4)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 * (-5)) + (-139298)) * 10) / 9;
    a17 = ((a17 - 600110) - 0) * 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(a5 == 5, input == 4), a2 <= 189)), a7 == 14), a24 == 15))
  {
    a2 = (((a2 / 5) + (-370165)) % 45) - (-261);
    a17 = ((a17 + 573666) * 1) + (-329578);
    a7 = 12;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a7 == 12, input == 6), __logand(189 < a2, 281 >= a2)), a5 == 4), a24 == 13), a17 <= (-108)))
  {
    return 21;
  }
  else
    if (__logand(a24 == 15, __logand(a5 == 6, __logand(__logand(__logand(a7 == 12, input == 6), a17 <= (-108)), a2 <= 189))))
  {
    a2 = (((((a2 * 9) / 10) + (-20706)) + (-31885)) % 45) - (-245);
    a17 = (((a17 % 109) - (-26)) / 5) * 5;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(a24 == 15, __logand(a5 == 6, __logand(a7 == 12, input == 6)))), a2 <= 189))
  {
    a2 = (((a2 - 0) + 15546) % 45) + 235;
    a17 = ((a17 * 5) - (-401693)) - (-144036);
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 14, __logand(input == 4, __logor(a7 == 12, a7 == 13))), a17 <= (-108)), __logand(189 < a2, 281 >= a2)), a5 == 5))
  {
    a17 = (((((a17 % 71) - (-223)) * 10) / 9) * 9) / 10;
    a7 = 14;
    a24 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(input == 6, __logor(a7 == 12, a7 == 13)), a5 == 4)), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 - 188462) * 3) + (-6);
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a2 <= 189, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 6), a5 == 5))), 255 < a17))
  {
    a17 = ((a17 + (-66404)) - (-20679)) + (-554407);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a7 == 12, __logand(a24 == 15, __logand(a5 == 6, __logand(input == 2, a2 <= 189)))), a17 <= (-108)))
  {
    a2 = ((((a2 % 45) + 235) * 1) - (-275959)) + (-275957);
    a17 = ((((a17 % 71) + 208) / 5) * 10) / 2;
    a7 = 13;
    a24 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(__logand(a7 == 12, __logand(input == 3, a24 == 13)), a2 <= 189), a17 <= (-108))))
  {
    a2 = (((a2 / 5) + 158559) % 45) + 204;
    a17 = ((((a17 % 109) + 75) - 24) + 175099) - 175127;
    a24 = 15;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logand(a24 == 15, input == 6), a5 == 4), a7 == 12))))
  {
    a17 = ((a17 + (-497569)) + 497379) - (-33);
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(__logand(input == 2, __logor(__logand(255 < a17, a7 == 12), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))))), a24 == 13)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 / (-5)) * 10) / 9) + (-424739);
    a17 = ((a17 + (-600109)) * 1) + (-3);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a5 == 4, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 6), a2 <= 189))), 255 < a17))
  {
    a7 = 14;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 6, a5 == 4)), a24 == 15), __logand((-108) < a17, 111 >= a17)), a7 == 13))
  {
    a17 = ((a17 - 534822) - (-388608)) * 4;
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(a24 == 13, __logand(a5 == 4, __logand(__logor(a7 == 13, a7 == 14), input == 5))), __logand(189 < a2, 281 >= a2))))
  {
    a7 = 14;
    a24 = 14;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a17 <= (-108), __logand(a24 == 14, __logand(__logand(a2 <= 189, __logand(input == 3, __logor(a7 == 13, a7 == 14))), a5 == 6))))
  {
    a2 = (((a2 / 5) * 4) % 45) + 236;
    a17 = (((a17 - (-556050)) % 109) - (-1)) - 0;
    a7 = 12;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(a5 == 4, __logand(255 < a17, __logand(__logor(a7 == 12, a7 == 13), input == 1))), a24 == 15)))
  {
    a17 = (((a17 + (-600240)) / 5) * 10) / 4;
    a7 = 14;
    a24 = 13;
    a5 = 6;
    return 23;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(a24 == 14, __logand(input == 2, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 12), __logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14))))), a2 <= 189)))
  {
    a17 = (((a17 % 299946) + (-300053)) * 1) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(a7 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 2, __logand((-108) < a17, 111 >= a17)))), a5 == 4)))
  {
    a2 = ((a2 / 5) / (-5)) * 5;
    a7 = 14;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(__logor(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), __logand(a7 == 13, __logand((-108) < a17, 111 >= a17))), input == 6)), a24 == 13), a2 <= 189))
  {
    a17 = ((((a17 / 5) + 383422) + (-411251)) % 71) - (-233);
    a7 = 14;
    a24 = 14;
    a5 = 6;
    return 21;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a7 == 14, __logand(a5 == 5, __logand(__logand(a24 == 13, input == 6), a2 <= 189)))))
  {
    a17 = ((a17 * 5) - 61428) + (-534582);
    a7 = 13;
    a24 = 15;
    a5 = 6;
    return 21;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(input == 3, __logor(a7 == 13, a7 == 14)), a5 == 6), a24 == 15)), a2 <= 189))
  {
    a2 = ((((a2 + 39352) / 5) / 5) % 45) + 234;
    a7 = 12;
    a24 = 14;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 14, __logand(a7 == 13, __logand(a5 == 3, input == 5))), __logand(111 < a17, 255 >= a17))))
  {
    a2 = ((a2 - 43077) / 5) / 5;
    a17 = ((a17 / 5) / 5) - (-99709);
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 14, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(input == 2, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))), a5 == 6)))))
  {
    a2 = ((((a2 % 45) - (-235)) - (-2)) - 444254) - (-444251);
    a7 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 2), a17 <= (-108)), __logand(189 < a2, 281 >= a2)), a24 == 15)))
  {
    a2 = ((a2 + (-159174)) - 203606) + (-130058);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(a24 == 14, __logand(input == 3, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))))), a5 == 5)))
  {
    a17 = ((a17 + (-547450)) / 5) + (-82633);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 5, __logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(255 < a17, a7 == 12))), a24 == 14), a5 == 5), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 + (-395244)) - (-867612)) + (-1020920);
    a17 = ((((a17 % 299872) - (-256)) * 1) * 10) / 9;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(__logand(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17)), input == 5), a5 == 4), __logand(189 < a2, 281 >= a2))))
  {
    a2 = (((a2 - 325121) * 10) / 9) * 1;
    a17 = ((((a17 % 71) + 160) / 5) + (-586476)) - (-586646);
    a7 = 14;
    a24 = 15;
    return 21;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 14, __logand(__logor(a7 == 13, a7 == 14), input == 4)), __logand(189 < a2, 281 >= a2)), a5 == 4), 255 < a17))
  {
    a2 = ((a2 - (-513398)) * 1) * (-1);
    a17 = ((a17 + (-11058)) * 1) + (-589131);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(a24 == 13, __logand(input == 2, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 12), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14))))), a2 <= 189)))
  {
    a17 = ((a17 / 5) - (-11377)) - 448490;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(a7 == 14, input == 5), a24 == 13))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 / (-5)) * 10) / 9) - 571457;
    a17 = (((a17 - (-227661)) + 18143) * 10) / 9;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(__logand(__logor(__logand(a7 == 12, 255 < a17), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17)))), input == 3), a24 == 14), __logand(189 < a2, 281 >= a2))))
  {
    a17 = ((((a17 % 109) + 3) + (-187035)) + 26490) + 160528;
    a7 = 13;
    return -1;
  }
  else
    if (__logand(a7 == 14, __logand(a5 == 5, __logand(__logand(__logand(__logand((-108) < a17, 111 >= a17), input == 2), a24 == 13), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 * (-5)) + (-437978)) + 281140;
    a17 = (((a17 * 5) / 5) / 5) - 83944;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(input == 1, a5 == 6), a24 == 13), a7 == 13)), 255 < a17))
  {
    a17 = ((a17 + (-491213)) - 108914) + (-47);
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(a7 == 12, a7 == 13), input == 2), a24 == 13)))))
  {
    a2 = ((a2 + 391304) * (-1)) / 5;
    a17 = ((a17 - 532893) - 26035) + (-34319);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 4, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), a2 <= 189)), __logand((-108) < a17, 111 >= a17)), a24 == 15))
  {
    a17 = ((((a17 * 5) % 71) - (-183)) + (-26829)) + 26828;
    a7 = 13;
    a24 = 13;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(__logand(a24 == 13, input == 4), a5 == 5), a7 == 14), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 * (-5)) * 5) - 149618;
    a17 = ((a17 / 5) * 5) - 544978;
    a7 = 13;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(input == 4, __logor(__logand(a24 == 13, __logand(255 < a17, a7 == 14)), __logand(a24 == 14, __logand(a17 <= (-108), a7 == 12))))), a5 == 7))
  {
    a17 = (((a17 / 5) - (-3819)) - 117000) - 285915;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(a24 == 13, __logand(a2 <= 189, __logand(a7 == 14, __logand(__logand((-108) < a17, 111 >= a17), input == 5))))))
  {
    a17 = (((a17 - 51813) - (-610607)) * (-1)) / 10;
    a24 = 15;
    a5 = 6;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a24 == 14, __logand(input == 2, __logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(a7 == 12, 255 < a17)))), a5 == 4), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * (-5)) + (-132328)) + (-282019);
    a17 = ((a17 + (-600110)) * 1) - 2;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(a5 == 4, __logand(a2 <= 189, __logand(input == 6, __logor(a7 == 13, a7 == 14))))), a24 == 15))
  {
    a17 = (((((a17 % 109) - (-74)) * 5) * 5) % 109) - (-2);
    a7 = 14;
    return 21;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(a7 == 12, 255 < a17)), input == 2))), a24 == 13))
  {
    a2 = (((a2 / (-5)) + 8939) * 5) - 171471;
    a17 = (((a17 + (-514608)) + 103914) % 109) + 2;
    a7 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(a5 == 3, __logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 6), __logand(189 < a2, 281 >= a2)), a24 == 15))))
  {
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logor(__logand(__logand(a24 == 13, __logand(a7 == 13, a17 <= (-108))), a5 == 5), __logor(__logand(__logand(__logand(255 < a17, a7 == 14), a24 == 15), a5 == 4), __logand(__logand(__logand(a17 <= (-108), a7 == 12), a24 == 13), a5 == 5))), input == 2), a2 <= 189))
  {
    a17 = ((((a17 + 0) - 0) / 5) % 71) - (-184);
    a7 = 13;
    a24 = 13;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(a17 <= (-108), __logand(a24 == 15, __logand(a2 <= 189, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 3), a5 == 4)))))
  {
    a17 = (((a17 % 299872) + 300127) + 133154) / 5;
    a7 = 12;
    return 21;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 14, __logand(a5 == 6, __logand(__logand(111 < a17, 255 >= a17), __logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 4))))))
  {
    a2 = ((((a2 % 45) - (-234)) * 1) + 447091) + (-447090);
    a7 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(255 < a17, __logand(__logand(a24 == 13, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 3)), a5 == 5)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 + (-391458)) - 38043) * 1;
    a17 = (((((a17 * 9) / 10) - 302989) / 5) % 71) + 184;
    a7 = 14;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(__logand(input == 4, a5 == 5), a17 <= (-108)), a7 == 14)), a2 <= 189))
  {
    a2 = ((((a2 % 45) - (-234)) * 5) % 45) + 227;
    a17 = (((((a17 * 9) / 10) * 1) + (-14728)) % 109) - (-22);
    a24 = 14;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logor(__logand(__logand(255 < a17, a7 == 14), a24 == 14), __logand(a24 == 15, __logand(a17 <= (-108), a7 == 12))), input == 6)), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((a17 - 0) % 109) - (-1)) - 0;
    a7 = 12;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(a24 == 15, __logand(__logand(input == 6, 255 < a17), a7 == 12))), a2 <= 189))
  {
    a17 = (((a17 + (-312975)) + (-287141)) / 5) + (-19782);
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a24 == 15, __logand(__logand(__logand(input == 5, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), __logand(189 < a2, 281 >= a2)), a17 <= (-108)))))
  {
    a7 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(a7 == 12, 255 < a17)), __logand(a7 == 13, 255 < a17)), input == 3), a5 == 3)), a24 == 14))
  {
    a2 = ((a2 * 5) * 5) / (-5);
    a17 = ((a17 + 0) - 600109) - 1;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 5, __logor(__logand(__logand(a17 <= (-108), a7 == 12), a24 == 14), __logor(__logand(__logand(a7 == 13, 255 < a17), a24 == 13), __logand(a24 == 13, __logand(255 < a17, a7 == 14))))), a5 == 3)))
  {
    a2 = (((a2 - 68838) - (-367491)) + 74473) * (-1);
    a17 = ((((a17 + 0) / 5) / 5) % 71) - (-184);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 5)), a24 == 14), a5 == 7))
  {
    a17 = (((a17 % 299946) - 300053) * 1) - 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(a7 == 13, __logand(input == 2, a5 == 3)), a24 == 14)), __logand(189 < a2, 281 >= a2)))
  {
    a7 = 14;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), __logand(189 < a2, 281 >= a2)), a5 == 4)), 255 < a17))
  {
    a2 = ((a2 - 410733) / 5) / 5;
    a17 = (((a17 % 71) + 113) * 1) + 14;
    a7 = 13;
    a24 = 15;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(__logand(__logand(input == 2, a7 == 12), __logand(189 < a2, 281 >= a2)), a24 == 13), a17 <= (-108))))
  {
    a2 = (((a2 - 291109) - 296476) + 724390) + (-687165);
    return -1;
  }
  else
    if (__logand(a17 <= (-108), __logand(__logand(__logand(a24 == 15, __logand(a7 == 12, input == 1)), a2 <= 189), a5 == 6)))
  {
    a2 = ((((a2 * 9) / 10) - (-368757)) % 45) - (-235);
    a17 = (((((a17 % 299872) - (-300127)) * 10) / 9) * 10) / 9;
    a7 = 13;
    a24 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 6, __logand(__logand(__logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 6), a2 <= 189))))
  {
    a2 = (((((a2 - 0) % 45) + 235) / 5) * 51) / 10;
    a17 = (((a17 / 5) / 5) / 5) - 297755;
    a7 = 12;
    return 23;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 14, __logand(__logor(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17)), __logand(255 < a17, a7 == 13)), input == 5)), a5 == 3)))
  {
    a17 = ((((a17 - 157643) / 5) * 5) % 71) - (-182);
    a7 = 14;
    return 21;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(__logand(input == 3, __logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a24 == 15), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 * (-5)) * 5) * 5;
    a17 = (((a17 % 299946) + (-300053)) * 1) - 1;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(a2 <= 189, __logand(__logand(a5 == 6, input == 4), a17 <= (-108))), a7 == 12)))
  {
    a2 = (((a2 % 45) + 235) - 1) - 0;
    a17 = (((((a17 * 9) / 10) % 109) - (-104)) + 237666) - 237686;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(__logand(__logor(__logand(__logand(a17 <= (-108), a7 == 13), a24 == 14), __logor(__logand(__logand(a7 == 14, 255 < a17), a24 == 13), __logand(__logand(a17 <= (-108), a7 == 12), a24 == 14))), input == 3), a5 == 5), a2 <= 189))
  {
    a17 = (((a17 % 299872) - (-300127)) - 0) + 1;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(__logand(a24 == 13, input == 2), a5 == 5)), a7 == 14), __logand(111 < a17, 255 >= a17)))
  {
    a17 = (((a17 + (-462656)) * 10) / 9) + 160772;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 4, __logor(a7 == 12, a7 == 13)), a17 <= (-108)), __logand(189 < a2, 281 >= a2)), a24 == 13), a5 == 6))
  {
    a7 = 12;
    a24 = 15;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(a24 == 15, __logand(a5 == 7, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 6))), __logand(111 < a17, 255 >= a17))))
  {
    a17 = (((a17 * 5) - 15195) % 109) + 56;
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 4, __logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(255 < a17, a7 == 12))), a24 == 13), a5 == 6), __logand(189 < a2, 281 >= a2)))
  {
    a17 = ((((a17 * 9) / 10) + (-528924)) % 109) + 1;
    a7 = 14;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(input == 2, __logor(__logand(__logand(a7 == 14, 255 < a17), a24 == 13), __logand(__logand(a7 == 12, a17 <= (-108)), a24 == 14)))), a2 <= 189))
  {
    a17 = ((((a17 % 299946) + (-300053)) + 96027) - 5279) - 90748;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(input == 1, __logor(a7 == 12, a7 == 13)), a5 == 5), a24 == 14)), a17 <= (-108)))
  {
    a2 = (((a2 - 167702) / 5) - (-475488)) * (-1);
    a17 = ((((a17 % 109) + 25) - (-194163)) + 403579) - 597709;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a7 == 12, __logand(__logand(a5 == 6, __logand(__logand(a2 <= 189, input == 4), a17 <= (-108))), a24 == 13)))
  {
    a2 = ((((a2 - 0) * 9) / 10) % 45) - (-234);
    a24 = 15;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 1), a24 == 14), a5 == 5)))
  {
    a2 = ((a2 * 5) * 5) - 477470;
    a17 = (((a17 % 299946) + (-300053)) + 309977) - 309978;
    a7 = 12;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(a24 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 5)))))
  {
    a2 = ((a2 / (-5)) - 543395) - 31512;
    a17 = ((a17 - 374709) - 89040) - 22731;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logor(__logand(__logand(a17 <= (-108), a7 == 12), a24 == 14), __logor(__logand(a24 == 13, __logand(255 < a17, a7 == 13)), __logand(a24 == 13, __logand(255 < a17, a7 == 14)))), input == 6)), a5 == 6))
  {
    a2 = (((a2 % 45) - (-236)) - 2) * 1;
    a17 = (((((a17 * 9) / 10) % 299872) + 300127) - 202607) - (-202608);
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(255 < a17, __logand(__logand(__logand(a24 == 13, __logand(__logor(a7 == 13, a7 == 14), input == 4)), a5 == 4), __logand(189 < a2, 281 >= a2))))
  {
    a7 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 3, __logor(a7 == 14, __logor(a7 == 12, a7 == 13)))), __logand(111 < a17, 255 >= a17)), a5 == 5)))
  {
    a2 = ((a2 * (-5)) + (-99498)) * 5;
    a17 = ((a17 + 560485) + 34614) * 1;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(__logand(__logor(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12)), __logand(a7 == 13, 255 < a17)), input == 4), a5 == 3), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 / (-5)) + (-562394)) - 36545;
    a17 = (((a17 - 600109) - 2) + 90959) + (-90958);
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 4), a24 == 15), __logand(111 < a17, 255 >= a17)), a5 == 7)))
  {
    a7 = 14;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(a5 == 5, __logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 5)), __logand((-108) < a17, 111 >= a17)), a24 == 14)))
  {
    a2 = (((a2 - (-285304)) + (-146058)) % 45) - (-236);
    a17 = (((a17 / 5) - 378389) - 189972) + 981500;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 3, __logor(__logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 12))), a2 <= 189), a5 == 6), a24 == 13))
  {
    a2 = (((a2 + 0) % 45) + 235) + 1;
    a17 = ((a17 * 5) - (-515114)) - 13294;
    a7 = 13;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(a17 <= (-108), __logand(a24 == 15, __logand(input == 2, __logor(a7 == 12, a7 == 13)))), a5 == 5)))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a7 == 12, __logand(a24 == 15, __logand(a5 == 4, __logand(__logand(111 < a17, 255 >= a17), __logand(a2 <= 189, input == 5))))))
  {
    a17 = (((a17 * 10) / (-9)) + (-170917)) * 3;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 15, __logand(255 < a17, __logand(input == 4, a2 <= 189))), a7 == 12), a5 == 7))
  {
    a17 = (((a17 % 71) + 179) - 53) - (-56);
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 5, __logand(__logand(input == 1, __logor(a7 == 13, a7 == 14)), __logand(189 < a2, 281 >= a2))))))
  {
    a2 = (((a2 + (-164688)) * 10) / 9) + (-309761);
    a17 = ((a17 * 5) + (-186431)) * 3;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 12), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17)))), input == 6), a24 == 14))))
  {
    a17 = (((a17 - (-337472)) * 10) / 9) + 150308;
    a7 = 12;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 5)), a24 == 14), a5 == 3))
  {
    a17 = ((((a17 / 5) + 139884) - (-176184)) * (-1)) / 10;
    a7 = 13;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(__logand(255 < a17, __logand(input == 2, __logor(a7 == 12, a7 == 13))), a24 == 15)), a2 <= 189))
  {
    a17 = ((((a17 % 109) + 1) + 493840) - 420141) + (-73780);
    a7 = 12;
    a24 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 6, __logand(189 < a2, 281 >= a2)), 255 < a17), a24 == 15), a5 == 4), a7 == 13))
  {
    a2 = ((a2 * (-5)) + 126647) * (-4);
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 1, __logor(a7 == 12, a7 == 13)), a24 == 15), a5 == 5), a2 <= 189), 255 < a17))
  {
    a2 = ((((a2 % 45) - (-235)) - 1) / 5) - (-212);
    a17 = (((((a17 % 71) + 132) - 10) * 5) % 71) + 135;
    a7 = 14;
    a24 = 13;
    return 23;
  }
  else
    if (__logand(a7 == 13, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(a24 == 14, input == 2), a2 <= 189), a5 == 7))))
  {
    a17 = (((a17 - 453039) * 10) / 9) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(a24 == 15, input == 5), a7 == 13), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 * 5) / 5) / (-5);
    a17 = ((a17 - 279125) - 101385) * 1;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(__logand(input == 5, __logor(__logand(a7 == 12, __logand(111 < a17, 255 >= a17)), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14)))), a24 == 13)), a2 <= 189))
  {
    a2 = ((((a2 - 0) + 194300) * 1) % 45) + 235;
    a17 = (((a17 - 508865) * 10) / 9) + (-4999);
    a7 = 14;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12)), input == 6)), a24 == 14), a5 == 7))
  {
    a17 = (((a17 * 9) / 10) + 13957) - (-35746);
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 5)), a24 == 13), a5 == 5), __logand(111 < a17, 255 >= a17)))
  {
    a17 = (((a17 - 216) - 479578) - 45364) + 524988;
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(__logand(input == 6, __logor(a7 == 12, a7 == 13)), a5 == 5)), a24 == 15), a17 <= (-108)))
  {
    a2 = ((((a2 % 45) - (-235)) + (-1)) - 553229) - (-553229);
    a17 = ((a17 / 5) - (-167109)) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(input == 1, __logor(__logor(__logand(a5 == 4, __logand(__logand(255 < a17, a7 == 14), a24 == 15)), __logand(a5 == 5, __logand(__logand(a7 == 12, a17 <= (-108)), a24 == 13))), __logand(a5 == 5, __logand(__logand(a17 <= (-108), a7 == 13), a24 == 13))))))
  {
    a17 = (((a17 - 0) % 299946) - 300053) + (-1);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 15, __logand(input == 5, a5 == 4)), __logand(189 < a2, 281 >= a2)), 255 < a17), a7 == 13))
  {
    a2 = ((a2 / 5) / 5) - 136738;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 6, __logor(a7 == 13, a7 == 14)), a24 == 15))), a5 == 5))
  {
    a17 = ((a17 / 5) + 572999) + 22824;
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(a24 == 14, __logand(input == 4, __logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(a7 == 12, 255 < a17))))), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((a17 % 109) + 2) / 5) + (-88);
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(__logand(input == 6, __logor(a7 == 13, a7 == 14)), a5 == 7), 255 < a17), a24 == 15)))
  {
    a17 = (((a17 % 109) - 61) / 5) / 5;
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 7, __logand(__logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), input == 5), a2 <= 189))))
  {
    a2 = (((((a2 % 45) + 234) * 1) / 5) * 51) / 10;
    a17 = (((a17 / 5) * 4) % 109) - (-2);
    a7 = 12;
    a24 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(input == 3, __logor(__logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), __logand(a7 == 13, __logand((-108) < a17, 111 >= a17))))), a5 == 7), a24 == 13))
  {
    a17 = (((a17 % 299946) + (-300053)) * 1) - 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(a2 <= 189, __logand(input == 1, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 12), __logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14)))))), a24 == 13))
  {
    a2 = ((((a2 + 0) % 45) + 234) - 472412) + 472412;
    a17 = (((a17 + 0) % 71) - (-182)) + 3;
    a7 = 12;
    a24 = 15;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a24 == 15, __logand(__logand(input == 2, __logor(a7 == 12, a7 == 13)), a5 == 5)), __logand((-108) < a17, 111 >= a17)), a2 <= 189))
  {
    a17 = ((((a17 / 5) + (-238456)) - (-765474)) * (-1)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(__logand(input == 4, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), __logand(189 < a2, 281 >= a2)), a5 == 5)), __logand(111 < a17, 255 >= a17)))
  {
    a2 = ((a2 * 5) * 5) + (-325620);
    a17 = ((a17 + 366270) + 10197) + 134633;
    a7 = 14;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 4, __logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 1), __logand(189 < a2, 281 >= a2)), __logand((-108) < a17, 111 >= a17)))))
  {
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(a24 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(a7 == 14, input == 1)))), a17 <= (-108)))
  {
    a17 = (((((a17 % 71) - (-247)) + 5) / 5) * 32) / 10;
    a7 = 13;
    a24 = 15;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(input == 4, __logor(__logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))))), __logand(189 < a2, 281 >= a2)), a24 == 14))
  {
    a2 = ((a2 * 5) - 562071) * 1;
    a17 = ((((a17 - (-128476)) + 315707) + (-905468)) * (-1)) / 10;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), a2 <= 189), a5 == 7), a24 == 15)))
  {
    a17 = ((((a17 - 271153) + 418092) / 5) * (-1)) / 10;
    a7 = 14;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 4), 255 < a17), a2 <= 189), a5 == 5)))
  {
    a17 = ((((a17 % 109) + 3) * 5) % 109) - (-2);
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 4, __logand(a24 == 14, __logand(input == 3, __logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * 5) - 516770) - 71238;
    a17 = (((a17 - 0) % 299872) + 300127) + 1;
    a7 = 12;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(255 < a17, __logand(__logand(a24 == 15, __logand(input == 2, __logor(__logor(a7 == 12, a7 == 13), a7 == 14))), a5 == 3)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - 507108) + (-40186)) * 1;
    a17 = (((a17 % 71) - (-168)) + 373224) + (-373250);
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a7 == 14, __logand(__logand(input == 3, a24 == 15), a2 <= 189)), 255 < a17), a5 == 5))
  {
    a2 = ((((a2 % 45) - (-236)) / 5) / 5) + 268;
    a7 = 12;
    a24 = 14;
    return 21;
  }
  else
    if (__logand(a5 == 5, __logand(a2 <= 189, __logand(__logand(__logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 13)), input == 1), a24 == 15))))
  {
    a17 = (((a17 - 99808) / 5) * 10) / 9;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(__logand(__logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(a7 == 13, __logand(111 < a17, 255 >= a17))), input == 1), __logand(189 < a2, 281 >= a2)), a24 == 15)))
  {
    a2 = ((a2 - (-222045)) / 5) + (-435548);
    a17 = ((((a17 * 5) % 71) - (-183)) + 531003) + (-531001);
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 3, __logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a5 == 5))))
  {
    a2 = ((a2 - 537051) + (-19713)) - 17151;
    a17 = ((((a17 % 299872) + 300127) + (-161234)) - 361454) + 522690;
    a7 = 13;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(a2 <= 189, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 4), a5 == 6))), a24 == 15))
  {
    a17 = ((a17 - 438310) / 5) + (-185271);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(a5 == 4, __logand(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17)), input == 6))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - 252975) * 2) - (-454453);
    a17 = ((((((a17 * 9) / 10) % 71) + 176) / 5) * 39) / 10;
    a7 = 13;
    a24 = 15;
    return 21;
  }
  else
    if (__logand(255 < a17, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a7 == 13, input == 5)), a24 == 13), a5 == 6)))
  {
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(__logand(input == 3, __logor(a7 == 12, a7 == 13)), a17 <= (-108)))), a5 == 5))
  {
    a17 = (((((a17 * 9) / 10) * 1) * 1) % 109) - (-107);
    a7 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(a2 <= 189, __logand(a24 == 13, __logand(input == 4, __logor(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), __logand(a7 == 13, __logand((-108) < a17, 111 >= a17))))))))
  {
    a17 = (((a17 + 0) % 299946) - 300053) + (-1);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 14, __logand(__logand(111 < a17, 255 >= a17), __logand(a5 == 6, __logand(input == 6, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))))))))
  {
    a17 = (((a17 - (-144076)) * 10) / (-9)) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a17 <= (-108), __logand(__logand(__logor(a7 == 13, a7 == 14), input == 6), a24 == 13)), a5 == 3)))
  {
    a2 = ((a2 - 324660) + 36683) * 2;
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a17 <= (-108), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a7 == 14, __logand(a24 == 13, input == 2)), a5 == 6))))
  {
    a2 = ((a2 - (-379518)) + 60031) + (-652869);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 4, __logand(__logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(a7 == 12, 255 < a17)), input == 3), __logand(189 < a2, 281 >= a2))), a24 == 15))
  {
    a17 = ((a17 - 0) + (-600109)) - 1;
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 15, __logand(__logor(a7 == 12, a7 == 13), input == 4)), 255 < a17), a2 <= 189), a5 == 5))
  {
    a2 = ((((a2 % 45) - (-235)) - (-264986)) / 5) - 52838;
    a17 = ((((a17 % 109) + 3) + (-92)) - (-39346)) - 39285;
    a7 = 14;
    a24 = 13;
    return 23;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(a5 == 4, __logand(input == 2, __logor(a7 == 13, a7 == 14))), a24 == 13))))
  {
    a17 = (((a17 - 8964) * 10) / 9) / 5;
    a7 = 13;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 5, __logand(a24 == 15, __logand(__logand(input == 1, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))), 255 < a17)))))
  {
    a17 = ((((a17 + (-204208)) + (-294222)) / 5) % 109) - (-2);
    a7 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(a2 <= 189, __logand(input == 1, __logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)))), a5 == 7)))
  {
    a17 = (((a17 + 445460) + (-108723)) % 109) + 2;
    a7 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(a17 <= (-108), __logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 13, __logand(a7 == 14, input == 6))))))
  {
    a17 = (((((a17 * 9) / 10) + (-8929)) / 5) % 109) - (-99);
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 6), __logand(189 < a2, 281 >= a2)), a5 == 5), a24 == 13)))
  {
    a7 = 12;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 3, __logand(__logand(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 6), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = (((a2 * 5) - (-456899)) * 1) * (-1);
    a17 = (((a17 % 109) + 2) - (-1)) + (-2);
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(a2 <= 189, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logor(a7 == 12, a7 == 13), input == 6), a24 == 15)))))
  {
    a17 = ((((a17 - 533399) + 268098) + 539288) * (-1)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 13, input == 3)), __logand((-108) < a17, 111 >= a17)), a7 == 13)))
  {
    a2 = (((a2 + 15012) - (-575888)) * 1) * (-1);
    a17 = (((a17 - (-31776)) - (-471905)) / 5) - 154264;
    a7 = 14;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a5 == 4, __logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(255 < a17, a7 == 12)), input == 6)), a24 == 15)))
  {
    a17 = (((a17 - 600111) + 328854) * 1) + (-328853);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(__logand(input == 4, __logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12))), a2 <= 189)), a24 == 14))
  {
    a17 = (((a17 % 71) - (-117)) + 189902) - 189835;
    a7 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a5 == 5, __logand(input == 6, __logor(a7 == 14, __logor(a7 == 12, a7 == 13)))), 255 < a17))))
  {
    a2 = (((a2 - 330313) * 10) / 9) - 15295;
    a17 = ((((a17 / 5) - 422861) + 205502) % 109) - (-66);
    a7 = 13;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 13, __logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(input == 4, __logor(a7 == 13, a7 == 14))), a5 == 4))))
  {
    a17 = ((a17 + (-505795)) * 1) * 1;
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(255 < a17, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 2)), a5 == 6)), a24 == 14))
  {
    a17 = ((a17 - 600255) + (-1)) - 0;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 14, __logand(__logand(input == 4, a7 == 13), __logand((-108) < a17, 111 >= a17))), a5 == 4), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - 574876) / 5) - 126841;
    a17 = (((a17 % 71) - (-182)) - 0) - 0;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17))), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 1), a24 == 14))))
  {
    a2 = ((a2 / (-5)) - (-106688)) - 700155;
    a17 = (((a17 - (-444995)) * 1) % 71) - (-142);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(255 < a17, __logand(a24 == 15, __logand(input == 3, a7 == 12)))), a5 == 7))
  {
    a17 = (((a17 + (-443894)) / 5) / 5) + (-460355);
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand(111 < a17, 255 >= a17), __logand(__logand(input == 5, a24 == 13), a7 == 12))), a2 <= 189))
  {
    a17 = (((a17 + (-406871)) - 29414) + 509500) - 209883;
    a7 = 13;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 1), a24 == 13), __logand(189 < a2, 281 >= a2)))))
  {
    a17 = (((a17 + (-386404)) - (-386194)) - (-24721)) - 24655;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(a5 == 4, __logand(__logor(a7 == 13, a7 == 14), input == 4)), __logand((-108) < a17, 111 >= a17)), a24 == 15)))
  {
    a17 = (((a17 % 71) + 184) - (-1)) - 1;
    a7 = 14;
    a24 = 13;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(a5 == 5, __logand(a24 == 13, __logand(a17 <= (-108), a7 == 13))), __logor(__logand(__logand(__logand(255 < a17, a7 == 14), a24 == 15), a5 == 4), __logand(a5 == 5, __logand(__logand(a7 == 12, a17 <= (-108)), a24 == 13)))), input == 3)))
  {
    a2 = ((a2 * 5) + (-496396)) - (-43586);
    a17 = (((a17 + 0) % 71) - (-183)) - (-1);
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 1), __logand(189 < a2, 281 >= a2)), a5 == 6), a24 == 13))
  {
    a17 = ((((a17 % 71) - (-184)) - 1) + (-591569)) + 591570;
    a7 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 1, __logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 13))), a24 == 14), a5 == 7), a2 <= 189))
  {
    a17 = (((a17 / 5) - (-456210)) - 346519) + (-109681);
    a7 = 13;
    return -1;
  }
  else
    if (__logand(a7 == 13, __logand(a24 == 15, __logand(__logand(a5 == 6, __logand(input == 2, a17 <= (-108))), a2 <= 189))))
  {
    a17 = ((((a17 % 71) - (-191)) + 37) + 557078) + (-557055);
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return 26;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(a24 == 14, __logand(input == 5, __logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12)))), a2 <= 189)))
  {
    a17 = ((((a17 + (-437926)) * 1) / 5) % 71) + 182;
    a7 = 14;
    return 26;
  }
  else
    if (__logand(a7 == 13, __logand(a24 == 13, __logand(__logand(__logand(input == 3, __logand(111 < a17, 255 >= a17)), a2 <= 189), a5 == 5))))
  {
    a17 = (((a17 * 23) / 10) - (-95194)) + 367978;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(a24 == 13, __logand(a7 == 13, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(input == 2, a5 == 5), __logand(189 < a2, 281 >= a2))))))
  {
    a2 = ((a2 * 5) + (-75316)) * 5;
    a17 = (((a17 / 5) * 5) * 5) - 551159;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 7, __logand(__logand(__logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), __logand(a7 == 13, __logand(111 < a17, 255 >= a17))), input == 6), a2 <= 189))))
  {
    a17 = ((a17 + 497335) - 362468) / 5;
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a7 == 14, __logand(a5 == 3, __logand(__logand(111 < a17, 255 >= a17), __logand(__logand(input == 4, a24 == 15), __logand(189 < a2, 281 >= a2))))))
  {
    a7 = 12;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 7, __logand(a24 == 13, __logand(__logor(__logor(__logand(a17 <= (-108), a7 == 14), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), __logand(a7 == 13, __logand((-108) < a17, 111 >= a17))), input == 2)))))
  {
    a2 = (((a2 % 45) + 235) - (-164895)) - 164893;
    a17 = ((((a17 * 9) / 10) % 109) - (-2)) / 5;
    a7 = 12;
    a24 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a2 <= 189, __logand(a24 == 14, __logand(__logand(input == 2, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), a5 == 5)))))
  {
    a2 = (((a2 / 5) / 5) % 45) - (-235);
    a17 = ((a17 * 5) - (-230268)) / 5;
    a7 = 14;
    a24 = 13;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a5 == 4, __logand(input == 5, __logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17)))), a24 == 15)))
  {
    a17 = ((((a17 % 71) + 146) - (-107220)) - 259531) + 152347;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(a24 == 14, __logand(__logand(a2 <= 189, __logand(input == 4, a5 == 5)), a7 == 14))))
  {
    a17 = (((a17 * 10) / (-9)) * 5) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(a5 == 6, input == 5), a24 == 15)), a7 == 12), a2 <= 189))
  {
    a2 = (((a2 % 45) + 234) * 1) + 1;
    a7 = 13;
    a24 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(__logand(a2 <= 189, __logand(__logand(111 < a17, 255 >= a17), input == 3)), a7 == 12), a24 == 13)))
  {
    a17 = (((a17 * 10) / (-9)) * 5) + (-240506);
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(a7 == 12, 255 < a17)), input == 2), a24 == 14), __logand(189 < a2, 281 >= a2)), a5 == 5))
  {
    a2 = (((a2 / (-5)) + (-417573)) * 10) / 9;
    a17 = (((a17 - 128270) + (-400314)) + 6367) + (-77894);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(a5 == 4, input == 4), a7 == 13), a24 == 15))))
  {
    a2 = (((a2 + (-199858)) * 10) / 9) + (-50269);
    a17 = ((((a17 + (-143986)) * 1) / 5) % 71) - (-183);
    a7 = 14;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(input == 6, __logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(a7 == 12, 255 < a17)), __logand(a7 == 13, 255 < a17)))))))
  {
    a2 = ((a2 * 5) / 5) - 103911;
    a17 = ((a17 - 600110) * 1) - 2;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(input == 6, __logor(__logor(__logand(a17 <= (-108), a7 == 14), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 13)))), a5 == 7), a24 == 13))
  {
    a17 = (((a17 % 299946) + (-300053)) - 2) - 0;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(input == 2, __logor(__logor(__logand(__logand(a24 == 15, __logand(a7 == 14, 255 < a17)), a5 == 4), __logand(__logand(__logand(a7 == 12, a17 <= (-108)), a24 == 13), a5 == 5)), __logand(__logand(a24 == 13, __logand(a17 <= (-108), a7 == 13)), a5 == 5)))))
  {
    a2 = ((a2 / (-5)) / 5) - 528849;
    a17 = (((a17 - 0) / 5) - 300593) + 687900;
    a7 = 14;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 3, __logand(input == 4, __logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a7 == 14, a17 <= (-108))))))), a24 == 15))
  {
    a2 = ((a2 + (-76921)) + (-80615)) - 172398;
    a17 = ((((a17 - 0) % 299946) + (-300053)) - (-542550)) - 542551;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 13, input == 5), a7 == 13))), a5 == 5))
  {
    a2 = ((a2 / 5) - 555637) + (-17770);
    a17 = ((((a17 - (-266183)) * 10) / 9) * 10) / 9;
    a7 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 3, __logand(a24 == 15, __logand(__logand(input == 1, a7 == 13), __logand(189 < a2, 281 >= a2))))))
  {
    a17 = (((a17 / 5) + 156) + 305089) + (-305059);
    a7 = 14;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(a24 == 14, __logand(__logand(a2 <= 189, __logand(input == 1, __logor(__logor(a7 == 12, a7 == 13), a7 == 14))), a5 == 5))))
  {
    a2 = (((((a2 % 45) - (-235)) * 1) * 5) % 45) + 226;
    a17 = ((a17 - 600142) + 457437) + (-457541);
    a7 = 12;
    a24 = 13;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(a7 == 12, __logand(__logand(a5 == 4, __logand(input == 3, __logand(111 < a17, 255 >= a17))), a2 <= 189)), a24 == 15))
  {
    a24 = 14;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(input == 4, __logor(__logor(__logand(__logand(a24 == 15, __logand(a7 == 14, 255 < a17)), a5 == 6), __logand(a5 == 7, __logand(a24 == 13, __logand(a17 <= (-108), a7 == 12)))), __logand(__logand(__logand(a17 <= (-108), a7 == 13), a24 == 13), a5 == 7)))))
  {
    a2 = (((a2 % 45) + 234) * 1) * 1;
    a17 = (((a17 % 109) - (-2)) - (-1)) / 5;
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a5 == 4, __logand(a24 == 14, __logand(__logand(189 < a2, 281 >= a2), __logand(255 < a17, __logand(__logor(a7 == 13, a7 == 14), input == 5))))))
  {
    a2 = ((a2 * (-5)) + 490210) + (-622035);
    a17 = ((((a17 / 5) + (-253338)) - (-303884)) * (-1)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a24 == 15, __logand(__logand(__logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 13)), input == 5), __logand(189 < a2, 281 >= a2)))))
  {
    a17 = ((((a17 / 5) * 5) - 517057) % 71) - (-222);
    a7 = 13;
    return 26;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a17 <= (-108), __logand(a5 == 5, __logand(input == 5, __logor(a7 == 14, __logor(a7 == 12, a7 == 13)))))), a24 == 15))
  {
    a2 = ((a2 - 51957) - 201016) + (-229661);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 4, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))), a5 == 5), a2 <= 189), __logand((-108) < a17, 111 >= a17)), a24 == 14))
  {
    a17 = (((a17 + (-583681)) / 5) * 10) / 9;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 2, __logor(a7 == 12, a7 == 13))), a17 <= (-108)), a5 == 4), a24 == 14))
  {
    a2 = (((a2 * (-5)) / 5) - (-461012)) * (-1);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logor(__logor(__logand(__logand(a7 == 13, 255 < a17), a24 == 14), __logand(__logand(a7 == 14, 255 < a17), a24 == 14)), __logand(a24 == 15, __logand(a7 == 12, a17 <= (-108)))), input == 2)), a5 == 7))
  {
    a17 = (((a17 % 299946) - 300053) * 1) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(255 < a17, a7 == 12)), input == 1), __logand(189 < a2, 281 >= a2)), a24 == 14), a5 == 4))
  {
    a2 = ((a2 + (-56097)) + (-204457)) / 5;
    a17 = (((a17 - 0) - 600111) / 5) + (-466402);
    a7 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(__logand(__logand(input == 1, a5 == 3), __logand(189 < a2, 281 >= a2)), __logand(111 < a17, 255 >= a17)), a7 == 14)))
  {
    a2 = ((a2 + (-198382)) * 3) - 2631;
    a17 = (((a17 / 5) * 10) / (-2)) + (-174727);
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 7, __logand(__logand(input == 5, __logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(a7 == 13, __logand(111 < a17, 255 >= a17)))), a2 <= 189))))
  {
    a17 = (((a17 - 587947) / 5) / 5) + 23535;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(189 < a2, 281 >= a2), __logand(a7 == 13, __logand(a5 == 4, input == 4)))), __logand((-108) < a17, 111 >= a17)))
  {
    a2 = ((a2 * 5) / 5) + (-257179);
    a17 = ((((a17 % 71) - (-184)) + 43333) / 5) + (-8544);
    a7 = 12;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 14, __logand(__logor(a7 == 12, a7 == 13), input == 2)), a2 <= 189), __logand(111 < a17, 255 >= a17)), a5 == 5))
  {
    a2 = ((((a2 % 45) + 234) * 5) % 45) + 193;
    a17 = (((a17 - (-121418)) * 10) / (-9)) + (-75458);
    a7 = 12;
    a24 = 15;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(a17 <= (-108), __logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 3, __logand(a24 == 13, __logand(__logor(a7 == 13, a7 == 14), input == 1))))))
  {
    a2 = ((a2 + (-566056)) + (-17565)) - 7708;
    a17 = (((((a17 - (-545152)) % 109) - (-2)) * 5) % 109) - (-2);
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(a7 == 12, __logand(__logand(__logand(__logand(a2 <= 189, input == 2), __logand(111 < a17, 255 >= a17)), a5 == 4), a24 == 15)))
  {
    a17 = (((((a17 - (-393608)) * 10) / 9) - 738081) * (-1)) / 10;
    a7 = 13;
    a24 = 14;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(input == 1, __logor(a7 == 13, a7 == 14)), a2 <= 189), a5 == 4)), a24 == 15))
  {
    a17 = ((a17 - (-93652)) / 5) * 5;
    a7 = 14;
    a24 = 13;
    a5 = 5;
    return 23;
  }




























































































































































































































  return calculate_output2(input);
}

int calculate_output2(int input)
{
  if (__logand(a5 == 7, __logand(__logand(__logand(__logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(a7 == 12, 255 < a17)), input == 4), a2 <= 189), a24 == 13)))
  {
    a17 = ((a17 + (-223220)) - 376890) - 0;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(a5 == 3, __logand(__logor(a7 == 13, a7 == 14), input == 3)), __logand(189 < a2, 281 >= a2))), a17 <= (-108)))
  {
    a2 = ((a2 * 5) - 572766) - 10840;
    a17 = ((((a17 + 0) % 299872) + 300127) * 10) / 9;
    a7 = 12;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(a17 <= (-108), __logand(__logand(input == 5, __logor(a7 == 12, a7 == 13)), a2 <= 189))), a24 == 15))
  {
    a2 = (((a2 % 45) - (-234)) * 1) + 0;
    a17 = ((((a17 % 299872) - (-300127)) - (-85883)) - 234462) - (-340820);
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(input == 3, __logor(a7 == 14, __logor(a7 == 12, a7 == 13)))), a24 == 15), a2 <= 189)))
  {
    a17 = ((a17 - 554057) - 32150) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(input == 4, __logor(__logand(a24 == 14, __logand(a7 == 12, a17 <= (-108))), __logor(__logand(__logand(255 < a17, a7 == 13), a24 == 13), __logand(__logand(a7 == 14, 255 < a17), a24 == 13))))), a5 == 6))
  {
    a17 = ((a17 / 5) - 146392) - 201110;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 2)), a5 == 4), a24 == 14))
  {
    a2 = (((a2 + (-438465)) * 10) / 9) + (-61750);
    a17 = ((a17 - (-547585)) - (-40543)) + (-650123);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(a24 == 14, __logand(__logor(__logand(a17 <= (-108), a7 == 14), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 2)), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 * 5) - 588386) - 700;
    a17 = (((a17 % 299946) - 300053) / 5) - 223475;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 1, a5 == 5), a7 == 12)))))
  {
    a17 = ((a17 - (-556781)) - (-32123)) - (-2336);
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(a7 == 12, input == 1), a24 == 13), a17 <= (-108)))))
  {
    a7 = 14;
    a24 = 14;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 3, __logand(__logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 5), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 + (-105771)) / 5) * 5;
    a17 = (((a17 / 5) + 192183) * (-1)) / 10;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a24 == 13, input == 6), a7 == 14), __logand(189 < a2, 281 >= a2)), a5 == 5), __logand((-108) < a17, 111 >= a17)))
  {
    a2 = ((a2 - 160975) / 5) * 5;
    a17 = ((a17 + (-217141)) + 302270) - 56859;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(__logand(input == 3, __logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17)))), a5 == 7), a2 <= 189)))
  {
    a17 = ((((a17 * 5) - 221071) / 5) % 71) - (-220);
    a7 = 12;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(__logand(__logand(a2 <= 189, __logand(input == 4, a24 == 13)), __logand(111 < a17, 255 >= a17)), a7 == 12), a5 == 5))
  {
    a17 = ((a17 + (-543666)) - 48044) - 4253;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 3), a24 == 13), __logand((-108) < a17, 111 >= a17)))))
  {
    a17 = ((a17 + (-479754)) * 1) - 60677;
    a7 = 12;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 4, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 15, input == 5), a7 == 13)))))
  {
    a17 = (((a17 - 89845) % 71) - (-187)) * 1;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 2), a24 == 13)), __logand(189 < a2, 281 >= a2)), a5 == 5))
  {
    a2 = ((a2 / 5) * 5) + (-133618);
    a17 = (((a17 - 64840) - 296199) * 10) / 9;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a7 == 12, input == 6), __logand((-108) < a17, 111 >= a17))), a24 == 15), a5 == 5))
  {
    a2 = ((a2 + (-519111)) - (-90859)) / 5;
    a17 = ((a17 / 5) + (-553032)) + 553176;
    a7 = 13;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a24 == 15, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(input == 3, a2 <= 189), a7 == 12)))))
  {
    a17 = ((((a17 / 5) + 521700) - 934556) * (-1)) / 10;
    a7 = 14;
    return 23;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 3, __logand(a24 == 14, __logand(input == 6, __logor(__logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)))))))
  {
    a2 = ((a2 / 5) * (-5)) * 5;
    a17 = (((a17 * 5) % 71) + 182) + 1;
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 4), a17 <= (-108)), a24 == 15), a5 == 4), a2 <= 189))
  {
    a17 = (((((a17 + 343527) % 71) + 183) * 5) % 71) - (-165);
    a7 = 13;
    return 21;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(a5 == 6, __logand(a2 <= 189, __logand(a24 == 15, input == 3)))), a7 == 13))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(input == 3, __logor(__logand(255 < a17, a7 == 12), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))))), a5 == 5), a24 == 14)))
  {
    a2 = ((a2 + (-81628)) * 5) - 151837;
    a17 = ((a17 + (-600110)) - 0) + (-2);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(__logand(a5 == 5, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 6, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))))), a24 == 15)))
  {
    a17 = ((((a17 - 0) + (-206889)) + 16806) % 109) - (-2);
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 14, __logand(__logor(a7 == 12, a7 == 13), input == 3)), a5 == 4), a17 <= (-108)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - 217302) + (-351806)) / 5;
    a17 = (((((a17 % 71) - (-205)) * 9) / 10) * 10) / 9;
    a7 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(input == 6, __logor(__logand(__logand(__logand(a17 <= (-108), a7 == 13), a24 == 13), a5 == 5), __logor(__logand(__logand(a24 == 15, __logand(255 < a17, a7 == 14)), a5 == 4), __logand(__logand(a24 == 13, __logand(a17 <= (-108), a7 == 12)), a5 == 5))))))
  {
    a17 = (((a17 + 0) % 299946) + (-300053)) - 2;
    a7 = 14;
    a24 = 14;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(__logand(__logand(input == 6, __logor(__logand(__logand(255 < a17, a7 == 14), a24 == 13), __logand(__logand(a7 == 12, a17 <= (-108)), a24 == 14))), a5 == 7), a2 <= 189))
  {
    a17 = ((((a17 + 0) - 0) + 0) % 299946) + (-300053);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(a2 <= 189, __logand(__logand(__logand(input == 2, __logor(a7 == 13, a7 == 14)), a5 == 4), __logand(111 < a17, 255 >= a17)))))
  {
    a17 = ((a17 - 112842) + (-369240)) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(a24 == 15, input == 3), a5 == 5), __logand((-108) < a17, 111 >= a17))), a7 == 12))
  {
    a17 = ((a17 + 316175) * 1) + 233255;
    a24 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(a24 == 13, __logand(__logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(a7 == 12, 255 < a17)), input == 6))), a2 <= 189))
  {
    a17 = ((a17 + (-600109)) + (-1)) + (-2);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a17 <= (-108), __logand(input == 6, a5 == 5)), a7 == 14), a24 == 15), a2 <= 189))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a5 == 4, __logand(input == 1, __logor(a7 == 12, a7 == 13))), a24 == 13))))
  {
    a7 = 12;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 4, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(255 < a17, a7 == 12))), a24 == 13), a5 == 4), __logand(189 < a2, 281 >= a2)))
  {
    a17 = ((((a17 + (-427791)) / 5) / 5) % 71) + 182;
    a7 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 3), a5 == 3)), a24 == 14))
  {
    a2 = ((a2 + (-120881)) * 4) * 1;
    a17 = ((((a17 % 109) - (-2)) + (-127431)) - 362706) + 490136;
    a7 = 12;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 2, __logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a5 == 3)), a24 == 15))
  {
    a2 = ((a2 * 5) * (-5)) - 245970;
    a17 = ((((a17 % 299946) + (-300053)) + (-1)) + 161315) - 161314;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 14, __logand(input == 6, __logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))))), a5 == 4)))
  {
    a17 = (((a17 % 299946) - 300053) * 1) * 1;
    a7 = 13;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 3, a7 == 12)), a24 == 13), a17 <= (-108)), a5 == 3))
  {
    a2 = ((a2 + 430380) * 1) / (-5);
    a17 = ((((a17 * 9) / 10) % 109) + 42) - 25;
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logor(__logand(__logand(a7 == 13, 255 < a17), a24 == 13), __logand(__logand(a7 == 14, 255 < a17), a24 == 13)), __logand(a24 == 14, __logand(a7 == 12, a17 <= (-108)))), input == 3))))
  {
    a2 = ((a2 - (-54478)) + (-529752)) + (-118732);
    a17 = ((a17 / 5) / 5) + (-531417);
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 7, __logand(a7 == 13, __logand(a2 <= 189, __logand(255 < a17, input == 2))))))
  {
    a17 = ((a17 - 0) + (-600254)) - 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 5), a24 == 15), 255 < a17), a2 <= 189), a5 == 5))
  {
    a2 = ((((a2 - (-169038)) + (-8583)) + (-45242)) % 45) + 234;
    a7 = 13;
    a24 = 13;
    return 23;
  }
  else
    if (__logand(a24 == 15, __logand(a5 == 6, __logand(a2 <= 189, __logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 3)))))
  {
    a17 = (((a17 % 299946) + (-300053)) * 1) - 2;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a7 == 12, __logand(__logand(input == 2, __logand(111 < a17, 255 >= a17)), a5 == 6)), a2 <= 189), a24 == 15))
  {
    a2 = ((((a2 % 45) - (-236)) / 5) - (-550201)) + (-549992);
    a7 = 14;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(a5 == 4, __logand(__logand(input == 3, __logor(a7 == 13, a7 == 14)), __logand(111 < a17, 255 >= a17))), a24 == 15)))
  {
    a7 = 14;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a7 == 14, __logand(__logand(__logand(__logand(a2 <= 189, input == 2), a24 == 14), a5 == 5), __logand(111 < a17, 255 >= a17))))
  {
    a2 = ((((a2 % 45) - (-235)) - (-1)) + 81498) - 81497;
    a17 = ((((a17 * 10) / 4) / 5) * 10) / 2;
    a7 = 12;
    a24 = 15;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(a24 == 13, __logand(255 < a17, __logand(__logand(a5 == 5, __logand(__logor(a7 == 12, a7 == 13), input == 5)), a2 <= 189))))
  {
    a17 = (((a17 % 109) + (-14)) + (-65)) - 16;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(a5 == 5, input == 4), a24 == 13)), a7 == 14)))
  {
    a17 = ((((a17 - 567803) % 71) + 187) - 424769) - (-424798);
    a24 = 15;
    a5 = 6;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(__logand(input == 3, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), __logand(111 < a17, 255 >= a17)), a24 == 14), a5 == 6)))
  {
    a2 = ((((a2 - (-148382)) + 15537) - 69273) % 45) + 235;
    a17 = ((a17 - 250975) * 2) - (-374533);
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(a24 == 14, __logand(__logand(input == 1, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), a2 <= 189)), a5 == 6)))
  {
    a2 = ((((((a2 * 9) / 10) % 45) - (-234)) / 5) * 51) / 10;
    a7 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(255 < a17, __logand(__logand(a5 == 5, __logand(__logand(input == 1, __logor(a7 == 12, a7 == 13)), a2 <= 189)), a24 == 13)))
  {
    a17 = (((a17 / 5) * 10) / (-4)) - 18616;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(__logor(__logand(a24 == 14, __logand(a7 == 12, a17 <= (-108))), __logor(__logand(__logand(a7 == 13, 255 < a17), a24 == 13), __logand(a24 == 13, __logand(255 < a17, a7 == 14)))), input == 3), a2 <= 189)))
  {
    a2 = ((((a2 * 9) / 10) % 45) + 234) + 0;
    a17 = ((((a17 * 9) / 10) % 299946) + (-300053)) - 0;
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a5 == 4, __logand(a17 <= (-108), __logand(input == 1, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))))), a24 == 15)))
  {
    a17 = ((((a17 * 9) / 10) - (-39396)) % 109) - (-1);
    a7 = 12;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a7 == 12, input == 4), __logand((-108) < a17, 111 >= a17)), a5 == 4), a2 <= 189), a24 == 15))
  {
    a17 = ((a17 * 5) / 5) - 8323;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(a5 == 6, __logand(input == 5, a17 <= (-108)))), a24 == 13), a7 == 12))
  {
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 5)), a24 == 13), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((((a17 % 71) + 183) * 5) * 5) % 71) - (-147);
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(__logand(a7 == 12, a17 <= (-108)), a24 == 14), __logor(__logand(__logand(255 < a17, a7 == 13), a24 == 13), __logand(a24 == 13, __logand(255 < a17, a7 == 14)))), input == 1))))
  {
    a2 = (((a2 * (-5)) + 512688) / 5) + (-671267);
    a17 = ((((a17 % 299946) + (-300053)) + (-2)) - (-209672)) - 209671;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 12), __logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14))), input == 1))), a24 == 15))
  {
    a17 = (((((a17 * 9) / 10) % 71) - (-182)) - (-14398)) + (-14397);
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand(__logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(a7 == 13, __logand(111 < a17, 255 >= a17))), input == 4), a24 == 15)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 - 440571) * 10) / 9) * 1;
    a17 = ((a17 / 5) + 199) + (-13);
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(a5 == 6, __logand(a2 <= 189, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 5))), 255 < a17)))
  {
    a7 = 12;
    return 21;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 5, __logand(a24 == 15, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 1), a2 <= 189)))))
  {
    a17 = (((a17 - 548709) + 66483) * 10) / 9;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 4, __logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17)))), a5 == 6), __logand(189 < a2, 281 >= a2)), a24 == 13))
  {
    a17 = (((a17 * 5) - 44693) % 109) + 15;
    a7 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a17 <= (-108), input == 5)), a7 == 12)), a5 == 3))
  {
    a2 = ((a2 + (-572725)) + 175794) * 1;
    a17 = (((a17 / 5) % 109) - (-105)) / 5;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a17 <= (-108), input == 1), a7 == 14), a2 <= 189), a24 == 14), a5 == 5))
  {
    a2 = (((a2 / 5) % 45) + 235) - 1;
    a17 = ((((a17 % 109) - (-95)) - 397967) + 16520) + 381429;
    a24 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(a7 == 12, __logand(a5 == 6, __logand(__logand(a2 <= 189, input == 4), a24 == 15)))))
  {
    a17 = (((a17 - (-175358)) * 10) / (-9)) * 3;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 5, a2 <= 189), a5 == 5), a24 == 15), a7 == 14), a17 <= (-108)))
  {
    a2 = ((((a2 + 0) - (-533443)) / 5) % 45) - (-235);
    a17 = (((a17 % 109) + 56) + 32) - 64;
    a7 = 13;
    a24 = 14;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(a5 == 6, __logand(a24 == 14, __logand(__logand(__logand(input == 4, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), a2 <= 189), __logand((-108) < a17, 111 >= a17)))))
  {
    a2 = (((a2 % 45) + 236) * 1) - 2;
    a17 = (((a17 - (-285478)) - (-176297)) % 71) + 120;
    a7 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand(__logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), __logand(__logand(111 < a17, 255 >= a17), a7 == 13)), input == 3), a24 == 15)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 / (-5)) * 5) * 5;
    a17 = ((a17 / 5) + 443474) - (-14231);
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a7 == 12, __logand(__logand((-108) < a17, 111 >= a17), __logand(a24 == 15, __logand(input == 2, __logand(189 < a2, 281 >= a2)))))))
  {
    a2 = (((a2 - (-382813)) + (-765612)) - (-535577)) * (-3);
    a17 = (((a17 - 191016) * 10) / 9) * 2;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logor(__logor(__logand(__logand(__logand(255 < a17, a7 == 14), a24 == 15), a5 == 6), __logand(a5 == 7, __logand(__logand(a17 <= (-108), a7 == 12), a24 == 13))), __logand(a5 == 7, __logand(__logand(a7 == 13, a17 <= (-108)), a24 == 13))), input == 2), a2 <= 189))
  {
    a17 = (((a17 % 299946) - 300053) * 1) + (-1);
    a7 = 14;
    a24 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand(__logand(__logand(111 < a17, 255 >= a17), input == 5), __logand(189 < a2, 281 >= a2)), a7 == 14)), a24 == 15))
  {
    a2 = (((a2 - 503628) * 10) / 9) * 1;
    a17 = ((a17 - 141047) * 4) - 9786;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(a2 <= 189, __logand(input == 6, __logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a7 == 14, a17 <= (-108))), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))))), a5 == 7))
  {
    a17 = ((((a17 % 109) + 1) * 5) % 109) - (-1);
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(a24 == 15, __logand(__logand(input == 5, __logor(a7 == 13, a7 == 14)), a2 <= 189)), 255 < a17)))
  {
    a17 = ((((a17 % 71) + 138) + 39) - 439359) + 439313;
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a24 == 13, __logand(__logand(__logand(input == 2, __logor(a7 == 12, a7 == 13)), __logand(189 < a2, 281 >= a2)), __logand(111 < a17, 255 >= a17)))))
  {
    a2 = ((a2 * 5) - (-555151)) * (-1);
    a17 = ((((a17 / 5) - 449993) + 603017) * (-1)) / 10;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(__logand((-108) < a17, 111 >= a17), __logand(a2 <= 189, __logand(__logor(a7 == 13, a7 == 14), input == 2)))), a24 == 15))
  {
    a2 = (((((a2 % 45) + 235) + 1) * 5) % 45) + 219;
    a17 = (((a17 % 71) + 184) + 1) + (-1);
    a7 = 14;
    a24 = 13;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(111 < a17, 255 >= a17), __logand(a7 == 12, __logand(input == 2, a5 == 5)))), a24 == 13))
  {
    a17 = ((a17 - 199) + (-6)) + (-5);
    a7 = 14;
    a5 = 7;
    return 21;
  }
  else
    if (__logand(a7 == 13, __logand(__logand(__logand(__logand(input == 4, a5 == 7), a24 == 14), a2 <= 189), __logand((-108) < a17, 111 >= a17))))
  {
    a17 = ((a17 - 357382) + (-119715)) * 1;
    a7 = 14;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 5, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 2, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 12), __logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17)))))))))
  {
    a2 = ((a2 - (-271816)) / 5) * (-5);
    a17 = (((a17 - (-250279)) + 97462) * (-1)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 3, __logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))))), a2 <= 189), a5 == 6), a24 == 13))
  {
    a17 = ((((a17 % 299946) - 300053) / 5) / 5) + (-264660);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a7 == 12, __logand(a5 == 5, __logand(__logand(__logand(input == 1, a24 == 13), a2 <= 189), __logand(111 < a17, 255 >= a17)))))
  {
    a17 = ((((a17 * (-1)) / 10) + 161751) + (-250598)) + 88873;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(__logand(input == 1, a5 == 5), __logand((-108) < a17, 111 >= a17)), a7 == 14)), a2 <= 189))
  {
    a17 = (((((a17 % 71) - (-182)) - 0) * 5) % 71) - (-178);
    a7 = 12;
    a24 = 15;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(a17 <= (-108), __logand(__logand(a24 == 13, input == 4), __logand(189 < a2, 281 >= a2)))), a7 == 12))
  {
    a2 = ((a2 * (-5)) * 5) / 5;
    a24 = 14;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 12), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17)))), input == 4))), a24 == 14))
  {
    a17 = ((((a17 % 109) + 2) - 348657) + (-227996)) - (-576653);
    a7 = 14;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 4, __logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(input == 3, a7 == 13)), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 / (-5)) - (-389340)) * (-1);
    a17 = ((((a17 + 69965) + (-188133)) + (-248443)) * (-1)) / 10;
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a7 == 13, __logand(a24 == 15, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 4, input == 3))))))
  {
    a2 = ((a2 * (-5)) - 523034) * 1;
    a17 = (((((a17 % 71) + 184) + 138561) * 4) % 71) + 151;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(a2 <= 189, __logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 2), a5 == 6), a24 == 15))))
  {
    a2 = (((((a2 - 0) % 45) + 236) * 5) % 45) + 213;
    a17 = ((a17 - (-31328)) * 5) * 3;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(a5 == 7, __logand(a2 <= 189, __logand(a24 == 13, __logand(input == 3, __logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(255 < a17, a7 == 12)))))))
  {
    a17 = (((((a17 % 109) - 13) * 5) + (-231249)) % 109) - (-55);
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(a2 <= 189, __logand(a24 == 14, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 5))))))
  {
    a17 = ((((a17 % 71) + 184) * 1) / 5) + 111;
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(a5 == 5, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(input == 6, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))), a24 == 14), a2 <= 189))))
  {
    a2 = ((((a2 % 45) - (-234)) * 1) + (-304708)) - (-304710);
    a7 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a24 == 14, __logand(__logand(__logand(input == 6, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))), a5 == 6), a2 <= 189))))
  {
    a2 = ((((a2 % 45) - (-236)) - (-1)) / 5) + 208;
    a17 = ((((a17 + (-583311)) / 5) * 5) % 71) - (-225);
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 4, __logand(__logand(__logor(__logand(a7 == 12, 255 < a17), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17)))), input == 5), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 * 5) * 5) - 372070;
    a17 = (((a17 % 71) + 123) - (-13742)) + (-13696);
    a7 = 14;
    a24 = 15;
    return 21;
  }
  else
    if (__logand(__logand(a5 == 4, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 1, __logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(a7 == 13, __logand(111 < a17, 255 >= a17)))))), a24 == 15))
  {
    a2 = (((a2 - 67499) * 5) * 10) / 9;
    a17 = (((((a17 % 71) + 183) * 5) * 5) % 71) - (-126);
    a7 = 12;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(__logand(a24 == 13, __logand(input == 1, __logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))))), a5 == 5), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((a17 - 0) % 109) + 2) + 1;
    a7 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(a24 == 13, __logand(input == 6, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 12), __logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17)))))), a2 <= 189)))
  {
    a2 = (((a2 / 5) - (-545601)) % 45) + 203;
    a17 = (((a17 % 109) - (-2)) + 1) + (-2);
    a7 = 13;
    return 23;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(__logand(input == 1, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 12), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14)))), __logand(189 < a2, 281 >= a2)), a24 == 13)))
  {
    a17 = ((((a17 % 71) - (-182)) - (-29808)) + (-229764)) + 199957;
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), input == 6), a24 == 13), __logand((-108) < a17, 111 >= a17))), a7 == 13))
  {
    a2 = (((a2 - (-93069)) / 5) * 5) - 656223;
    a17 = ((a17 + (-400644)) - 189700) - 2801;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a7 == 14, __logand(__logand(input == 1, a2 <= 189), a5 == 5)), a24 == 15), a17 <= (-108)))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 4, __logand((-108) < a17, 111 >= a17)), a24 == 15))), a7 == 13))
  {
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 5, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), __logand(189 < a2, 281 >= a2)), a24 == 15), a5 == 5), 255 < a17))
  {
    a2 = ((a2 + (-1933)) * 5) + (-538505);
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(__logand(__logand(a5 == 3, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 5)), a24 == 15), __logand(189 < a2, 281 >= a2))))
  {
    a17 = (((a17 % 71) + 182) + (-10)) + 11;
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(__logand(__logand(input == 5, a7 == 12), a24 == 15), a2 <= 189), a17 <= (-108))))
  {
    a2 = (((a2 % 45) - (-235)) + 1) + (-2);
    a7 = 13;
    a24 = 14;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(input == 5, __logor(__logand(a24 == 13, __logand(255 < a17, a7 == 14)), __logand(__logand(a17 <= (-108), a7 == 12), a24 == 14))), a5 == 7)))
  {
    a17 = ((((a17 % 109) - (-2)) + 1) - (-372693)) - 372693;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 14, __logand(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 3)), __logand(189 < a2, 281 >= a2)), a5 == 4))
  {
    a2 = ((a2 * 5) + (-72167)) * 5;
    a17 = (((a17 + (-186071)) + (-206980)) * 10) / 9;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 13, __logand(input == 6, __logor(a7 == 12, a7 == 13))), 255 < a17), a5 == 5), a2 <= 189))
  {
    a17 = ((a17 + (-600164)) * 1) + (-53);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(255 < a17, __logand(__logand(a7 == 13, __logand(input == 4, a5 == 7)), a2 <= 189))))
  {
    a17 = ((((a17 - 0) - 0) + 0) % 71) - (-150);
    a5 = 5;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(a24 == 15, __logand(__logor(a7 == 13, a7 == 14), input == 2)), __logand((-108) < a17, 111 >= a17)), a5 == 4)))
  {
    a17 = ((a17 - 164414) - 174884) + (-159208);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 14, __logand(__logor(a7 == 12, a7 == 13), input == 1)), a17 <= (-108))), a5 == 4))
  {
    a2 = ((a2 / 5) * 5) / (-5);
    a7 = 12;
    a24 = 15;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(255 < a17, __logand(a5 == 7, __logand(__logor(a7 == 13, a7 == 14), input == 2)))), a2 <= 189))
  {
    a17 = ((a17 - 600173) / 5) * 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(255 < a17, __logand(a2 <= 189, __logand(input == 3, __logor(a7 == 12, a7 == 13)))), a24 == 15)))
  {
    a7 = 13;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(a24 == 15, __logand(a2 <= 189, __logand(a5 == 6, input == 3)))), a7 == 12))
  {
    a17 = (((a17 % 109) - (-35)) - 26) / 5;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(a24 == 15, __logand(a5 == 4, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17)), input == 4)))))
  {
    a17 = (((a17 - 384201) % 109) + 1) + 2;
    a7 = 13;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(a5 == 6, __logand(a24 == 13, __logand(input == 6, a7 == 12)))), a2 <= 189))
  {
    a2 = (((((a2 * 9) / 10) * 1) - (-556567)) % 45) + 231;
    a17 = (((a17 % 109) + 37) + 6) - 19;
    a7 = 13;
    a24 = 15;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 3), 255 < a17), __logand(189 < a2, 281 >= a2)), a24 == 15)))
  {
    a17 = ((((a17 % 109) + 3) + (-50)) - (-516936)) + (-516973);
    a7 = 12;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logor(a7 == 12, a7 == 13), input == 6)), a5 == 3)), a24 == 13))
  {
    a2 = ((a2 + (-109630)) - 123244) - 219626;
    a17 = (((a17 + (-100817)) * 5) * 10) / 9;
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 5, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(input == 1, a7 == 14), __logand(189 < a2, 281 >= a2))))))
  {
    a17 = ((a17 + 526530) + 65040) + 5305;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(input == 6, __logor(__logand(255 < a17, a7 == 12), __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(a7 == 14, __logand(111 < a17, 255 >= a17)))))))))
  {
    a2 = ((a2 * 5) / 5) / (-5);
    a17 = ((a17 - 0) - 600110) + (-2);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(a17 <= (-108), __logand(input == 2, a7 == 12)), a5 == 6)), a24 == 13))
  {
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 15, __logand(a2 <= 189, __logand(input == 2, __logor(a7 == 12, a7 == 13)))), 255 < a17), a5 == 5))
  {
    a17 = (((a17 + 0) / 5) * 4) + (-576078);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(__logand(input == 2, __logor(__logand(a7 == 12, 255 < a17), __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)))), a2 <= 189), a24 == 13)))
  {
    a17 = ((((a17 + (-600111)) + (-1)) * 9) / 10) + (-11291);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(a2 <= 189, __logand(input == 4, __logor(__logor(__logand(__logand(a7 == 13, 255 < a17), a24 == 14), __logand(__logand(255 < a17, a7 == 14), a24 == 14)), __logand(a24 == 15, __logand(a7 == 12, a17 <= (-108))))))))
  {
    a17 = ((((a17 * 9) / 10) % 71) - (-184)) - 2;
    a7 = 14;
    a24 = 13;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(a2 <= 189, __logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 3))), a5 == 7))
  {
    a17 = (((a17 % 109) + 1) - (-2)) - 1;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(a7 == 12, 255 < a17)), input == 2), a2 <= 189), a24 == 14), a5 == 7))
  {
    a17 = ((a17 - 600111) - 1) - 0;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 5, __logand(__logand(a2 <= 189, __logand(input == 3, a7 == 14)), a17 <= (-108)))))
  {
    a2 = (((a2 % 45) + 236) - (-1)) * 1;
    a24 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 7, __logand(a24 == 13, __logand(__logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(a7 == 12, 255 < a17)), input == 5)))))
  {
    a17 = (((((a17 % 71) + 166) * 9) / 10) * 9) / 10;
    a7 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(111 < a17, 255 >= a17), __logand(__logand(input == 1, a7 == 13), a24 == 13))), a5 == 5))
  {
    a5 = 7;
    return 26;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(a5 == 5, __logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 5), __logand(189 < a2, 281 >= a2)))), 255 < a17))
  {
    a7 = 13;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 13, __logand(a5 == 5, __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12))), input == 5)))))
  {
    a17 = (((a17 * 9) / 10) - 5211) + 549653;
    a7 = 13;
    a24 = 14;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(a5 == 5, __logand(a7 == 14, __logand(input == 6, a24 == 13)))), a2 <= 189))
  {
    a17 = (((a17 + 372015) + (-372184)) + 315921) + (-315903);
    a24 = 14;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 13, __logand(a5 == 4, __logand(input == 3, __logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a7 == 14, a17 <= (-108))), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)))))))
  {
    a2 = ((a2 * 5) - 399704) * 1;
    a17 = ((((a17 % 299946) - 300053) + (-1)) - (-345280)) - 345280;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), __logand(189 < a2, 281 >= a2)))), a5 == 5))
  {
    a2 = (((a2 * (-5)) * 5) - (-579500)) * (-1);
    a17 = ((a17 / 5) - 391832) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17)))), input == 2), a5 == 3))))
  {
    a2 = ((a2 + (-106788)) * 5) * 1;
    a17 = (((a17 + 74148) + 98517) % 109) - 1;
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand(__logand(input == 3, __logand((-108) < a17, 111 >= a17)), a7 == 14), a24 == 13)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 / (-5)) - 597366) + (-852);
    a17 = ((a17 - 484669) + (-100380)) - 5769;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(__logand(input == 1, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12))), a24 == 13)), a2 <= 189))
  {
    a17 = (((a17 % 109) - (-2)) / 5) / 5;
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(a24 == 14, __logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 6), 255 < a17), a2 <= 189))))
  {
    a2 = (((a2 - (-292946)) + (-155034)) % 45) + 234;
    a17 = ((((a17 % 109) + (-95)) - (-473885)) * 1) - 473817;
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(a5 == 5, __logand(255 < a17, __logand(__logor(a7 == 13, a7 == 14), input == 3))), __logand(189 < a2, 281 >= a2))))
  {
    a17 = ((((a17 + (-251055)) % 71) + 183) + 492006) + (-492005);
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(255 < a17, __logand(__logand(__logand(input == 2, a7 == 14), a2 <= 189), a5 == 5)), a24 == 15))
  {
    a17 = (((a17 / 5) * 4) * (-6)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(a7 == 13, __logand(255 < a17, __logand(a24 == 15, input == 3))), __logand(189 < a2, 281 >= a2))))
  {
    a17 = (((a17 % 109) - 46) - 573448) + 573425;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a5 == 3, __logand(input == 3, a24 == 15)), a7 == 14)), __logand(111 < a17, 255 >= a17)))
  {
    a2 = ((a2 - 230215) / 5) + (-123947);
    a17 = (((a17 / 5) * 10) / (-2)) * 5;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(input == 4, __logor(a7 == 12, a7 == 13))), a5 == 4), a24 == 13)))
  {
    a2 = (((a2 * (-5)) * 10) / 9) * 5;
    a17 = ((a17 * 5) * 5) / 5;
    a7 = 12;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(255 < a17, __logand(a2 <= 189, __logand(input == 4, __logor(a7 == 12, a7 == 13)))), a5 == 4), a24 == 15))
  {
    a17 = (((((a17 % 71) + 177) * 9) / 10) + (-198267)) + 198271;
    a7 = 12;
    a24 = 13;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(input == 3, __logor(__logand(a5 == 7, __logand(a24 == 13, __logand(a7 == 13, a17 <= (-108)))), __logor(__logand(__logand(__logand(255 < a17, a7 == 14), a24 == 15), a5 == 6), __logand(a5 == 7, __logand(a24 == 13, __logand(a17 <= (-108), a7 == 12))))))))
  {
    a2 = ((((a2 % 45) + 235) - (-2)) - 281898) - (-281896);
    a17 = ((((a17 * 9) / 10) % 299946) - 300053) - 2;
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand(__logand(a5 == 6, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 1), __logand(111 < a17, 255 >= a17))), a2 <= 189), a24 == 15))
  {
    a2 = (((a2 + 0) % 45) - (-235)) + (-1);
    a7 = 13;
    a24 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(__logand(a24 == 14, __logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 4)), 255 < a17)), a2 <= 189))
  {
    a2 = ((((a2 - 0) % 45) + 236) + 67568) - 67569;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 15, __logand(input == 3, __logand(111 < a17, 255 >= a17))), a2 <= 189), a5 == 6), a7 == 12))
  {
    return 23;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(255 < a17, __logand(__logor(a7 == 13, a7 == 14), input == 2)))), a5 == 4))
  {
    a2 = ((a2 - 517350) / 5) + (-227328);
    a17 = (((a17 * 9) / 10) + (-544188)) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a5 == 5, __logand(__logor(a7 == 12, a7 == 13), input == 1)), a24 == 14), a2 <= 189), __logand(111 < a17, 255 >= a17)))
  {
    a2 = ((((a2 % 45) - (-236)) * 5) % 45) - (-234);
    a7 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(a7 == 13, a7 == 14), input == 1), a5 == 4)), 255 < a17)))
  {
    a17 = (((((a17 % 71) + 148) * 9) / 10) * 9) / 10;
    a7 = 14;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(input == 2, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 12), __logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))))), a5 == 4), a24 == 13)))
  {
    a2 = ((a2 - 478599) * 1) * 1;
    a17 = (((a17 / 5) / 5) / 5) + (-495670);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(input == 3, __logor(a7 == 12, a7 == 13)), a24 == 13), a5 == 3)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * (-5)) + (-578339)) + (-2272);
    a17 = (((a17 % 71) + 183) + 2) - 1;
    a7 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(input == 5, __logor(__logor(__logand(a24 == 14, __logand(255 < a17, a7 == 13)), __logand(a24 == 14, __logand(a7 == 14, 255 < a17))), __logand(__logand(a17 <= (-108), a7 == 12), a24 == 15))), a2 <= 189)))
  {
    a17 = ((((a17 * 9) / 10) % 109) - (-2)) + (-1);
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a17 <= (-108), __logand(__logand(__logand(input == 3, a24 == 13), a7 == 12), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = (((a2 + (-508787)) / 5) * 10) / 9;
    a17 = ((((a17 + 0) % 71) + 254) * 9) / 10;
    a24 = 15;
    return -1;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(__logand(a5 == 6, __logand(input == 5, __logor(a7 == 13, a7 == 14))), a24 == 14)), a2 <= 189))
  {
    a2 = (((((a2 % 45) + 236) - 1) / 5) * 51) / 10;
    a17 = (((a17 % 109) - (-32)) + (-26)) - (-40);
    a7 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(input == 3, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12))), __logand(189 < a2, 281 >= a2))), a5 == 3))
  {
    a17 = ((((a17 % 109) + 1) + 536699) + 4168) - 540865;
    a7 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(__logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(255 < a17, a7 == 12)), input == 1), __logand(189 < a2, 281 >= a2))), a5 == 3))
  {
    a2 = ((a2 * 5) / (-5)) - 131726;
    a17 = ((((a17 / 5) / 5) - 197914) % 109) + 43;
    a7 = 13;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a17 <= (-108), __logand(__logand(a5 == 6, __logand(__logor(a7 == 12, a7 == 13), input == 2)), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 + 123909) - 483346) - 41719;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(a24 == 14, __logand(input == 5, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 12), __logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17))))))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 - (-143250)) / (-5)) * 10) / 9;
    a17 = (((a17 % 71) + 183) / 5) + 104;
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(a7 == 12, __logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, input == 2))), a5 == 5)))
  {
    a2 = ((a2 + (-139817)) - 311967) / 5;
    a17 = ((a17 - 584030) / 5) / 5;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 6, __logand(__logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 12), __logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17)))), input == 4), a2 <= 189))))
  {
    a2 = ((((a2 * 9) / 10) % 45) - (-236)) + (-2);
    a17 = (((a17 % 71) + 183) + 2) + (-3);
    a7 = 14;
    return 21;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a24 == 15, __logand(a5 == 4, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 3), a2 <= 189)))))
  {
    a17 = (((a17 + (-240122)) * 10) / (-9)) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 6, __logand(a17 <= (-108), __logand(a24 == 14, __logand(__logor(a7 == 13, a7 == 14), input == 6))))))
  {
    a2 = ((((a2 % 45) - (-236)) - (-1)) - (-152243)) - 152245;
    a7 = 12;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(a24 == 13, __logand(__logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(a7 == 12, 255 < a17)), input == 4)), a2 <= 189)))
  {
    a2 = ((((a2 % 45) + 236) - (-249333)) - 625277) - (-375944);
    a17 = (((((a17 % 109) - (-1)) - 100) * 5) % 109) + 2;
    a7 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(255 < a17, a7 == 12), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17)))), input == 2), a5 == 6), a2 <= 189), a24 == 13))
  {
    a2 = ((((a2 % 45) - (-234)) + (-442292)) - (-617405)) - 175110;
    a17 = (((((a17 * 9) / 10) % 71) - (-115)) / 5) - (-197);
    a7 = 13;
    a24 = 14;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(__logand(a7 == 14, input == 4), a5 == 5), a24 == 14)), a17 <= (-108)))
  {
    a2 = (((a2 % 45) + 235) - 1) + 2;
    a17 = (((a17 % 109) + 8) - 7) - (-91);
    a7 = 13;
    a24 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(a24 == 14, __logand(input == 4, __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))))))), a5 == 7))
  {
    a17 = (((a17 - 363253) / 5) + (-406812)) + 479520;
    a7 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 6), a24 == 14), a5 == 5)), 255 < a17))
  {
    a17 = ((((a17 * 9) / 10) / 5) * 10) / (-4);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a5 == 7, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 5)), a2 <= 189), a24 == 15), __logand(111 < a17, 255 >= a17)))
  {
    a17 = (((a17 / 5) + (-515705)) * 10) / 9;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a17 <= (-108), __logand(a5 == 5, __logand(input == 2, a24 == 14))), a7 == 14), a2 <= 189))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 6, __logand(__logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 3), a24 == 14)))))
  {
    a2 = ((((a2 + 0) / 5) * 4) % 45) + 234;
    a7 = 12;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(__logand(input == 2, a2 <= 189), a7 == 12), a5 == 7)), 255 < a17))
  {
    a17 = (((a17 - 570713) - 29535) / 5) - 458064;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand(input == 3, __logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 13))), a2 <= 189)), a24 == 15))
  {
    a2 = (((((a2 * 9) / 10) * 1) - 13827) % 45) + 249;
    a17 = (((a17 % 109) + 1) - (-2)) + (-2);
    a7 = 14;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a2 <= 189, __logand(input == 4, __logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 13))))), a5 == 5))
  {
    a2 = ((((a2 % 45) - (-235)) - 195114) - 258356) - (-453470);
    a17 = ((((a17 + 155793) % 109) - 63) + 567392) - 567346;
    a7 = 13;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(a5 == 4, __logand(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 6))), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((a17 - (-528091)) - 699874) + 649609) + (-972756);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(255 < a17, __logand(a24 == 15, __logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 1), __logand(189 < a2, 281 >= a2)))), a5 == 3))
  {
    a2 = ((a2 / (-5)) - 163348) + 56585;
    a7 = 14;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 3, __logand(a24 == 15, __logand(input == 5, __logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14))))))))
  {
    a2 = ((a2 / (-5)) + (-568912)) + (-5609);
    a17 = ((((a17 % 71) + 184) + (-1)) / 5) - (-182);
    a7 = 12;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(__logand(input == 1, __logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12))), a5 == 4), __logand(189 < a2, 281 >= a2))))
  {
    a2 = (((a2 - 161488) * 3) + 590787) + (-671028);
    a17 = (((a17 - 600109) + 22162) + (-18521)) - 3641;
    a7 = 12;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(a24 == 14, __logand(__logand(input == 3, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), a2 <= 189)), 255 < a17)))
  {
    a7 = 14;
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 6, __logor(__logand(255 < a17, a7 == 12), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)))), a24 == 14), __logand(189 < a2, 281 >= a2)), a5 == 4))
  {
    a2 = ((a2 - 579407) - 8118) * 1;
    a17 = ((((a17 % 109) + 3) + (-458073)) + 848155) + (-390111);
    a7 = 13;
    a24 = 15;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(__logor(__logor(__logand(__logand(__logand(a7 == 14, 255 < a17), a24 == 15), a5 == 4), __logand(__logand(__logand(a7 == 12, a17 <= (-108)), a24 == 13), a5 == 5)), __logand(__logand(__logand(a17 <= (-108), a7 == 13), a24 == 13), a5 == 5)), input == 5), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((a17 % 299872) - (-300127)) - (-1)) + 0;
    a7 = 14;
    a24 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(a2 <= 189, input == 5)), a24 == 13), a7 == 13)))
  {
    a17 = ((a17 + (-452489)) * 1) * 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(a5 == 7, __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 4))), a24 == 13))
  {
    a17 = (((a17 % 109) - (-1)) / 5) / 5;
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 6), a5 == 5)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 / 5) + (-341809)) * 10) / 9;
    a17 = ((((a17 % 299872) - (-300127)) - 515739) + 17318) - (-498422);
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 15, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 3), a2 <= 189)), a5 == 7), __logand((-108) < a17, 111 >= a17)))
  {
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(a7 == 12, __logand(__logand(a2 <= 189, __logand(__logand(input == 5, a5 == 4), a24 == 15)), __logand((-108) < a17, 111 >= a17))))
  {
    a17 = ((a17 - 277016) * 2) + (-6397);
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(__logor(__logand(a24 == 15, __logand(a17 <= (-108), a7 == 12)), __logor(__logand(a24 == 14, __logand(a7 == 13, 255 < a17)), __logand(a24 == 14, __logand(255 < a17, a7 == 14)))), input == 1), a2 <= 189)))
  {
    a17 = (((a17 % 299872) - (-300127)) + 1) + 0;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(a5 == 5, __logand(a24 == 15, __logand(input == 5, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))))), __logand(189 < a2, 281 >= a2))))
  {
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(__logor(__logand(a24 == 14, __logand(a17 <= (-108), a7 == 13)), __logor(__logand(a24 == 13, __logand(a7 == 14, 255 < a17)), __logand(a24 == 14, __logand(a7 == 12, a17 <= (-108))))), input == 4), a2 <= 189)))
  {
    a17 = (((a17 + 0) - 0) / 5) + (-383300);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17)))), input == 5), a24 == 15), a5 == 3), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - 219315) + (-185024)) / 5;
    a17 = (((a17 + (-245709)) % 71) - (-191)) * 1;
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(a24 == 13, __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 2))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * (-5)) / 5) + (-556465);
    a17 = ((a17 / 5) + (-548457)) + (-1247);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(__logand(__logand(input == 5, a5 == 7), a2 <= 189), 255 < a17), a7 == 12)))
  {
    a17 = (((((a17 * 9) / 10) * 1) - 509339) % 71) + 183;
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(__logand(input == 2, __logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17)))), a2 <= 189)), a24 == 13))
  {
    a2 = (((((a2 % 45) + 236) * 5) - (-150446)) % 45) - (-205);
    a17 = (((a17 + (-490890)) / 5) + (-314798)) + 884206;
    a7 = 14;
    a24 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(255 < a17, __logand(__logand(a2 <= 189, __logand(a24 == 15, input == 6)), a5 == 5)), a7 == 14))
  {
    a2 = ((((a2 * 9) / 10) % 45) - (-234)) + 2;
    a17 = ((((a17 / 5) + 157023) - 304246) % 109) + 90;
    a7 = 13;
    a24 = 14;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a5 == 6, __logand(__logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 2)), a2 <= 189), a24 == 13))
  {
    a17 = (((a17 % 299946) - 300053) * 1) - 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(a5 == 6, __logand(__logand(__logand(input == 2, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))), a2 <= 189), a24 == 14))))
  {
    a2 = ((((a2 + 0) * 9) / 10) % 45) - (-236);
    a17 = (((a17 + (-217095)) - (-761433)) * (-1)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(a7 == 14, __logand(__logand(input == 1, __logand(111 < a17, 255 >= a17)), a5 == 5)), a24 == 14)))
  {
    a2 = (((a2 % 45) - (-234)) - 10732) - (-10732);
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a17 <= (-108), __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 3, input == 1)), a7 == 12), a24 == 13)))
  {
    a2 = ((a2 + (-187375)) * 3) - (-239890);
    a17 = (((((a17 % 71) - (-216)) * 9) / 10) * 10) / 9;
    a7 = 13;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(a7 == 12, 255 < a17)), input == 1), a5 == 5), a24 == 14), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((a17 - 309533) % 299872) - (-300127)) * 1;
    a7 = 14;
    a24 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 4), a24 == 13)), a5 == 3))
  {
    a2 = ((a2 / 5) / 5) + (-113113);
    a17 = (((a17 + (-152498)) - 120570) * 10) / 9;
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 3, __logand(__logor(__logor(__logand(__logand(255 < a17, a7 == 13), a24 == 13), __logand(__logand(255 < a17, a7 == 14), a24 == 13)), __logand(__logand(a7 == 12, a17 <= (-108)), a24 == 14)), input == 4))))
  {
    a2 = ((a2 + (-277502)) * 2) - 40398;
    a17 = (((a17 + 0) / 5) + 23146) - 484422;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 4, __logor(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(a7 == 12, 255 < a17)))))))
  {
    a2 = ((a2 / 5) / (-5)) - 183721;
    a17 = (((a17 % 109) + (-83)) + (-12)) + 78;
    a7 = 13;
    a24 = 14;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 3, __logor(__logand(255 < a17, a7 == 12), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))))), a24 == 13), a5 == 6), a2 <= 189))
  {
    a2 = (((a2 + 0) % 45) - (-234)) * 1;
    a17 = ((((a17 * 9) / 10) * 1) % 71) - (-138);
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 4, __logand(__logand(input == 5, __logor(a7 == 12, a7 == 13)), __logand(111 < a17, 255 >= a17))))))
  {
    a7 = 13;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 4, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 12), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a7 == 14, a17 <= (-108)))))), a24 == 13)))
  {
    a2 = ((a2 * 5) * 5) + (-590870);
    a17 = (((a17 + 439473) + (-202777)) % 299946) + (-300053);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(255 < a17, __logand(a5 == 5, __logand(input == 3, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)))), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 - (-345840)) * 1) * (-1);
    a17 = (((a17 % 109) - 50) - 15) / 5;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(input == 2, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), a5 == 7)), a24 == 15)))
  {
    a17 = (((a17 / 5) + (-289356)) * 10) / 9;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(a24 == 13, __logand(__logand(__logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14))), input == 6), __logand(189 < a2, 281 >= a2)))))
  {
    a17 = ((((a17 % 299872) - (-300127)) / 5) / 5) - (-212547);
    a7 = 14;
    a24 = 14;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a2 <= 189, __logand(a24 == 15, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 6), a5 == 6)))))
  {
    a2 = (((a2 % 45) + 234) / 5) - (-178);
    a7 = 14;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(__logand(a24 == 15, input == 2), __logand(189 < a2, 281 >= a2)), a5 == 4), a7 == 13)))
  {
    a2 = ((a2 + (-185317)) * 3) * 1;
    a17 = ((a17 - (-209383)) / 5) + (-402688);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 4, __logand(a24 == 13, __logand(input == 4, a17 <= (-108)))), a7 == 12), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 + (-340540)) + (-216382)) - (-1035898)) * (-1);
    a17 = (((a17 % 299872) - (-300127)) - 43079) + 207436;
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 3, __logand(__logand(input == 1, __logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12))), a24 == 14))))
  {
    a2 = ((a2 * 5) * 5) - 195095;
    a17 = (((((a17 * 9) / 10) * 1) * 1) % 109) + 2;
    a7 = 13;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(a7 == 12, a7 == 13), input == 4), a17 <= (-108))), a24 == 14)))
  {
    a7 = 12;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(111 < a17, 255 >= a17), __logand(a7 == 12, __logand(a5 == 4, __logand(a24 == 15, input == 4))))))
  {
    a17 = (((a17 * 5) * 5) * 10) / (-9);
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(a7 == 13, __logand(input == 6, a5 == 3))), a24 == 15)))
  {
    a2 = ((a2 + 505188) / 5) - 263894;
    a17 = ((((a17 % 71) - (-182)) + 569253) * 1) + (-569250);
    a7 = 12;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(input == 6, __logor(__logor(__logand(__logand(__logand(a7 == 14, 255 < a17), a24 == 15), a5 == 6), __logand(__logand(__logand(a7 == 12, a17 <= (-108)), a24 == 13), a5 == 7)), __logand(__logand(a24 == 13, __logand(a17 <= (-108), a7 == 13)), a5 == 7)))))
  {
    a2 = ((((a2 % 45) - (-236)) + (-2)) / 5) - (-177);
    a17 = (((a17 % 299872) - (-300127)) / 5) - (-33046);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 6, __logor(a7 == 13, a7 == 14)), a24 == 14)), 255 < a17), a5 == 4))
  {
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(a24 == 15, __logand(__logand(a7 == 13, __logand(input == 6, a17 <= (-108))), a2 <= 189))))
  {
    a2 = ((((a2 % 45) - (-235)) + 573332) * 1) + (-573331);
    a17 = (((a17 % 109) - (-40)) - 575414) + 575451;
    a7 = 14;
    a24 = 13;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(a24 == 15, __logand(a5 == 4, __logand(__logand(__logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), __logand(__logand(111 < a17, 255 >= a17), a7 == 13)), input == 4), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 * 5) + (-205527)) + (-261072);
    a17 = (((a17 * 5) + 376065) % 71) + 172;
    a7 = 12;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logor(__logor(__logand(__logand(255 < a17, a7 == 13), a24 == 13), __logand(__logand(a7 == 14, 255 < a17), a24 == 13)), __logand(a24 == 14, __logand(a17 <= (-108), a7 == 12))), input == 1)), a5 == 6))
  {
    a2 = (((a2 % 45) - (-235)) / 5) * 5;
    a17 = ((((a17 * 9) / 10) % 299946) - 300053) - 1;
    a7 = 12;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a7 == 14, __logand(a24 == 15, __logand(__logand(__logand(input == 6, __logand(111 < a17, 255 >= a17)), __logand(189 < a2, 281 >= a2)), a5 == 3))))
  {
    a17 = ((a17 + (-508114)) * 1) - 7160;
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand(a2 <= 189, __logand(input == 5, a7 == 14)), 255 < a17)), a24 == 15))
  {
    a2 = (((a2 - 0) / 5) % 45) - (-236);
    a17 = ((a17 - 600247) * 1) * 1;
    a7 = 12;
    a24 = 14;
    return 21;
  }
  else
    if (__logand(__logand(__logand(a24 == 13, __logand(input == 6, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))))), __logand(189 < a2, 281 >= a2)), a5 == 6))
  {
    a17 = ((((a17 / 5) - (-11)) * 5) % 109) + 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a5 == 4, __logand(input == 3, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))))))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 - 251250) * 10) / 9) + (-123956);
    a17 = (((a17 + (-55926)) + (-49743)) * 10) / 9;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a7 == 13, __logand(a5 == 6, __logand(__logand(__logand(input == 2, 255 < a17), __logand(189 < a2, 281 >= a2)), a24 == 13))))
  {
    a2 = (((a2 + (-73789)) * 10) / 9) - 475570;
    a17 = ((a17 + (-600188)) - 1) + (-26);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 4), a2 <= 189), a24 == 15), a5 == 4)))
  {
    a7 = 13;
    a5 = 5;
    return 21;
  }




























































































































































































































  return calculate_output3(input);
}

int calculate_output3(int input)
{
  if (__logand(a2 <= 189, __logand(a24 == 15, __logand(a7 == 14, __logand(a5 == 5, __logand(a17 <= (-108), input == 2))))))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(input == 3, __logor(a7 == 13, a7 == 14))))), a5 == 5))
  {
    a2 = ((a2 / 5) * (-5)) / 5;
    a17 = (((a17 + 77227) + 218385) - 579561) - (-466982);
    a7 = 12;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(a2 <= 189, __logand(a7 == 14, __logand(a24 == 13, input == 4)))), __logand(111 < a17, 255 >= a17)))
  {
    a17 = (((a17 + (-361852)) * 1) / 5) - (-72429);
    a7 = 13;
    a24 = 14;
    a5 = 7;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(a7 == 13, __logand(a5 == 3, input == 3)), a24 == 15), __logand((-108) < a17, 111 >= a17))))
  {
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 13)), input == 1), a2 <= 189), a5 == 7), a24 == 13))
  {
    a2 = (((a2 - (-278577)) * 1) % 45) - (-234);
    a17 = (((a17 / 5) % 109) - (-2)) - 1;
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(a24 == 13, __logand(__logand(a5 == 3, __logand(input == 2, __logor(a7 == 12, a7 == 13))), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 + 542429) / (-5)) + (-452431);
    a17 = ((((a17 + (-62715)) % 71) - (-200)) * 9) / 10;
    a7 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 5), a24 == 14)), __logand(111 < a17, 255 >= a17)), a2 <= 189))
  {
    a17 = (((a17 * 5) / 5) * 10) / (-9);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(255 < a17, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(a7 == 13, a7 == 14), input == 1), a5 == 4)))))
  {
    a2 = (((a2 + (-345206)) - (-753451)) / 5) * (-5);
    a17 = (((a17 % 109) - 98) - 8) + 96;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(__logand(a24 == 14, __logand(a5 == 5, __logand(input == 1, __logor(a7 == 13, a7 == 14)))), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 * 5) + 150678) + (-312416);
    a17 = ((((a17 + 0) + 0) / 5) % 71) + 147;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 2, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), 255 < a17), __logand(189 < a2, 281 >= a2)), a24 == 13), a5 == 5))
  {
    a2 = ((a2 + (-439935)) * 1) * 1;
    a17 = ((a17 - 581561) + (-18563)) - 36;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(input == 2, __logor(__logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), __logand(a7 == 13, __logand(111 < a17, 255 >= a17)))), a5 == 7)), a24 == 14))
  {
    a17 = ((a17 - 547158) * 1) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(a24 == 14, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 2, __logor(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17)), __logand(255 < a17, a7 == 13)))))))
  {
    a2 = ((a2 * (-5)) * 5) - 267645;
    a17 = (((((a17 * 9) / 10) % 71) + 146) - 7467) - (-7498);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand(a2 <= 189, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 5)), a24 == 14)), 255 < a17))
  {
    a17 = ((a17 + (-600255)) + (-1)) + 0;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 5, a7 == 14)), a17 <= (-108))), a24 == 13))
  {
    a17 = (((((a17 % 109) - (-39)) * 5) - 208544) % 109) + 56;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a7 == 14, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(a17 <= (-108), input == 3), a24 == 13), a5 == 6))))
  {
    a2 = ((a2 + (-369894)) + (-119659)) - 59892;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a7 == 14, __logand(__logand(a5 == 5, __logand(input == 1, a24 == 13)), __logand(111 < a17, 255 >= a17))), a2 <= 189))
  {
    a17 = ((((a17 * 10) / (-9)) - (-538584)) * 1) - 852442;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(__logand(input == 3, __logor(a7 == 12, a7 == 13)), a5 == 6), 255 < a17)), a24 == 15))
  {
    a2 = (((a2 - 0) % 45) + 235) + 1;
    a17 = (((a17 - 0) % 109) - 13) - (-1);
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12)), input == 2))), a5 == 4))
  {
    a2 = ((a2 * 5) / (-5)) * 5;
    a17 = ((a17 + (-600110)) * 1) + (-1);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logand(a24 == 14, __logand(255 < a17, a7 == 14)), __logand(a24 == 15, __logand(a17 <= (-108), a7 == 12))), input == 5), a5 == 3)))
  {
    a2 = ((a2 * (-5)) - 176348) - 175983;
    a17 = (((a17 % 71) - (-182)) + 3) - 3;
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 3, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), 255 < a17), a2 <= 189), a24 == 14), a5 == 5))
  {
    a2 = ((((a2 + 252809) % 45) + 234) - (-188524)) + (-188523);
    a17 = (((((a17 / 5) % 109) + 1) * 5) % 109) + 3;
    a7 = 14;
    a24 = 13;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 14, __logand(__logand((-108) < a17, 111 >= a17), __logand(a7 == 13, __logand(input == 3, a5 == 7))))))
  {
    a17 = ((a17 - 479950) * 1) / 5;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), input == 1), a2 <= 189), a5 == 5), a24 == 13))
  {
    a17 = (((a17 - (-331363)) % 109) - (-1)) + 0;
    a7 = 12;
    a24 = 14;
    a5 = 6;
    return 21;
  }
  else
    if (__logand(__logand(255 < a17, __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(input == 4, __logor(__logor(a7 == 12, a7 == 13), a7 == 14))), a24 == 15)), a5 == 3))
  {
    a2 = (((a2 * 5) / 5) - (-456557)) * (-1);
    a17 = ((a17 / 5) * 4) + (-534343);
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(input == 2, __logor(__logand(a17 <= (-108), a7 == 14), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12))), a2 <= 189)), a5 == 6))
  {
    a17 = (((a17 % 299946) - 300053) / 5) + (-177770);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(a24 == 15, __logand(__logand(input == 4, __logor(a7 == 13, a7 == 14)), a5 == 7)), 255 < a17)))
  {
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 4, __logor(__logand(__logand(255 < a17, a7 == 14), a24 == 14), __logand(a24 == 15, __logand(a17 <= (-108), a7 == 12)))))))
  {
    a17 = ((((a17 % 299872) + 300127) + 0) + (-528429)) + 528430;
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(a5 == 4, __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 1))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 + (-412962)) - 162289) + (-93);
    a17 = (((a17 + 200708) / 5) - (-224575)) + (-264525);
    a7 = 13;
    a24 = 15;
    return 21;
  }
  else
    if (__logand(255 < a17, __logand(a5 == 4, __logand(__logand(__logand(a7 == 13, input == 2), __logand(189 < a2, 281 >= a2)), a24 == 15))))
  {
    a2 = (((a2 + 17174) - (-390384)) * 1) * (-1);
    a17 = ((a17 + (-200385)) - 399757) + (-108);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a5 == 5, __logand(input == 3, __logor(a7 == 14, __logor(a7 == 12, a7 == 13)))), a24 == 15), __logand(189 < a2, 281 >= a2)), __logand(111 < a17, 255 >= a17)))
  {
    a2 = ((a2 / 5) / 5) * 5;
    a7 = 14;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(a2 <= 189, __logand(a5 == 6, __logand(__logand(input == 1, __logor(a7 == 13, a7 == 14)), __logand((-108) < a17, 111 >= a17))))))
  {
    a2 = (((a2 % 45) - (-236)) + 1) - 2;
    a17 = (((a17 * 5) % 71) - (-183)) + (-1);
    a7 = 14;
    a24 = 14;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(input == 5, __logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a2 <= 189)), a5 == 6))
  {
    a2 = (((a2 % 45) + 235) - 1) + 1;
    a17 = (((a17 - 0) % 299872) - (-300127)) * 1;
    a7 = 13;
    a24 = 15;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 14, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 1)), a2 <= 189), a5 == 5), __logand((-108) < a17, 111 >= a17)))
  {
    a2 = (((a2 % 45) + 234) + 293810) + (-293808);
    a7 = 12;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a24 == 15, input == 1), a5 == 4), a7 == 12), __logand(111 < a17, 255 >= a17)), a2 <= 189))
  {
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a5 == 5, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(input == 5, __logor(a7 == 12, a7 == 13)), a2 <= 189), a24 == 15))))
  {
    a2 = ((((a2 % 45) + 236) - 49315) / 5) + 10068;
    a17 = ((a17 + (-103117)) / 5) - 439137;
    a7 = 13;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 13, __logand(a5 == 4, __logand(__logand(111 < a17, 255 >= a17), __logand(input == 3, __logor(a7 == 12, a7 == 13)))))))
  {
    a2 = (((a2 * (-5)) - 314138) - (-565933)) + (-292419);
    a17 = ((a17 + (-173172)) + (-177178)) * 1;
    a7 = 13;
    a24 = 15;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(__logor(__logand(__logand(a17 <= (-108), a7 == 12), a24 == 14), __logor(__logand(a24 == 13, __logand(255 < a17, a7 == 13)), __logand(a24 == 13, __logand(255 < a17, a7 == 14)))), input == 2)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 + (-532738)) + (-47238)) * 1;
    a17 = ((((a17 + 0) * 9) / 10) % 71) - (-182);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(a5 == 6, __logand(a24 == 13, __logand(__logand(input == 4, __logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a2 <= 189))))
  {
    a17 = (((a17 - (-565469)) + (-60299)) / 5) - 520148;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(255 < a17, __logand(input == 3, a7 == 13)), a24 == 13), a5 == 6), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 / (-5)) - 310362) - 118239;
    a17 = (((a17 + (-527475)) + (-43049)) / 5) + (-159294);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(a5 == 4, __logand(input == 1, __logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((((a2 * (-5)) * 10) / 9) - (-320944)) * (-1);
    a17 = ((((a17 * 9) / 10) + 31872) % 71) + 182;
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 15, __logand(a17 <= (-108), __logand(__logand(a7 == 13, input == 4), a5 == 6)))))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 5, __logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a24 == 14), a5 == 5), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * 5) - 436847) + (-130272);
    a17 = ((a17 / 5) - 469094) - (-33679);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 4, __logand(255 < a17, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 3, __logor(a7 == 13, a7 == 14))))), a24 == 14))
  {
    a17 = ((((a17 / 5) * 4) - (-51204)) % 71) + 129;
    a7 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a2 <= 189, __logand(a7 == 12, input == 1)), a5 == 7), 255 < a17), a24 == 15))
  {
    a17 = (((a17 - 204408) - (-50146)) % 109) - (-2);
    a7 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 15, __logand(a5 == 5, __logand(a17 <= (-108), __logand(a7 == 14, input == 3))))))
  {
    a2 = ((((a2 % 45) + 236) * 5) % 45) + 204;
    a17 = ((((a17 + 0) * 9) / 10) % 109) + 90;
    a7 = 12;
    a24 = 14;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(__logand(a5 == 6, __logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 5)), a24 == 15), a2 <= 189))
  {
    a17 = (((a17 % 71) + 184) - 1) - 1;
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return 26;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(__logor(__logand(255 < a17, a7 == 13), __logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12))), input == 1))), a5 == 3))
  {
    a17 = ((((a17 * 9) / 10) % 109) - (-2)) + 1;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(a2 <= 189, __logand(a7 == 14, __logand(__logand(input == 2, __logand(111 < a17, 255 >= a17)), a5 == 5)))))
  {
    a17 = (((a17 - 501351) * 10) / 9) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a7 == 13, __logand(__logand(__logand(__logand(input == 5, a5 == 7), a24 == 14), __logand((-108) < a17, 111 >= a17)), a2 <= 189)))
  {
    a17 = ((a17 + (-506871)) + (-84379)) / 5;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(input == 2, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12))), a5 == 3), a24 == 13)))
  {
    a2 = ((a2 / 5) * 5) - 539865;
    a17 = ((a17 + (-583438)) - 9976) - 606;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(input == 5, a2 <= 189)), a7 == 14), a5 == 5), a24 == 14))
  {
    a17 = (((a17 / 5) + 148886) * 10) / (-9);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(__logand(__logand(255 < a17, input == 1), a24 == 13), a2 <= 189), a7 == 13)))
  {
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logand(189 < a2, 281 >= a2), input == 4), a7 == 13)), a24 == 14), a5 == 3))
  {
    a17 = (((a17 / 5) - 84) * 10) / 9;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 15, __logand(input == 6, __logand(111 < a17, 255 >= a17))), a5 == 5), a7 == 14), a2 <= 189))
  {
    a2 = ((((a2 % 45) - (-234)) + 3) - 467950) - (-467949);
    a17 = (((a17 * 23) / 10) - (-254710)) + 246366;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(__logor(__logor(__logand(a5 == 4, __logand(a24 == 15, __logand(a7 == 14, 255 < a17))), __logand(__logand(__logand(a17 <= (-108), a7 == 12), a24 == 13), a5 == 5)), __logand(a5 == 5, __logand(__logand(a7 == 13, a17 <= (-108)), a24 == 13))), input == 4), a2 <= 189))
  {
    a17 = (((a17 + 0) + 0) % 299946) + (-300053);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logand(111 < a17, 255 >= a17), input == 6), a7 == 13), a2 <= 189), a24 == 13), a5 == 5))
  {
    a17 = ((a17 * 5) + 157598) / 5;
    a7 = 14;
    a5 = 7;
    return 21;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 7, __logand(__logor(__logand(__logand(255 < a17, a7 == 14), a24 == 13), __logand(a24 == 14, __logand(a17 <= (-108), a7 == 12))), input == 3))))
  {
    a17 = (((a17 + 0) + 0) % 299872) + 300127;
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 6, __logand(__logor(__logand(__logand(a7 == 12, a17 <= (-108)), a24 == 14), __logor(__logand(a24 == 13, __logand(255 < a17, a7 == 13)), __logand(__logand(255 < a17, a7 == 14), a24 == 13))), input == 2))))
  {
    a2 = ((((a2 + 453687) % 45) - (-236)) - (-350177)) + (-350178);
    a17 = ((((a17 % 71) + 182) + 0) - (-438904)) - 438902;
    a7 = 12;
    a24 = 14;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(a7 == 13, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), input == 3), a24 == 14), a5 == 3))))
  {
    a2 = ((a2 / 5) / (-5)) * 5;
    a17 = ((a17 * 5) - (-273749)) - 586768;
    a7 = 14;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(a2 <= 189, __logand(input == 3, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12))))), a24 == 14)))
  {
    a17 = ((((a17 - 515132) / 5) + 523785) * (-1)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 2)), __logand(189 < a2, 281 >= a2)), a24 == 13))
  {
    a2 = ((a2 * 5) + 144469) + (-189230);
    a17 = ((((a17 + 0) % 299946) - 300053) / 5) + (-445482);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(__logand(__logand(189 < a2, 281 >= a2), input == 4), __logand((-108) < a17, 111 >= a17))), a24 == 15), a7 == 12))
  {
    a2 = ((a2 * 5) / (-5)) * 5;
    a17 = (((((a17 * 5) % 71) + 184) * 5) % 71) - (-152);
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(input == 2, a24 == 15)))), a7 == 13))
  {
    a17 = ((a17 - (-116942)) * 5) * 1;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(a24 == 13, __logand(__logand(111 < a17, 255 >= a17), __logand(a2 <= 189, __logand(a7 == 13, input == 4))))))
  {
    a17 = ((a17 * 5) - 554850) + (-19327);
    a24 = 14;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 4), a24 == 15), a2 <= 189)), a5 == 7))
  {
    a17 = ((a17 / 5) + (-465987)) + (-123095);
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 13, __logand(__logor(a7 == 13, a7 == 14), input == 3)), __logand((-108) < a17, 111 >= a17)), a5 == 4), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((a17 % 71) + 183) - 106273) - (-106273);
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 13, __logand(__logand((-108) < a17, 111 >= a17), __logand(__logor(a7 == 12, a7 == 13), input == 5))), a5 == 3)))
  {
    a2 = (((a2 * (-5)) * 5) + 590510) - 671065;
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(a5 == 5, __logand(__logand(input == 6, a24 == 14), a7 == 14))), a2 <= 189))
  {
    a17 = (((a17 * 5) * 10) / (-9)) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logor(__logand(__logand(a17 <= (-108), a7 == 12), a24 == 15), __logor(__logand(__logand(255 < a17, a7 == 13), a24 == 14), __logand(a24 == 14, __logand(255 < a17, a7 == 14)))), input == 6), a2 <= 189), a5 == 7))
  {
    a17 = ((a17 / 5) - 232817) * 1;
    a7 = 12;
    a24 = 15;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logand(input == 6, __logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a5 == 6)), a24 == 15))
  {
    a17 = ((((a17 % 299946) + (-300053)) + 0) / 5) + (-24082);
    a7 = 14;
    return 23;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(__logand(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(255 < a17, a7 == 12)), input == 1), a5 == 7)), a2 <= 189))
  {
    a17 = ((((a17 % 299872) - (-256)) * 1) / 5) - (-44806);
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(__logand(a2 <= 189, __logand(input == 1, __logor(__logor(a7 == 12, a7 == 13), a7 == 14))), a5 == 6), 255 < a17)))
  {
    a2 = (((((a2 / 5) % 45) + 235) / 5) * 51) / 10;
    a17 = (((((a17 / 5) % 109) + 2) * 5) % 109) + (-3);
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(a5 == 6, __logand(__logor(a7 == 13, a7 == 14), input == 4))), __logand((-108) < a17, 111 >= a17)), a24 == 15))
  {
    a2 = (((a2 + 216043) % 45) + 236) - (-1);
    a17 = ((((a17 - 429059) + 308928) * 4) % 71) - (-208);
    a7 = 14;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 15), a5 == 6))
  {
    a17 = ((a17 + (-54487)) - 92979) - 379120;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 6, __logand(__logor(a7 == 12, a7 == 13), input == 1))), a24 == 13)))
  {
    a2 = ((a2 - 455132) - 98197) + (-25953);
    a17 = ((a17 + 255777) * 2) + (-670603);
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(a5 == 3, __logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 6))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 + (-585771)) + (-2935)) * 1;
    a17 = ((((a17 * 9) / 10) / 5) % 109) - (-1);
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(a24 == 15, __logand(a2 <= 189, __logand(__logor(a7 == 12, a7 == 13), input == 4))), __logand((-108) < a17, 111 >= a17))))
  {
    a2 = (((((a2 - 0) + 0) * 9) / 10) % 45) - (-234);
    a17 = (((a17 % 71) - (-184)) - 1) + 1;
    a7 = 14;
    a24 = 14;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(__logand(input == 6, __logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a24 == 14)), __logand(189 < a2, 281 >= a2)))
  {
    a17 = (((((a17 * 9) / 10) / 5) - 287459) % 109) - (-2);
    a7 = 12;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(a24 == 15, __logand(__logand(189 < a2, 281 >= a2), __logand(a7 == 14, input == 2)))), a5 == 3))
  {
    return 26;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(a24 == 13, __logand(input == 3, __logand((-108) < a17, 111 >= a17)))), a5 == 5), a7 == 14))
  {
    a17 = (((a17 / 5) * 5) / 5) - (-181132);
    a7 = 13;
    a24 = 15;
    a5 = 6;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 2), __logand((-108) < a17, 111 >= a17)), a24 == 15), a5 == 7)))
  {
    a17 = ((a17 - 261314) + 71142) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(255 < a17, __logand(__logand(a24 == 13, __logand(input == 2, __logor(a7 == 13, a7 == 14))), a5 == 4)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * 5) + (-450773)) - 107216;
    a17 = (((((a17 % 71) + 158) - 39) / 5) * 49) / 10;
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(__logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a7 == 14, a17 <= (-108))), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 4)), a5 == 7), a24 == 14))
  {
    a17 = ((((a17 * 9) / 10) % 109) - (-1)) + 0;
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(__logand(a5 == 4, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 4))), a24 == 15), a17 <= (-108)))
  {
    a17 = ((((a17 % 71) - (-182)) + 0) / 5) - (-96);
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 6, __logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 5), a24 == 15), 255 < a17))))
  {
    a2 = (((a2 % 45) - (-236)) + 127994) - 127995;
    a17 = ((((a17 - 156755) * 1) * 1) % 109) - (-2);
    a7 = 13;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(a5 == 6, __logand(input == 3, __logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)))), __logand(189 < a2, 281 >= a2))))
  {
    a17 = ((((a17 / 5) * 5) + (-36231)) * (-1)) / 10;
    a7 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 6), a24 == 15), a2 <= 189), a5 == 7))
  {
    a17 = ((((a17 + 0) / 5) + 400868) % 109) + (-80);
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(__logand(input == 3, __logor(a7 == 12, a7 == 13)), 255 < a17), a5 == 5)), a2 <= 189))
  {
    a17 = ((a17 - 600131) - 103) + (-13);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a5 == 5, __logand(__logand(input == 5, __logor(__logand(a7 == 12, __logand(111 < a17, 255 >= a17)), __logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17))))), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = (((a2 + 363060) - 21984) + (-307797)) * (-5);
    a17 = (((a17 / 5) / 5) - (-385642)) - 385582;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(a2 <= 189, __logand(a24 == 15, __logand(input == 4, __logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)))))))
  {
    a17 = (((a17 - 0) % 299872) - (-300127)) + 1;
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logor(__logand(a5 == 5, __logand(a24 == 13, __logand(a7 == 13, a17 <= (-108)))), __logor(__logand(a5 == 4, __logand(__logand(255 < a17, a7 == 14), a24 == 15)), __logand(__logand(__logand(a7 == 12, a17 <= (-108)), a24 == 13), a5 == 5))), input == 3), a2 <= 189))
  {
    a17 = ((a17 / 5) - (-222886)) * 1;
    a7 = 14;
    a24 = 13;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(__logand(a5 == 6, __logand(__logand(__logand(input == 1, __logor(a7 == 13, a7 == 14)), a2 <= 189), a24 == 14)), a17 <= (-108)))
  {
    a2 = (((((a2 % 45) + 235) + (-1)) * 5) % 45) - (-223);
    a17 = (((a17 % 109) + 16) + (-191467)) - (-191547);
    a7 = 12;
    a24 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(input == 1, a24 == 14), a7 == 13))), a5 == 4))
  {
    a2 = ((a2 * 5) * 5) - 342077;
    a17 = (((a17 * 5) / 5) % 71) + 184;
    a24 = 15;
    return 21;
  }
  else
    if (__logand(a5 == 5, __logand(a2 <= 189, __logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logor(a7 == 12, a7 == 13), input == 4)), a24 == 14))))
  {
    a2 = (((a2 + 110417) % 45) - (-236)) * 1;
    a17 = (((a17 * 5) * 10) / (-9)) - 228824;
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(a2 <= 189, __logand(input == 1, __logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(a7 == 14, __logand((-108) < a17, 111 >= a17))), __logand(a7 == 12, __logand(111 < a17, 255 >= a17)))))), a5 == 6))
  {
    a2 = ((((a2 % 45) + 234) / 5) - (-431906)) + (-431702);
    a17 = ((((a17 + (-434179)) % 109) + 30) + 138172) + (-138140);
    a7 = 14;
    return 26;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(a2 <= 189, __logand(__logand(a24 == 13, input == 5), a5 == 5)), a7 == 14)))
  {
    a17 = ((a17 + 592041) * 1) - (-2226);
    a7 = 12;
    a24 = 14;
    a5 = 7;
    return 26;
  }
  else
    if (__logand(__logand(__logand(a24 == 13, __logand(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), input == 5)), a5 == 7), a2 <= 189))
  {
    a17 = ((((a17 % 71) + 182) / 5) * 51) / 10;
    a7 = 12;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(a5 == 4, __logand(__logand((-108) < a17, 111 >= a17), input == 5)), a7 == 12)), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 / 5) / (-5)) * 5;
    a17 = ((a17 - (-517716)) / 5) * 5;
    a7 = 13;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(a24 == 13, __logand(a2 <= 189, __logand(input == 3, __logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))))))))
  {
    a17 = (((a17 % 299946) + (-300053)) - 1) - 1;
    a7 = 12;
    a24 = 15;
    a5 = 6;
    return 26;
  }
  else
    if (__logand(a2 <= 189, __logand(__logor(__logand(a5 == 7, __logand(__logand(a7 == 13, a17 <= (-108)), a24 == 13)), __logor(__logand(a5 == 6, __logand(a24 == 15, __logand(255 < a17, a7 == 14))), __logand(a5 == 7, __logand(a24 == 13, __logand(a7 == 12, a17 <= (-108)))))), input == 5)))
  {
    a2 = (((a2 - (-71451)) % 45) - (-236)) + (-1);
    a17 = ((((a17 * 9) / 10) % 109) - (-2)) + (-1);
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logand(__logand(255 < a17, a7 == 14), a24 == 14), __logand(__logand(a17 <= (-108), a7 == 12), a24 == 15)), input == 2), a5 == 3)))
  {
    a2 = ((a2 * 5) - 448501) * 1;
    a17 = ((((a17 % 71) - (-182)) / 5) / 5) + 165;
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 14), __logand(255 < a17, a7 == 12)), input == 3), a2 <= 189), a5 == 7), a24 == 14))
  {
    a17 = (((a17 % 299872) + 256) - (-48274)) + 28236;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(255 < a17, __logand(input == 4, __logor(a7 == 14, __logor(a7 == 12, a7 == 13)))), a5 == 5), a24 == 13), __logand(189 < a2, 281 >= a2)))
  {
    a17 = ((a17 - 0) - 595306) - 4802;
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(__logand(input == 5, a24 == 13), a5 == 4), a7 == 12), a17 <= (-108))))
  {
    a2 = ((a2 / (-5)) / 5) - 315470;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(__logand(input == 4, __logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))), a5 == 6), a2 <= 189)))
  {
    a17 = (((a17 - (-17630)) - 6795) % 109) - (-1);
    a7 = 12;
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 2), a24 == 15), 255 < a17), a2 <= 189), a5 == 4))
  {
    a17 = ((a17 + 0) - 600231) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(a5 == 5, __logand(a24 == 14, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), __logand(189 < a2, 281 >= a2))))))
  {
    a17 = (((a17 + 0) % 71) - (-167)) + 11;
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(input == 6, a7 == 13))), __logand((-108) < a17, 111 >= a17))))
  {
    return 23;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(__logand(__logand(input == 6, __logor(a7 == 12, a7 == 13)), a5 == 5), __logand(189 < a2, 281 >= a2))), a24 == 14))
  {
    a17 = (((a17 / 5) % 109) - (-109)) / 5;
    a7 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(__logor(__logand(a17 <= (-108), a7 == 14), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 3), a24 == 13), a5 == 5)))
  {
    a2 = ((a2 / (-5)) * 5) - 263640;
    a17 = (((a17 * 9) / 10) + (-31880)) - 20940;
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a2 <= 189, __logand(__logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 13)), input == 2))), a5 == 5))
  {
    a17 = ((a17 + 26382) - 539571) - 38393;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a17 <= (-108), __logand(a5 == 6, __logand(__logand(__logand(a7 == 12, input == 1), a24 == 13), a2 <= 189))))
  {
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(__logand(__logor(__logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 6), a24 == 15), __logand(189 < a2, 281 >= a2))))
  {
    a17 = (((a17 - 0) % 109) - (-2)) - (-1);
    a7 = 12;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(input == 2, __logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17)))))), a5 == 4))
  {
    a2 = (((a2 / (-5)) + 523985) * 1) + (-866052);
    a17 = ((((a17 % 109) + 2) + (-1)) - (-574310)) + (-574309);
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(a7 == 12, __logand(a5 == 6, input == 1)), __logand(111 < a17, 255 >= a17))), a2 <= 189))
  {
    a2 = (((a2 + 0) + 6154) % 45) - (-236);
    a17 = ((a17 / 5) / 5) + (-109);
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(__logand(__logand(a17 <= (-108), __logand(__logor(a7 == 12, a7 == 13), input == 3)), __logand(189 < a2, 281 >= a2)), a5 == 6), a24 == 13))
  {
    a17 = (((a17 * 9) / 10) * 1) - (-571423);
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a7 == 14, __logand(__logand(input == 4, 255 < a17), a5 == 5))), a2 <= 189))
  {
    a2 = ((((a2 % 45) - (-235)) * 1) / 5) - (-166);
    a17 = (((a17 * 9) / 10) / 5) + (-557397);
    a24 = 14;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 4), __logand(189 < a2, 281 >= a2)), a24 == 14), a5 == 4))
  {
    a2 = (((a2 - (-6843)) - 234103) - (-260659)) + (-346865);
    a17 = ((((a17 % 71) + 182) - (-2)) - (-415451)) - 415452;
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a5 == 5, __logand(a24 == 15, __logand(__logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12))), input == 5)))))
  {
    a2 = (((((a2 % 45) - (-235)) - (-220353)) * 2) % 45) - (-192);
    a17 = ((((a17 % 109) - (-1)) - 487372) / 5) + 97389;
    a7 = 12;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(a7 == 13, __logand(__logand(__logand(input == 4, __logand(189 < a2, 281 >= a2)), a5 == 5), __logand((-108) < a17, 111 >= a17))), a24 == 13))
  {
    a24 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(a7 == 13, __logand(__logand(__logand(input == 3, a2 <= 189), a24 == 13), 255 < a17)), a5 == 7))
  {
    a17 = ((((a17 % 71) - (-147)) * 5) % 71) - (-157);
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(__logand(255 < a17, __logand(a5 == 5, __logand(input == 4, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))))), a24 == 15), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 + (-324872)) - 111167) - 140231;
    a7 = 12;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(__logand(input == 3, __logor(__logand(__logand(a7 == 12, a17 <= (-108)), a24 == 15), __logor(__logand(__logand(a7 == 13, 255 < a17), a24 == 14), __logand(__logand(a7 == 14, 255 < a17), a24 == 14)))), a2 <= 189)))
  {
    a17 = (((a17 % 299872) + 300127) + 0) - (-1);
    a7 = 14;
    a24 = 14;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logor(__logor(__logand(__logand(255 < a17, a7 == 14), a24 == 13), __logand(a24 == 14, __logand(a17 <= (-108), a7 == 12))), __logand(a24 == 14, __logand(a7 == 13, a17 <= (-108)))), input == 1), a5 == 5)))
  {
    a17 = (((a17 % 299872) + 300127) - 0) - 0;
    a7 = 13;
    a24 = 15;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a5 == 7, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 1), a2 <= 189)), a24 == 15), 255 < a17))
  {
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17)), input == 3), a24 == 13), __logand(189 < a2, 281 >= a2)), a5 == 4))
  {
    a2 = ((a2 - 228436) / 5) * 5;
    a17 = (((a17 * 9) / 10) - (-37438)) - 617865;
    a7 = 14;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 4), __logand(189 < a2, 281 >= a2)), a24 == 13), a5 == 5))
  {
    a2 = ((a2 * (-5)) + (-362469)) + 206807;
    a17 = ((((a17 / 5) / 5) / 5) % 71) + 183;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(a5 == 5, __logand(255 < a17, __logand(input == 4, __logor(a7 == 13, a7 == 14)))), __logand(189 < a2, 281 >= a2))))
  {
    a7 = 13;
    return 26;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logor(__logand(a24 == 14, __logand(a17 <= (-108), a7 == 13)), __logor(__logand(a24 == 13, __logand(255 < a17, a7 == 14)), __logand(a24 == 14, __logand(a7 == 12, a17 <= (-108))))), input == 5)), a5 == 5))
  {
    a2 = (((a2 / 5) % 45) - (-235)) + 1;
    a17 = ((a17 / 5) - 256291) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(a17 <= (-108), __logand(a5 == 6, __logand(a7 == 13, input == 1))), a2 <= 189)))
  {
    a2 = ((((a2 / 5) * 4) / 5) % 45) - (-234);
    a17 = (((a17 - (-120776)) / 5) % 109) - (-2);
    a24 = 13;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(a5 == 4, __logand(__logand(a2 <= 189, __logand(input == 6, __logor(a7 == 13, a7 == 14))), a24 == 15)), __logand(111 < a17, 255 >= a17)))
  {
    a17 = ((((a17 * (-1)) / 10) * 10) / 9) + (-47);
    a7 = 13;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(a5 == 6, __logand(a24 == 13, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), input == 4), 255 < a17), a7 == 13))))
  {
    a2 = ((a2 / (-5)) * 5) + (-60399);
    a17 = (((a17 / 5) % 109) + (-92)) / 5;
    a7 = 12;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a5 == 5, __logand(input == 3, __logor(a7 == 12, a7 == 13))), a2 <= 189), a24 == 14), __logand(111 < a17, 255 >= a17)))
  {
    a2 = ((((a2 + 399174) % 45) + 234) - 119189) + 119189;
    a17 = ((a17 + (-440715)) / 5) + 88187;
    a7 = 13;
    a24 = 15;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a24 == 13, __logand(a17 <= (-108), __logand(__logand(a5 == 6, __logand(__logor(a7 == 12, a7 == 13), input == 1)), __logand(189 < a2, 281 >= a2)))))
  {
    a17 = (((a17 + 0) + 354212) % 109) + 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(__logand(a5 == 4, __logand(__logor(a7 == 13, a7 == 14), input == 1)), a2 <= 189)), __logand(111 < a17, 255 >= a17)))
  {
    a17 = ((a17 * 5) - 379915) - (-55808);
    a7 = 14;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(a5 == 4, __logand(a2 <= 189, __logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 5), a17 <= (-108)), a24 == 15))))
  {
    a17 = (((((a17 % 71) - (-187)) * 5) * 5) % 71) - (-127);
    a7 = 12;
    return 23;
  }
  else
    if (__logand(__logand(a5 == 4, __logand(__logand(255 < a17, __logand(input == 6, __logor(a7 == 13, a7 == 14))), __logand(189 < a2, 281 >= a2))), a24 == 13))
  {
    a17 = (((a17 / 5) + (-588303)) % 71) + 218;
    a7 = 12;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(input == 1, __logor(__logand(a5 == 7, __logand(a24 == 13, __logand(a7 == 13, a17 <= (-108)))), __logor(__logand(__logand(__logand(a7 == 14, 255 < a17), a24 == 15), a5 == 6), __logand(a5 == 7, __logand(a24 == 13, __logand(a7 == 12, a17 <= (-108)))))))))
  {
    a17 = (((((a17 * 9) / 10) * 1) * 1) % 299946) - 300053;
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return 21;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(a24 == 14, __logand(a7 == 14, 255 < a17)), __logand(__logand(a17 <= (-108), a7 == 12), a24 == 15)), input == 3))))
  {
    a2 = ((a2 + (-143123)) + (-98171)) * 2;
    a17 = ((((a17 % 71) - (-184)) * 5) % 71) + 132;
    a7 = 12;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 4, __logand(__logand(a7 == 12, input == 3), a24 == 15)))))
  {
    a2 = ((a2 * (-5)) * 5) - 163900;
    a17 = ((a17 - 263174) * 2) / 5;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 4), a24 == 14))))
  {
    a2 = ((a2 / (-5)) / 5) + (-193140);
    a17 = (((a17 % 299946) - 300053) - 2) + 0;
    a7 = 12;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(input == 6, __logor(__logor(__logand(a5 == 4, __logand(a24 == 15, __logand(255 < a17, a7 == 14))), __logand(__logand(a24 == 13, __logand(a7 == 12, a17 <= (-108))), a5 == 5)), __logand(__logand(a24 == 13, __logand(a7 == 13, a17 <= (-108))), a5 == 5))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = (((a2 / (-5)) * 5) * 10) / 9;
    a17 = ((((a17 % 299872) + 300127) + 0) - 193833) - (-193835);
    a7 = 13;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(255 < a17, __logand(__logor(a7 == 13, a7 == 14), input == 2)))), a5 == 5))
  {
    a2 = ((a2 / 5) * (-5)) - 445381;
    a17 = ((a17 - 533326) - 24751) + (-42172);
    a7 = 12;
    a24 = 13;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 2), 255 < a17)), a24 == 13), a5 == 5))
  {
    a17 = (((a17 * 9) / 10) - 571338) / 5;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(input == 6, __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)))), a24 == 15), a5 == 5)))
  {
    a17 = ((a17 * 5) + (-240915)) + (-308966);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(input == 5, __logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12))), a24 == 14)), a5 == 4))
  {
    a2 = ((a2 - 446402) + (-60965)) * 1;
    a17 = (((a17 % 299946) - 300053) * 1) * 1;
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(__logand(__logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)), input == 3), __logand(189 < a2, 281 >= a2))), a5 == 5))
  {
    a2 = ((a2 - 299989) - 282684) + (-11091);
    a17 = (((a17 + (-13195)) * 10) / 9) / 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a24 == 15, input == 1), a5 == 5), __logand(111 < a17, 255 >= a17)), a2 <= 189), a7 == 14))
  {
    a2 = ((((a2 % 45) + 234) + 93283) + 429518) + (-522800);
    a17 = (((a17 - 192) - 1) + 44565) - 44563;
    a7 = 13;
    a24 = 13;
    return 23;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logand(a5 == 5, __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 4)), __logand(189 < a2, 281 >= a2)), a24 == 13)))
  {
    a2 = ((a2 * 5) - 529848) + (-4150);
    a17 = ((a17 / 5) / 5) - 39;
    a7 = 13;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a17 <= (-108), __logand(a24 == 14, __logand(input == 4, __logor(a7 == 13, a7 == 14)))), a2 <= 189), a5 == 6))
  {
    a7 = 13;
    a24 = 13;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(a5 == 5, __logand(__logand(111 < a17, 255 >= a17), __logand(__logor(a7 == 12, a7 == 13), input == 6)))), a24 == 14))
  {
    a2 = (((a2 % 45) + 234) * 5) / 5;
    a7 = 14;
    a5 = 3;
    return 21;
  }
  else
    if (__logand(a24 == 15, __logand(a2 <= 189, __logand(__logand(__logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a17 <= (-108), a7 == 14))), input == 2), a5 == 7))))
  {
    a17 = (((a17 % 299946) + (-300053)) + (-2)) + 0;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(input == 4, __logor(__logor(__logand(__logand(__logand(255 < a17, a7 == 14), a24 == 15), a5 == 4), __logand(__logand(a24 == 13, __logand(a7 == 12, a17 <= (-108))), a5 == 5)), __logand(__logand(__logand(a7 == 13, a17 <= (-108)), a24 == 13), a5 == 5)))))
  {
    a2 = ((a2 - (-563886)) * (-1)) + 466041;
    a17 = (((a17 % 109) - (-2)) + 1) - 1;
    a7 = 13;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(__logand(__logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 2), __logand(189 < a2, 281 >= a2)), a24 == 15)), a5 == 5))
  {
    a2 = ((a2 / (-5)) - 416146) / 5;
    a17 = ((a17 - 462537) + (-101249)) + 137036;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(189 < a2, 281 >= a2), __logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 5, __logand(input == 4, __logor(a7 == 13, a7 == 14)))))))
  {
    a17 = (((a17 + 115929) / 5) + (-404240)) + 381192;
    a7 = 14;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a5 == 6, __logand(255 < a17, __logand(__logor(a7 == 12, a7 == 13), input == 4)))), a2 <= 189))
  {
    a17 = ((((a17 + (-82645)) / 5) / 5) % 109) + 1;
    a7 = 14;
    a24 = 13;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(a17 <= (-108), __logand(__logand(input == 4, __logor(a7 == 13, a7 == 14)), __logand(189 < a2, 281 >= a2))), a5 == 3)))
  {
    a2 = ((a2 * (-5)) + (-23430)) * 5;
    a7 = 14;
    a24 = 14;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(a7 == 12, __logand(a24 == 15, __logand(input == 1, a5 == 4))))))
  {
    a2 = (((a2 - 86020) + (-319001)) - (-534468)) - 217545;
    a17 = ((a17 - (-503276)) + 60279) / 5;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(a2 <= 189, __logand(input == 4, __logor(a7 == 12, a7 == 13)))), a24 == 15), a17 <= (-108)))
  {
    a2 = (((a2 % 45) - (-236)) - 1) * 1;
    a7 = 13;
    a24 = 14;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(__logand(a5 == 3, __logand(input == 6, __logor(__logand(a7 == 12, 255 < a17), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14))))), a24 == 13), __logand(189 < a2, 281 >= a2)))
  {
    a17 = ((((a17 + (-429873)) % 299872) + 300127) - 39771) - (-39773);
    a7 = 12;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 1), __logand((-108) < a17, 111 >= a17)), a24 == 13), __logand(189 < a2, 281 >= a2)), a5 == 3))
  {
    a7 = 13;
    return 26;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, __logand(__logand(input == 6, __logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))), __logand(__logand(111 < a17, 255 >= a17), a7 == 13))), a5 == 4))))
  {
    a2 = ((a2 * 5) * 5) - 126327;
    a17 = ((a17 + (-140957)) * 4) - (-269430);
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(a24 == 15, input == 4)), a7 == 12), a5 == 4)))
  {
    a2 = ((a2 - 514328) - 2041) - (-399856);
    a7 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 3, __logand(a24 == 13, __logand(input == 3, __logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))), __logand(a7 == 12, 255 < a17))))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - 307516) - 193341) * 1;
    a17 = ((((a17 % 71) + 181) - (-293974)) / 5) + (-58626);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a5 == 7, __logand(a2 <= 189, __logand(__logor(__logand(a24 == 13, __logand(255 < a17, a7 == 14)), __logand(a24 == 14, __logand(a7 == 12, a17 <= (-108)))), input == 1))))
  {
    a17 = ((((a17 % 71) + 183) - 1) - (-531843)) - 531841;
    a7 = 13;
    a24 = 13;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(a24 == 13, __logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 1)), __logand(189 < a2, 281 >= a2)), a5 == 5), 255 < a17))
  {
    a2 = (((a2 + (-443081)) * 10) / 9) * 1;
    a17 = (((((a17 % 71) - (-174)) * 5) * 5) % 71) - (-133);
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(input == 1, __logor(__logand(a7 == 14, __logand(111 < a17, 255 >= a17)), __logand(a7 == 12, 255 < a17))), a24 == 15), __logand(189 < a2, 281 >= a2)), a5 == 4))
  {
    a2 = (((a2 + (-122718)) * 10) / 9) - (-74204);
    a17 = (((a17 % 109) - (-2)) + (-34)) + 9;
    a7 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 4, __logand(__logand(__logand(a24 == 15, __logand(input == 2, __logor(__logor(a7 == 12, a7 == 13), a7 == 14))), a17 <= (-108)), __logand(189 < a2, 281 >= a2))))
  {
    a2 = (((a2 - (-117222)) - 186157) - (-508770)) - 673504;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 7, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 1), a24 == 15)), a2 <= 189), __logand((-108) < a17, 111 >= a17)))
  {
    a17 = (((((a17 % 71) - (-183)) * 1) * 5) % 71) - (-154);
    a7 = 12;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logor(__logor(__logand(__logand(255 < a17, a7 == 13), a24 == 13), __logand(__logand(255 < a17, a7 == 14), a24 == 13)), __logand(__logand(a7 == 12, a17 <= (-108)), a24 == 14)), input == 6), a5 == 3), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - 596397) + (-1500)) + (-536);
    a17 = ((((a17 * 9) / 10) % 109) + 2) + (-1);
    a7 = 13;
    a24 = 14;
    a5 = 5;
    return 26;
  }
  else
    if (__logand(a24 == 13, __logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(a5 == 6, __logand(input == 5, __logor(a7 == 12, a7 == 13)))), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 + (-92113)) - 295718) + (-53625);
    a17 = ((a17 / 5) / 5) - 76916;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 15, __logand(__logand((-108) < a17, 111 >= a17), __logand(input == 5, __logor(a7 == 13, a7 == 14)))), a2 <= 189), a5 == 6))
  {
    a2 = (((a2 % 45) - (-236)) - (-1)) + (-3);
    a17 = (((a17 + (-62237)) % 71) + 199) + (-15);
    a7 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a17 <= (-108), __logand(__logand(a24 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(a7 == 12, a7 == 13), input == 6))), a5 == 6)))
  {
    a17 = ((((a17 % 71) - (-223)) * 5) % 71) - (-154);
    a7 = 13;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 2, __logor(a7 == 12, a7 == 13)), __logand(189 < a2, 281 >= a2)), a5 == 5), a24 == 14), a17 <= (-108)))
  {
    a2 = (((a2 - 55102) - (-372533)) - 62328) * (-2);
    a17 = ((((a17 * 9) / 10) * 1) / 5) + 203115;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(__logand(a5 == 3, __logand(a7 == 12, input == 6)), __logand(189 < a2, 281 >= a2))), a24 == 13))
  {
    a2 = ((a2 / (-5)) / 5) * 5;
    a17 = (((((a17 % 71) - (-247)) + 8) * 5) % 71) + 139;
    a7 = 14;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(255 < a17, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 5), a5 == 4)), a24 == 15)))
  {
    a17 = ((a17 + (-600167)) * 1) + (-74);
    a7 = 12;
    a24 = 13;
    a5 = 6;
    return 21;
  }
  else
    if (__logand(__logand(111 < a17, 255 >= a17), __logand(a5 == 3, __logand(a24 == 14, __logand(__logand(input == 1, __logand(189 < a2, 281 >= a2)), a7 == 13)))))
  {
    a2 = ((a2 + 97520) - (-476171)) + (-703390);
    a17 = ((a17 - 192516) + 192347) + 14;
    a7 = 14;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(a24 == 15, __logand(a17 <= (-108), __logand(input == 6, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)))), a5 == 4)))
  {
    a2 = ((a2 / 5) - (-274462)) - 512632;
    a17 = ((((a17 % 71) - (-206)) - (-20)) - 351411) + 351407;
    a7 = 13;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a5 == 5, __logand(a2 <= 189, __logand(255 < a17, __logand(__logor(a7 == 12, a7 == 13), input == 3)))), a24 == 13))
  {
    a17 = ((((a17 % 71) + 123) - 11) + 84970) + (-84956);
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return 21;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, __logand(__logand(__logand(111 < a17, 255 >= a17), __logand(input == 1, __logor(__logor(a7 == 12, a7 == 13), a7 == 14))), a5 == 5))))
  {
    a17 = (((a17 * 5) % 109) - 71) - (-9);
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 6), a5 == 5), 255 < a17), a24 == 14), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - (-501110)) / (-5)) + (-432351);
    a17 = ((((a17 % 71) + 148) + (-248919)) + (-89135)) - (-338038);
    a7 = 14;
    a24 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(255 < a17, __logand(a7 == 13, __logand(a24 == 13, input == 5))), a5 == 7), a2 <= 189))
  {
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 4), a2 <= 189)), a24 == 14), 255 < a17))
  {
    a17 = ((a17 + (-600231)) * 1) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(input == 6, a7 == 13), a2 <= 189)), a24 == 14), a5 == 7))
  {
    return 21;
  }
  else
    if (__logand(255 < a17, __logand(a5 == 6, __logand(a2 <= 189, __logand(a24 == 15, __logand(__logor(a7 == 12, a7 == 13), input == 1))))))
  {
    a17 = (((a17 % 109) - 52) - 44) + (-3);
    a7 = 13;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(__logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 1), a5 == 6), a24 == 14), a2 <= 189)))
  {
    a17 = (((a17 / 5) + 148) * 9) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return 23;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 6, __logand(a24 == 13, __logand(input == 1, __logor(__logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)), __logand(255 < a17, a7 == 12)))))))
  {
    a17 = (((((a17 + 0) % 109) - 20) * 5) % 109) + 1;
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logor(a7 == 13, a7 == 14), input == 6), a24 == 13))), a5 == 4))
  {
    a17 = ((((a17 - 297061) - (-413246)) * 5) % 71) - (-126);
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 15, __logand(a5 == 4, __logand(input == 2, __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logor(__logand(a7 == 14, __logand((-108) < a17, 111 >= a17)), __logand(a7 == 12, __logand(111 < a17, 255 >= a17))))))), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 - (-381050)) + (-586556)) - 318711;
    a17 = ((a17 * 5) * 5) - 315241;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(__logand(__logor(__logand(__logand(a7 == 13, a17 <= (-108)), a24 == 14), __logor(__logand(__logand(255 < a17, a7 == 14), a24 == 13), __logand(__logand(a7 == 12, a17 <= (-108)), a24 == 14))), input == 2), a2 <= 189)))
  {
    a17 = (((a17 % 299946) + (-300053)) * 1) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(111 < a17, 255 >= a17), __logand(input == 3, a7 == 14)), a24 == 14), a2 <= 189), a5 == 5))
  {
    a2 = (((a2 % 45) - (-235)) + (-1)) - 0;
    a17 = ((((a17 / 5) * 10) / 9) * 10) / 9;
    a24 = 15;
    a5 = 3;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 14, __logand(__logand(__logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a7 == 14, a17 <= (-108)))), input == 1), a5 == 7))))
  {
    a17 = (((a17 / 5) * 4) % 109) + 2;
    a7 = 13;
    a24 = 15;
    a5 = 4;
    return 21;
  }
  else
    if (__logand(__logand(a17 <= (-108), __logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 3), a2 <= 189), a5 == 5)), a24 == 15))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(a24 == 15, input == 3), a5 == 5), a7 == 14), __logand(111 < a17, 255 >= a17)), a2 <= 189))
  {
    a2 = (((a2 % 45) - (-236)) * 1) - 1;
    a17 = (((a17 - 477741) * 10) / 9) + (-8957);
    a24 = 13;
    return 23;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 6, __logor(a7 == 13, a7 == 14)), a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 15), a5 == 6))
  {
    a7 = 12;
    a24 = 13;
    a5 = 7;
    return 21;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(255 < a17, a7 == 12), __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14))), input == 6)), a5 == 6), a24 == 13))
  {
    a2 = ((a2 / 5) - 67976) + (-37056);
    a17 = (((a17 % 109) + (-50)) + 36) / 5;
    a7 = 14;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(a24 == 13, __logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 4, __logand(input == 3, __logor(a7 == 13, a7 == 14)))))))
  {
    a2 = ((a2 + (-368535)) + (-129446)) * 1;
    a17 = ((((a17 * 9) / 10) * 1) / 5) - 289303;
    a7 = 14;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a24 == 14, __logand(a5 == 4, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(a7 == 12, a7 == 13), input == 6)))), a17 <= (-108)))
  {
    a2 = ((a2 / 5) + (-164157)) * 3;
    a7 = 13;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 15, __logand(a5 == 7, __logand(__logor(__logor(__logand(a17 <= (-108), a7 == 13), __logand(a7 == 14, a17 <= (-108))), __logand(a7 == 12, __logand((-108) < a17, 111 >= a17))), input == 3)))))
  {
    a17 = ((((a17 % 109) - (-2)) + (-1)) + 462727) + (-462726);
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 3, __logand(input == 2, __logor(__logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 13), __logand(__logand((-108) < a17, 111 >= a17), a7 == 14)), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)))), __logand(189 < a2, 281 >= a2)), a24 == 14))
  {
    a17 = (((a17 % 109) - (-2)) + (-1)) - (-2);
    a7 = 14;
    return -1;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(__logand(__logand(a7 == 14, 255 < a17), a24 == 14), __logand(a24 == 15, __logand(a7 == 12, a17 <= (-108)))), input == 1))))
  {
    a17 = ((((a17 / 5) % 71) - (-184)) / 5) + 143;
    a7 = 13;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a2 <= 189, __logand(__logand(__logand(111 < a17, 255 >= a17), input == 5), a24 == 15)), a5 == 5), a7 == 14))
  {
    a2 = (((((a2 - 0) * 9) / 10) - 15643) % 45) + 276;
    a17 = ((a17 / 5) / 5) - (-310668);
    a7 = 13;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, __logand(__logand(input == 6, __logor(a7 == 14, __logor(a7 == 12, a7 == 13))), a5 == 5))), a17 <= (-108)))
  {
    a2 = (((a2 + 140796) / 5) / 5) * (-5);
    a7 = 12;
    a24 = 14;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(input == 5, __logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a17 <= (-108), a7 == 13), __logand(a17 <= (-108), a7 == 14)))), a24 == 13), a5 == 4)))
  {
    a17 = ((a17 / 5) / 5) + (-194917);
    a7 = 14;
    a24 = 14;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(a5 == 4, __logand(a17 <= (-108), __logand(input == 2, __logor(a7 == 13, a7 == 14))))), a24 == 15))
  {
    a17 = (((a17 % 109) - (-85)) + (-84)) - 0;
    a7 = 12;
    return 21;
  }
  else
    if (__logand(a5 == 6, __logand(__logand(255 < a17, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 6), a2 <= 189)), a24 == 15)))
  {
    a2 = ((((a2 % 45) - (-235)) / 5) / 5) + 244;
    a7 = 13;
    a5 = 3;
    return 26;
  }
  else
    if (__logand(a5 == 3, __logand(__logand(a24 == 13, __logand(__logor(__logand(255 < a17, a7 == 12), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(a7 == 14, __logand(111 < a17, 255 >= a17)))), input == 5)), __logand(189 < a2, 281 >= a2))))
  {
    a2 = ((a2 - (-580869)) + (-652808)) * 5;
    a17 = (((a17 % 109) - (-3)) + (-41)) + 9;
    a7 = 12;
    a24 = 14;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a24 == 15, __logand(__logand(__logor(a7 == 12, a7 == 13), input == 1), a17 <= (-108))), a5 == 5), a2 <= 189))
  {
    a2 = ((((a2 * 9) / 10) + (-16953)) % 45) + 272;
    a17 = (((((a17 % 71) + 236) * 5) + 502892) % 71) + 132;
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(__logand(__logand(a24 == 13, __logand(input == 1, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)))), a5 == 3), __logand(189 < a2, 281 >= a2)))
  {
    a2 = ((a2 * (-5)) + 409580) + (-457191);
    a17 = ((a17 - (-196150)) + 128540) - (-116144);
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(a5 == 4, __logand(__logand(__logand(__logand((-108) < a17, 111 >= a17), input == 1), __logand(189 < a2, 281 >= a2)), a7 == 13))))
  {
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 3), a5 == 5), __logand((-108) < a17, 111 >= a17)), a2 <= 189), a24 == 15))
  {
    a2 = (((a2 % 45) + 234) - (-448340)) + (-448339);
    a17 = ((a17 * 5) / 5) - (-211113);
    a7 = 13;
    a24 = 14;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(a24 == 13, __logand(__logand(__logor(__logand(a7 == 12, 255 < a17), __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(__logand(111 < a17, 255 >= a17), a7 == 14))), input == 5), __logand(189 < a2, 281 >= a2))), a5 == 6))
  {
    a2 = ((a2 / 5) / 5) * (-5);
    a17 = ((((a17 % 299872) + 256) + 239410) * 10) / 9;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(a5 == 5, __logand(a24 == 14, __logand(a2 <= 189, __logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 2), 255 < a17)))))
  {
    a2 = ((((a2 % 45) + 236) * 5) % 45) - (-195);
    a17 = ((a17 - 600134) * 1) - 48;
    a7 = 13;
    a24 = 13;
    a5 = 4;
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(a24 == 15, __logand(__logand(__logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12)), input == 1), a5 == 6))))
  {
    a17 = ((((a17 * 9) / 10) * 1) / 5) - 216856;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 6, __logand(__logand(input == 5, __logor(__logand(255 < a17, a7 == 12), __logor(__logand(a7 == 13, __logand(111 < a17, 255 >= a17)), __logand(a7 == 14, __logand(111 < a17, 255 >= a17))))), a2 <= 189))))
  {
    a17 = (((a17 % 109) - (-1)) - 83) - (-75);
    a7 = 12;
    a24 = 15;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(a5 == 7, __logand(__logand(input == 1, __logor(__logand(255 < a17, a7 == 12), __logor(__logand(__logand(111 < a17, 255 >= a17), a7 == 13), __logand(__logand(111 < a17, 255 >= a17), a7 == 14)))), a2 <= 189)), a24 == 13))
  {
    a17 = ((((a17 - 274936) + 211306) * 1) % 71) + 182;
    a7 = 13;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(a5 == 6, __logand(a24 == 13, __logand(__logand(__logand(__logor(a7 == 12, a7 == 13), input == 6), __logand((-108) < a17, 111 >= a17)), __logand(189 < a2, 281 >= a2)))))
  {
    a2 = ((a2 + (-87407)) - (-312987)) - 526695;
    a17 = ((a17 + 556571) * 1) * 1;
    a7 = 12;
    a24 = 15;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(a5 == 6, __logand(__logand(__logor(a7 == 13, a7 == 14), input == 2), a24 == 14))), a17 <= (-108)))
  {
    a7 = 14;
    a24 = 15;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(__logand(a7 == 12, __logand(__logand(input == 6, a2 <= 189), __logand((-108) < a17, 111 >= a17))), a5 == 4)))
  {
    a17 = ((((a17 % 71) + 182) + 0) + (-506914)) - (-506916);
    a24 = 13;
    a5 = 5;
    return 21;
  }
  else
    if (__logand(__logand(__logand(a17 <= (-108), __logand(__logand(a5 == 5, input == 5), a2 <= 189)), a7 == 14), a24 == 14))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(a2 <= 189, __logand(__logor(__logand(__logand(a17 <= (-108), a7 == 12), a24 == 14), __logor(__logand(__logand(a7 == 13, 255 < a17), a24 == 13), __logand(a24 == 13, __logand(a7 == 14, 255 < a17)))), input == 5)), a5 == 6))
  {
    a2 = ((((a2 % 45) + 234) / 5) / 5) + 253;
    a17 = (((a17 % 299872) + 300127) + 0) + 0;
    a7 = 13;
    a24 = 14;
    a5 = 3;
    return 26;
  }




























































































































































































































  return calculate_output4(input);
}

int calculate_output4(int input)
{
  if (__logand(__logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(__logand(input == 6, __logor(a7 == 13, a7 == 14)), a24 == 15), a2 <= 189)), a5 == 7))
  {
    a7 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 6, a2 <= 189), a24 == 13), a7 == 12), a5 == 5), __logand(111 < a17, 255 >= a17)))
  {
    a17 = (((a17 - (-162890)) - (-143056)) * 10) / (-9);
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, __logand(__logand(input == 3, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)), a5 == 5))), a17 <= (-108)))
  {
    a17 = ((((a17 + 326777) + 251227) - 58119) % 109) + 1;
    a7 = 12;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(a7 == 13, __logand(__logand(__logand(__logand(189 < a2, 281 >= a2), input == 5), __logand((-108) < a17, 111 >= a17)), a5 == 4))))
  {
    return 23;
  }
  else
    if (__logand(a2 <= 189, __logand(__logand(__logand(__logand(__logor(a7 == 13, a7 == 14), input == 3), a24 == 15), a5 == 6), __logand(111 < a17, 255 >= a17))))
  {
    a7 = 14;
    return 21;
  }
  else
    if (__logand(a7 == 13, __logand(a17 <= (-108), __logand(a2 <= 189, __logand(__logand(input == 5, a24 == 15), a5 == 6)))))
  {
    return 23;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(a5 == 5, __logand(__logand(a2 <= 189, input == 6), a17 <= (-108))), a7 == 14)))
  {
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, __logand(a5 == 5, __logand(a17 <= (-108), __logand(input == 4, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)))))))
  {
    a7 = 14;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(__logor(__logor(a7 == 12, a7 == 13), a7 == 14), input == 1), a5 == 7), a2 <= 189), __logand(111 < a17, 255 >= a17)), a24 == 15))
  {
    a7 = 12;
    a24 = 14;
    return -1;
  }
  else
    if (__logand(a2 <= 189, __logand(__logor(__logor(__logand(__logand(a24 == 15, __logand(255 < a17, a7 == 14)), a5 == 4), __logand(a5 == 5, __logand(__logand(a17 <= (-108), a7 == 12), a24 == 13))), __logand(a5 == 5, __logand(__logand(a7 == 13, a17 <= (-108)), a24 == 13))), input == 5)))
  {
    a17 = (((a17 % 299946) - 300053) + (-1)) + 0;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(255 < a17, __logand(__logand(a5 == 6, __logand(__logand(input == 6, a24 == 13), __logand(189 < a2, 281 >= a2))), a7 == 13)))
  {
    a2 = ((a2 + (-559930)) - (-930633)) - 537732;
    a17 = ((a17 - 600136) * 1) - 66;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(__logand((-108) < a17, 111 >= a17), __logand(__logand(a24 == 15, __logand(input == 2, __logor(a7 == 13, a7 == 14))), a5 == 5))))
  {
    a2 = (((a2 * (-5)) * 10) / 9) * 5;
    a17 = ((a17 - 416379) / 5) * 5;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 15, __logand(input == 3, __logor(__logor(a7 == 12, a7 == 13), a7 == 14)))), a17 <= (-108)), a5 == 4))
  {
    a2 = ((a2 / 5) + (-106387)) + (-147146);
    a17 = (((a17 % 299872) - (-300127)) - (-270865)) + 27768;
    a7 = 12;
    a5 = 7;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 5, __logand(a24 == 15, input == 5))), a7 == 12), __logand((-108) < a17, 111 >= a17)))
  {
    a17 = ((a17 - (-533048)) + 40396) * 1;
    a7 = 13;
    a24 = 13;
    return -1;
  }
  else
    if (__logand(__logand(__logand(189 < a2, 281 >= a2), __logand(__logand(__logand(input == 6, a24 == 15), a5 == 4), a7 == 12)), __logand((-108) < a17, 111 >= a17)))
  {
    a2 = ((a2 * (-5)) * 5) * 5;
    a17 = ((a17 - 418037) * 1) - (-234835);
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(__logand(__logand(input == 4, a24 == 13), a5 == 6), a17 <= (-108)), a7 == 14), __logand(189 < a2, 281 >= a2)))
  {
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 13, __logand(a5 == 5, __logand(a2 <= 189, __logand(__logor(__logand(a7 == 13, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 14, a17 <= (-108)), __logand(__logand((-108) < a17, 111 >= a17), a7 == 12))), input == 2)))))
  {
    a17 = (((a17 - (-453354)) % 299946) + (-300053)) * 1;
    a7 = 12;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(a24 == 15, __logand(a2 <= 189, __logand(__logand(__logor(__logand(a7 == 12, __logand((-108) < a17, 111 >= a17)), __logor(__logand(a7 == 13, a17 <= (-108)), __logand(a7 == 14, a17 <= (-108)))), input == 5), a5 == 7))))
  {
    a17 = (((a17 - 0) % 299872) + 300127) * 1;
    a7 = 13;
    a24 = 13;
    a5 = 5;
    return -1;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a24 == 14, __logand(a7 == 13, __logand(__logand(input == 6, a5 == 3), __logand(111 < a17, 255 >= a17))))))
  {
    return 26;
  }
  else
    if (__logand(255 < a17, __logand(a24 == 13, __logand(__logand(a7 == 13, __logand(input == 6, a2 <= 189)), a5 == 7))))
  {
    a17 = ((((a17 % 109) + 3) - 249216) * 2) - (-498320);
    a7 = 14;
    a24 = 15;
    a5 = 4;
    return -1;
  }
  else
    if (__logand(a24 == 14, __logand(__logand(111 < a17, 255 >= a17), __logand(__logand(a5 == 6, __logand(input == 5, __logor(a7 == 14, __logor(a7 == 12, a7 == 13)))), a2 <= 189))))
  {
    a2 = ((((a2 % 45) + 234) * 5) % 45) - (-233);
    a17 = (((((a17 * 10) / (-9)) + 137075) * 4) * (-1)) / 10;
    a7 = 12;
    a24 = 13;
    a5 = 4;
    return 26;
  }
  else
    if (__logand(__logand(189 < a2, 281 >= a2), __logand(a5 == 4, __logand(a24 == 14, __logand(input == 5, __logor(__logand(__logand((-108) < a17, 111 >= a17), a7 == 14), __logand(__logand(111 < a17, 255 >= a17), a7 == 12)))))))
  {
    a2 = ((a2 / (-5)) + (-474783)) / 5;
    a17 = ((a17 - 32453) * 5) / 5;
    a7 = 14;
    a24 = 15;
    a5 = 5;
    return 23;
  }
  else
    if (__logand(255 < a17, __logand(a24 == 15, __logand(a5 == 5, __logand(__logand(189 < a2, 281 >= a2), __logand(__logor(a7 == 14, __logor(a7 == 12, a7 == 13)), input == 2))))))
  {
    a2 = ((a2 + (-107856)) - 174986) / 5;
    a17 = ((a17 - 83582) + (-516569)) * 1;
    a7 = 12;
    a24 = 13;
    a5 = 3;
    return -1;
  }
  else
    if (__logand(__logand(__logand(a5 == 5, __logand(__logand(a24 == 13, input == 2), a2 <= 189)), a7 == 13), __logand(111 < a17, 255 >= a17)))
  {
    a17 = ((a17 - 3949) * 5) * 5;
    a7 = 12;
    a5 = 3;
    return -1;
  }
























  return -2;
}

int main2()
{
  int output = -1;
  while (1)
  {
    int input;
    input = __VERIFIER_nondet_int("input");
    if (__logand(__logand(__logand(__logand(__logand(input != 1, input != 2), input != 3), input != 4), input != 5), input != 6))
      return -2;

    output = calculate_output(input);
  }

}

int main()
{
  if (__VERIFIER_nondet_int("if_1"))
    main1();
  else
    main2();

}

