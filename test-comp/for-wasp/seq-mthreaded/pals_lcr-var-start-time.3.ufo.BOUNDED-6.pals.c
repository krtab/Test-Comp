extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "pals_lcr-var-start-time.3.ufo.BOUNDED-6.pals.c", 3, "reach_error");
}

_Bool __VERIFIER_nondet_bool(char *);
char __VERIFIER_nondet_char(char *);
char __VERIFIER_nondet_char(char *);
void __VERIFIER_assert(_Bool arg);
void abort(void);
typedef char msg_t;
typedef int port_t;
extern void read(port_t p, msg_t m);
extern void write(port_t p, msg_t m);
msg_t nomsg = (msg_t) (-1);
char r1;
port_t p1;
char p1_old;
char p1_new;
char id1;
char st1;
msg_t send1;
_Bool mode1;
_Bool alive1;
port_t p2;
char p2_old;
char p2_new;
char id2;
char st2;
msg_t send2;
_Bool mode2;
_Bool alive2;
port_t p3;
char p3_old;
char p3_new;
char id3;
char st3;
msg_t send3;
_Bool mode3;
_Bool alive3;
void node1(void)
{
  msg_t m1;
  {
    m1 = nomsg;
    if (mode1)
    {
      r1 = (char) (((int) r1) + 1);
      m1 = p3_old;
      p3_old = nomsg;
      if (((int) m1) != ((int) nomsg))
      {
        if (alive1)
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
        else
        {
          send1 = m1;
        }

      }

      mode1 = (_Bool) 0;
    }
    else
    {
      if (alive1)
      {
        p1_new = (__logand(send1 != nomsg, p1_new == nomsg)) ? (send1) : (p1_new);
      }
      else
        if (((int) send1) != ((int) id1))
      {
        p1_new = (__logand(send1 != nomsg, p1_new == nomsg)) ? (send1) : (p1_new);
      }


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
        if (alive2)
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
        else
        {
          send2 = m2;
        }

      }

      mode2 = (_Bool) 0;
    }
    else
    {
      if (alive2)
      {
        p2_new = (__logand(send2 != nomsg, p2_new == nomsg)) ? (send2) : (p2_new);
      }
      else
        if (((int) send2) != ((int) id2))
      {
        p2_new = (__logand(send2 != nomsg, p2_new == nomsg)) ? (send2) : (p2_new);
      }


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
        if (alive3)
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
        else
        {
          send3 = m3;
        }

      }

      mode3 = (_Bool) 0;
    }
    else
    {
      if (alive3)
      {
        p3_new = (__logand(send3 != nomsg, p3_new == nomsg)) ? (send3) : (p3_new);
      }
      else
        if (((int) send3) != ((int) id3))
      {
        p3_new = (__logand(send3 != nomsg, p3_new == nomsg)) ? (send3) : (p3_new);
      }


      mode3 = (_Bool) 1;
    }

    return;
  }
}

int init(void)
{
  int tmp;
  {
    if (((int) r1) == 0)
    {
      if (((((int) alive1) + ((int) alive2)) + ((int) alive3)) >= 1)
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
                                if (((int) id1) != ((int) id2))
                                {
                                  if (((int) id1) != ((int) id3))
                                  {
                                    if (((int) id2) != ((int) id3))
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

    return tmp;
  }
}

int check(void)
{
  int tmp;
  {
    if (((((int) st1) + ((int) st2)) + ((int) st3)) <= 1)
    {
      if (((int) r1) < 3)
      {
        tmp = 1;
      }
      else
        if (((((int) st1) + ((int) st2)) + ((int) st3)) == 1)
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

    return tmp;
  }
}

int main(void)
{
  int c1;
  int i2;
  {
    c1 = 0;
    r1 = __VERIFIER_nondet_char("r1");
    id1 = __VERIFIER_nondet_char("id1");
    st1 = __VERIFIER_nondet_char("st1");
    send1 = __VERIFIER_nondet_char("send1");
    mode1 = __VERIFIER_nondet_bool("mode1");
    alive1 = __VERIFIER_nondet_bool("alive1");
    id2 = __VERIFIER_nondet_char("id2");
    st2 = __VERIFIER_nondet_char("st2");
    send2 = __VERIFIER_nondet_char("send2");
    mode2 = __VERIFIER_nondet_bool("mode2");
    alive2 = __VERIFIER_nondet_bool("alive2");
    id3 = __VERIFIER_nondet_char("id3");
    st3 = __VERIFIER_nondet_char("st3");
    send3 = __VERIFIER_nondet_char("send3");
    mode3 = __VERIFIER_nondet_bool("mode3");
    alive3 = __VERIFIER_nondet_bool("alive3");
    i2 = init();
    if (!i2)
    {
      abort();
    }

    p1_old = nomsg;
    p1_new = nomsg;
    p2_old = nomsg;
    p2_new = nomsg;
    p3_old = nomsg;
    p3_new = nomsg;
    i2 = 0;
    while (i2 < 6)
    {
      {
        node1();
        node2();
        node3();
        p1_old = p1_new;
        p1_new = nomsg;
        p2_old = p2_new;
        p2_new = nomsg;
        p3_old = p3_new;
        p3_new = nomsg;
        c1 = check();
        __VERIFIER_assert(c1);
        i2++;
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

