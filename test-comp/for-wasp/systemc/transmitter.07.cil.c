extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "transmitter.07.cil.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
void error(void)
{
  {
    ERROR:
    {
      reach_error();
      abort();
    }

    return;
  }
}

int m_pc = 0;
int t1_pc = 0;
int t2_pc = 0;
int t3_pc = 0;
int t4_pc = 0;
int t5_pc = 0;
int t6_pc = 0;
int t7_pc = 0;
int m_st;
int t1_st;
int t2_st;
int t3_st;
int t4_st;
int t5_st;
int t6_st;
int t7_st;
int m_i;
int t1_i;
int t2_i;
int t3_i;
int t4_i;
int t5_i;
int t6_i;
int t7_i;
int M_E = 2;
int T1_E = 2;
int T2_E = 2;
int T3_E = 2;
int T4_E = 2;
int T5_E = 2;
int T6_E = 2;
int T7_E = 2;
int E_1 = 2;
int E_2 = 2;
int E_3 = 2;
int E_4 = 2;
int E_5 = 2;
int E_6 = 2;
int E_7 = 2;
int is_master_triggered(void);
int is_transmit1_triggered(void);
int is_transmit2_triggered(void);
int is_transmit3_triggered(void);
int is_transmit4_triggered(void);
int is_transmit5_triggered(void);
int is_transmit6_triggered(void);
int is_transmit7_triggered(void);
void immediate_notify(void);
void master(void)
{
  {
    if (m_pc == 0)
    {
      goto M_ENTRY;
    }
    else
    {
      if (m_pc == 1)
      {
        goto M_WAIT;
      }
      else
      {
      }

    }

    M_ENTRY:
    ;

    {
      while (1)
      {
        while_0_continue:
        ;

        {
          E_1 = 1;
          immediate_notify();
          E_1 = 2;
        }
        {
          while (1)
          {
            while_1_continue:
            ;

            m_pc = 1;
            m_st = 2;
            goto return_label;
            M_WAIT:
            ;

          }

          while_1_break:
          ;

        }
      }

      while_0_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit1(void)
{
  {
    if (t1_pc == 0)
    {
      goto T1_ENTRY;
    }
    else
    {
      if (t1_pc == 1)
      {
        goto T1_WAIT;
      }
      else
      {
      }

    }

    T1_ENTRY:
    ;

    {
      while (1)
      {
        while_2_continue:
        ;

        t1_pc = 1;
        t1_st = 2;
        goto return_label;
        T1_WAIT:
        {
          E_2 = 1;
          immediate_notify();
          E_2 = 2;
        }

      }

      while_2_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit2(void)
{
  {
    if (t2_pc == 0)
    {
      goto T2_ENTRY;
    }
    else
    {
      if (t2_pc == 1)
      {
        goto T2_WAIT;
      }
      else
      {
      }

    }

    T2_ENTRY:
    ;

    {
      while (1)
      {
        while_3_continue:
        ;

        t2_pc = 1;
        t2_st = 2;
        goto return_label;
        T2_WAIT:
        {
          E_3 = 1;
          immediate_notify();
          E_3 = 2;
        }

      }

      while_3_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit3(void)
{
  {
    if (t3_pc == 0)
    {
      goto T3_ENTRY;
    }
    else
    {
      if (t3_pc == 1)
      {
        goto T3_WAIT;
      }
      else
      {
      }

    }

    T3_ENTRY:
    ;

    {
      while (1)
      {
        while_4_continue:
        ;

        t3_pc = 1;
        t3_st = 2;
        goto return_label;
        T3_WAIT:
        {
          E_4 = 1;
          immediate_notify();
          E_4 = 2;
        }

      }

      while_4_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit4(void)
{
  {
    if (t4_pc == 0)
    {
      goto T4_ENTRY;
    }
    else
    {
      if (t4_pc == 1)
      {
        goto T4_WAIT;
      }
      else
      {
      }

    }

    T4_ENTRY:
    ;

    {
      while (1)
      {
        while_5_continue:
        ;

        t4_pc = 1;
        t4_st = 2;
        goto return_label;
        T4_WAIT:
        {
          E_5 = 1;
          immediate_notify();
          E_5 = 2;
        }

      }

      while_5_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit5(void)
{
  {
    if (t5_pc == 0)
    {
      goto T5_ENTRY;
    }
    else
    {
      if (t5_pc == 1)
      {
        goto T5_WAIT;
      }
      else
      {
      }

    }

    T5_ENTRY:
    ;

    {
      while (1)
      {
        while_6_continue:
        ;

        t5_pc = 1;
        t5_st = 2;
        goto return_label;
        T5_WAIT:
        {
          E_6 = 1;
          immediate_notify();
          E_6 = 2;
        }

      }

      while_6_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit6(void)
{
  {
    if (t6_pc == 0)
    {
      goto T6_ENTRY;
    }
    else
    {
      if (t6_pc == 1)
      {
        goto T6_WAIT;
      }
      else
      {
      }

    }

    T6_ENTRY:
    ;

    {
      while (1)
      {
        while_7_continue:
        ;

        t6_pc = 1;
        t6_st = 2;
        goto return_label;
        T6_WAIT:
        {
          E_7 = 1;
          immediate_notify();
          E_7 = 2;
        }

      }

      while_7_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit7(void)
{
  {
    if (t7_pc == 0)
    {
      goto T7_ENTRY;
    }
    else
    {
      if (t7_pc == 1)
      {
        goto T7_WAIT;
      }
      else
      {
      }

    }

    T7_ENTRY:
    ;

    {
      while (1)
      {
        while_8_continue:
        ;

        t7_pc = 1;
        t7_st = 2;
        goto return_label;
        T7_WAIT:
        {
          error();
        }

      }

      while_8_break:
      ;

    }
    return_label:
    return;

  }
}

int is_master_triggered(void)
{
  int __retres1;
  {
    if (m_pc == 1)
    {
      if (M_E == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit1_triggered(void)
{
  int __retres1;
  {
    if (t1_pc == 1)
    {
      if (E_1 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit2_triggered(void)
{
  int __retres1;
  {
    if (t2_pc == 1)
    {
      if (E_2 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit3_triggered(void)
{
  int __retres1;
  {
    if (t3_pc == 1)
    {
      if (E_3 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit4_triggered(void)
{
  int __retres1;
  {
    if (t4_pc == 1)
    {
      if (E_4 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit5_triggered(void)
{
  int __retres1;
  {
    if (t5_pc == 1)
    {
      if (E_5 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit6_triggered(void)
{
  int __retres1;
  {
    if (t6_pc == 1)
    {
      if (E_6 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit7_triggered(void)
{
  int __retres1;
  {
    if (t7_pc == 1)
    {
      if (E_7 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

void update_channels(void)
{
  {
    return;
  }
}

void init_threads(void)
{
  {
    if (m_i == 1)
    {
      m_st = 0;
    }
    else
    {
      m_st = 2;
    }

    if (t1_i == 1)
    {
      t1_st = 0;
    }
    else
    {
      t1_st = 2;
    }

    if (t2_i == 1)
    {
      t2_st = 0;
    }
    else
    {
      t2_st = 2;
    }

    if (t3_i == 1)
    {
      t3_st = 0;
    }
    else
    {
      t3_st = 2;
    }

    if (t4_i == 1)
    {
      t4_st = 0;
    }
    else
    {
      t4_st = 2;
    }

    if (t5_i == 1)
    {
      t5_st = 0;
    }
    else
    {
      t5_st = 2;
    }

    if (t6_i == 1)
    {
      t6_st = 0;
    }
    else
    {
      t6_st = 2;
    }

    if (t7_i == 1)
    {
      t7_st = 0;
    }
    else
    {
      t7_st = 2;
    }

    return;
  }
}

int exists_runnable_thread(void)
{
  int __retres1;
  {
    if (m_st == 0)
    {
      __retres1 = 1;
      goto return_label;
    }
    else
    {
      if (t1_st == 0)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
        if (t2_st == 0)
        {
          __retres1 = 1;
          goto return_label;
        }
        else
        {
          if (t3_st == 0)
          {
            __retres1 = 1;
            goto return_label;
          }
          else
          {
            if (t4_st == 0)
            {
              __retres1 = 1;
              goto return_label;
            }
            else
            {
              if (t5_st == 0)
              {
                __retres1 = 1;
                goto return_label;
              }
              else
              {
                if (t6_st == 0)
                {
                  __retres1 = 1;
                  goto return_label;
                }
                else
                {
                  if (t7_st == 0)
                  {
                    __retres1 = 1;
                    goto return_label;
                  }
                  else
                  {
                  }

                }

              }

            }

          }

        }

      }

    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

void eval(void)
{
  int tmp;
  {
    {
      while (1)
      {
        while_9_continue:
        ;

        {
          tmp = exists_runnable_thread();
        }
        if (tmp)
        {
        }
        else
        {
          goto while_9_break;
        }

        if (m_st == 0)
        {
          int tmp_ndt_1;
          tmp_ndt_1 = __VERIFIER_nondet_int("tmp_ndt_1");
          if (tmp_ndt_1)
          {
            {
              m_st = 1;
              master();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t1_st == 0)
        {
          int tmp_ndt_2;
          tmp_ndt_2 = __VERIFIER_nondet_int("tmp_ndt_2");
          if (tmp_ndt_2)
          {
            {
              t1_st = 1;
              transmit1();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t2_st == 0)
        {
          int tmp_ndt_3;
          tmp_ndt_3 = __VERIFIER_nondet_int("tmp_ndt_3");
          if (tmp_ndt_3)
          {
            {
              t2_st = 1;
              transmit2();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t3_st == 0)
        {
          int tmp_ndt_4;
          tmp_ndt_4 = __VERIFIER_nondet_int("tmp_ndt_4");
          if (tmp_ndt_4)
          {
            {
              t3_st = 1;
              transmit3();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t4_st == 0)
        {
          int tmp_ndt_5;
          tmp_ndt_5 = __VERIFIER_nondet_int("tmp_ndt_5");
          if (tmp_ndt_5)
          {
            {
              t4_st = 1;
              transmit4();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t5_st == 0)
        {
          int tmp_ndt_6;
          tmp_ndt_6 = __VERIFIER_nondet_int("tmp_ndt_6");
          if (tmp_ndt_6)
          {
            {
              t5_st = 1;
              transmit5();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t6_st == 0)
        {
          int tmp_ndt_7;
          tmp_ndt_7 = __VERIFIER_nondet_int("tmp_ndt_7");
          if (tmp_ndt_7)
          {
            {
              t6_st = 1;
              transmit6();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t7_st == 0)
        {
          int tmp_ndt_8;
          tmp_ndt_8 = __VERIFIER_nondet_int("tmp_ndt_8");
          if (tmp_ndt_8)
          {
            {
              t7_st = 1;
              transmit7();
            }
          }
          else
          {
          }

        }
        else
        {
        }

      }

      while_9_break:
      ;

    }
    return;
  }
}

void fire_delta_events(void)
{
  {
    if (M_E == 0)
    {
      M_E = 1;
    }
    else
    {
    }

    if (T1_E == 0)
    {
      T1_E = 1;
    }
    else
    {
    }

    if (T2_E == 0)
    {
      T2_E = 1;
    }
    else
    {
    }

    if (T3_E == 0)
    {
      T3_E = 1;
    }
    else
    {
    }

    if (T4_E == 0)
    {
      T4_E = 1;
    }
    else
    {
    }

    if (T5_E == 0)
    {
      T5_E = 1;
    }
    else
    {
    }

    if (T6_E == 0)
    {
      T6_E = 1;
    }
    else
    {
    }

    if (T7_E == 0)
    {
      T7_E = 1;
    }
    else
    {
    }

    if (E_1 == 0)
    {
      E_1 = 1;
    }
    else
    {
    }

    if (E_2 == 0)
    {
      E_2 = 1;
    }
    else
    {
    }

    if (E_3 == 0)
    {
      E_3 = 1;
    }
    else
    {
    }

    if (E_4 == 0)
    {
      E_4 = 1;
    }
    else
    {
    }

    if (E_5 == 0)
    {
      E_5 = 1;
    }
    else
    {
    }

    if (E_6 == 0)
    {
      E_6 = 1;
    }
    else
    {
    }

    if (E_7 == 0)
    {
      E_7 = 1;
    }
    else
    {
    }

    return;
  }
}

void reset_delta_events(void)
{
  {
    if (M_E == 1)
    {
      M_E = 2;
    }
    else
    {
    }

    if (T1_E == 1)
    {
      T1_E = 2;
    }
    else
    {
    }

    if (T2_E == 1)
    {
      T2_E = 2;
    }
    else
    {
    }

    if (T3_E == 1)
    {
      T3_E = 2;
    }
    else
    {
    }

    if (T4_E == 1)
    {
      T4_E = 2;
    }
    else
    {
    }

    if (T5_E == 1)
    {
      T5_E = 2;
    }
    else
    {
    }

    if (T6_E == 1)
    {
      T6_E = 2;
    }
    else
    {
    }

    if (T7_E == 1)
    {
      T7_E = 2;
    }
    else
    {
    }

    if (E_1 == 1)
    {
      E_1 = 2;
    }
    else
    {
    }

    if (E_2 == 1)
    {
      E_2 = 2;
    }
    else
    {
    }

    if (E_3 == 1)
    {
      E_3 = 2;
    }
    else
    {
    }

    if (E_4 == 1)
    {
      E_4 = 2;
    }
    else
    {
    }

    if (E_5 == 1)
    {
      E_5 = 2;
    }
    else
    {
    }

    if (E_6 == 1)
    {
      E_6 = 2;
    }
    else
    {
    }

    if (E_7 == 1)
    {
      E_7 = 2;
    }
    else
    {
    }

    return;
  }
}

void activate_threads(void)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  {
    {
      tmp = is_master_triggered();
    }
    if (tmp)
    {
      m_st = 0;
    }
    else
    {
    }

    {
      tmp___0 = is_transmit1_triggered();
    }
    if (tmp___0)
    {
      t1_st = 0;
    }
    else
    {
    }

    {
      tmp___1 = is_transmit2_triggered();
    }
    if (tmp___1)
    {
      t2_st = 0;
    }
    else
    {
    }

    {
      tmp___2 = is_transmit3_triggered();
    }
    if (tmp___2)
    {
      t3_st = 0;
    }
    else
    {
    }

    {
      tmp___3 = is_transmit4_triggered();
    }
    if (tmp___3)
    {
      t4_st = 0;
    }
    else
    {
    }

    {
      tmp___4 = is_transmit5_triggered();
    }
    if (tmp___4)
    {
      t5_st = 0;
    }
    else
    {
    }

    {
      tmp___5 = is_transmit6_triggered();
    }
    if (tmp___5)
    {
      t6_st = 0;
    }
    else
    {
    }

    {
      tmp___6 = is_transmit7_triggered();
    }
    if (tmp___6)
    {
      t7_st = 0;
    }
    else
    {
    }

    return;
  }
}

void immediate_notify(void)
{
  {
    {
      activate_threads();
    }
    return;
  }
}

void fire_time_events(void)
{
  {
    M_E = 1;
    return;
  }
}

void reset_time_events(void)
{
  {
    if (M_E == 1)
    {
      M_E = 2;
    }
    else
    {
    }

    if (T1_E == 1)
    {
      T1_E = 2;
    }
    else
    {
    }

    if (T2_E == 1)
    {
      T2_E = 2;
    }
    else
    {
    }

    if (T3_E == 1)
    {
      T3_E = 2;
    }
    else
    {
    }

    if (T4_E == 1)
    {
      T4_E = 2;
    }
    else
    {
    }

    if (T5_E == 1)
    {
      T5_E = 2;
    }
    else
    {
    }

    if (T6_E == 1)
    {
      T6_E = 2;
    }
    else
    {
    }

    if (T7_E == 1)
    {
      T7_E = 2;
    }
    else
    {
    }

    if (E_1 == 1)
    {
      E_1 = 2;
    }
    else
    {
    }

    if (E_2 == 1)
    {
      E_2 = 2;
    }
    else
    {
    }

    if (E_3 == 1)
    {
      E_3 = 2;
    }
    else
    {
    }

    if (E_4 == 1)
    {
      E_4 = 2;
    }
    else
    {
    }

    if (E_5 == 1)
    {
      E_5 = 2;
    }
    else
    {
    }

    if (E_6 == 1)
    {
      E_6 = 2;
    }
    else
    {
    }

    if (E_7 == 1)
    {
      E_7 = 2;
    }
    else
    {
    }

    return;
  }
}

void init_model(void)
{
  {
    m_i = 1;
    t1_i = 1;
    t2_i = 1;
    t3_i = 1;
    t4_i = 1;
    t5_i = 1;
    t6_i = 1;
    t7_i = 1;
    return;
  }
}

int stop_simulation(void)
{
  int tmp;
  int __retres2;
  {
    {
      tmp = exists_runnable_thread();
    }
    if (tmp)
    {
      __retres2 = 0;
      goto return_label;
    }
    else
    {
    }

    __retres2 = 1;
    return_label:
    return __retres2;

  }
}

void start_simulation(void)
{
  int kernel_st;
  int tmp;
  int tmp___0;
  {
    {
      kernel_st = 0;
      update_channels();
      init_threads();
      fire_delta_events();
      activate_threads();
      reset_delta_events();
    }
    {
      while (1)
      {
        while_10_continue:
        ;

        {
          kernel_st = 1;
          eval();
        }
        {
          kernel_st = 2;
          update_channels();
        }
        {
          kernel_st = 3;
          fire_delta_events();
          activate_threads();
          reset_delta_events();
        }
        {
          tmp = exists_runnable_thread();
        }
        if (tmp == 0)
        {
          {
            kernel_st = 4;
            fire_time_events();
            activate_threads();
            reset_time_events();
          }
        }
        else
        {
        }

        {
          tmp___0 = stop_simulation();
        }
        if (tmp___0)
        {
          goto while_10_break;
        }
        else
        {
        }

      }

      while_10_break:
      ;

    }
    return;
  }
}

int main(void)
{
  int __retres1;
  {
    {
      init_model();
      start_simulation();
    }
    __retres1 = 0;
    return __retres1;
  }
}

