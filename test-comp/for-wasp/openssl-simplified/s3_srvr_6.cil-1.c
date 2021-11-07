extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "s3_srvr_6.cil-1.c", 3, "reach_error");
}

extern char __VERIFIER_nondet_char(char *);
extern int __VERIFIER_nondet_int(char *);
extern long __VERIFIER_nondet_long(char *);
extern int __VERIFIER_nondet_int(char *);
int ssl3_accept(int initial_state)
{
  int s__info_callback = __VERIFIER_nondet_int("s__info_callback");
  int s__in_handshake = __VERIFIER_nondet_int("s__in_handshake");
  int s__state;
  int s__new_session;
  int s__server;
  int s__version = __VERIFIER_nondet_int("s__version");
  int s__type;
  int s__init_num;
  int s__hit = __VERIFIER_nondet_int("s__hit");
  int s__rwstate;
  int s__init_buf___0 = 1;
  int s__debug = __VERIFIER_nondet_int("s__debug");
  int s__shutdown;
  int s__cert = __VERIFIER_nondet_int("s__cert");
  int s__options = __VERIFIER_nondet_int("s__options");
  int s__verify_mode = __VERIFIER_nondet_int("s__verify_mode");
  int s__session__peer = __VERIFIER_nondet_int("s__session__peer");
  int s__cert__pkeys__AT0__privatekey = __VERIFIER_nondet_int("s__cert__pkeys__AT0__privatekey");
  int s__ctx__info_callback = __VERIFIER_nondet_int("s__ctx__info_callback");
  int s__ctx__stats__sess_accept_renegotiate = __VERIFIER_nondet_int("s__ctx__stats__sess_accept_renegotiate");
  int s__ctx__stats__sess_accept = __VERIFIER_nondet_int("s__ctx__stats__sess_accept");
  int s__ctx__stats__sess_accept_good = __VERIFIER_nondet_int("s__ctx__stats__sess_accept_good");
  int s__s3__tmp__cert_request;
  int s__s3__tmp__reuse_message = __VERIFIER_nondet_int("s__s3__tmp__reuse_message");
  int s__s3__tmp__use_rsa_tmp;
  int s__s3__tmp__new_cipher = __VERIFIER_nondet_int("s__s3__tmp__new_cipher");
  int s__s3__tmp__new_cipher__algorithms = __VERIFIER_nondet_int("s__s3__tmp__new_cipher__algorithms");
  int s__s3__tmp__next_state___0;
  int s__s3__tmp__new_cipher__algo_strength = __VERIFIER_nondet_int("s__s3__tmp__new_cipher__algo_strength");
  int s__session__cipher;
  int buf;
  unsigned long l;
  unsigned long Time;
  unsigned long tmp;
  int cb;
  long num1 = __VERIFIER_nondet_long("num1");
  int ret;
  int new_state;
  int state;
  int skip;
  int got_new_session;
  int tmp___1 = __VERIFIER_nondet_int("tmp___1");
  int tmp___2 = __VERIFIER_nondet_int("tmp___2");
  int tmp___3 = __VERIFIER_nondet_int("tmp___3");
  int tmp___4 = __VERIFIER_nondet_int("tmp___4");
  int tmp___5 = __VERIFIER_nondet_int("tmp___5");
  int tmp___6 = __VERIFIER_nondet_int("tmp___6");
  int tmp___7;
  long tmp___8 = __VERIFIER_nondet_long("tmp___8");
  int tmp___9 = __VERIFIER_nondet_int("tmp___9");
  int tmp___10 = __VERIFIER_nondet_int("tmp___10");
  int blastFlag;
  int __cil_tmp55;
  unsigned long __cil_tmp56;
  unsigned long __cil_tmp57;
  unsigned long __cil_tmp58;
  unsigned long __cil_tmp59;
  int __cil_tmp60;
  unsigned long __cil_tmp61;
  {
    ;
    s__state = initial_state;
    blastFlag = 0;
    tmp = __VERIFIER_nondet_int("tmp");
    Time = tmp;
    cb = 0;
    ret = -1;
    skip = 0;
    got_new_session = 0;
    if (s__info_callback != 0)
    {
      cb = s__info_callback;
    }
    else
    {
      if (s__ctx__info_callback != 0)
      {
        cb = s__ctx__info_callback;
      }

      if (cb != 0)
      {
        goto ERROR;
      }

    }

    s__in_handshake++;
    if (tmp___1 + 12288)
    {
      if (tmp___2 + 16384)
      {
      }

    }

    if (s__cert == 0)
    {
      return -1;
    }

    {
      while (1)
      {
        while_0_continue:
        ;

        state = s__state;
        if (s__state == 12292)
        {
          goto switch_1_12292;
        }
        else
        {
          if (s__state == 16384)
          {
            goto switch_1_16384;
          }
          else
          {
            if (s__state == 8192)
            {
              goto switch_1_8192;
            }
            else
            {
              if (s__state == 24576)
              {
                goto switch_1_24576;
              }
              else
              {
                if (s__state == 8195)
                {
                  goto switch_1_8195;
                }
                else
                {
                  if (s__state == 8480)
                  {
                    goto switch_1_8480;
                  }
                  else
                  {
                    if (s__state == 8481)
                    {
                      goto switch_1_8481;
                    }
                    else
                    {
                      if (s__state == 8482)
                      {
                        goto switch_1_8482;
                      }
                      else
                      {
                        if (s__state == 8464)
                        {
                          goto switch_1_8464;
                        }
                        else
                        {
                          if (s__state == 8465)
                          {
                            goto switch_1_8465;
                          }
                          else
                          {
                            if (s__state == 8466)
                            {
                              goto switch_1_8466;
                            }
                            else
                            {
                              if (s__state == 8496)
                              {
                                goto switch_1_8496;
                              }
                              else
                              {
                                if (s__state == 8497)
                                {
                                  goto switch_1_8497;
                                }
                                else
                                {
                                  if (s__state == 8512)
                                  {
                                    goto switch_1_8512;
                                  }
                                  else
                                  {
                                    if (s__state == 8513)
                                    {
                                      goto switch_1_8513;
                                    }
                                    else
                                    {
                                      if (s__state == 8528)
                                      {
                                        goto switch_1_8528;
                                      }
                                      else
                                      {
                                        if (s__state == 8529)
                                        {
                                          goto switch_1_8529;
                                        }
                                        else
                                        {
                                          if (s__state == 8544)
                                          {
                                            goto switch_1_8544;
                                          }
                                          else
                                          {
                                            if (s__state == 8545)
                                            {
                                              goto switch_1_8545;
                                            }
                                            else
                                            {
                                              if (s__state == 8560)
                                              {
                                                goto switch_1_8560;
                                              }
                                              else
                                              {
                                                if (s__state == 8561)
                                                {
                                                  goto switch_1_8561;
                                                }
                                                else
                                                {
                                                  if (s__state == 8448)
                                                  {
                                                    goto switch_1_8448;
                                                  }
                                                  else
                                                  {
                                                    if (s__state == 8576)
                                                    {
                                                      goto switch_1_8576;
                                                    }
                                                    else
                                                    {
                                                      if (s__state == 8577)
                                                      {
                                                        goto switch_1_8577;
                                                      }
                                                      else
                                                      {
                                                        if (s__state == 8592)
                                                        {
                                                          goto switch_1_8592;
                                                        }
                                                        else
                                                        {
                                                          if (s__state == 8593)
                                                          {
                                                            goto switch_1_8593;
                                                          }
                                                          else
                                                          {
                                                            if (s__state == 8608)
                                                            {
                                                              goto switch_1_8608;
                                                            }
                                                            else
                                                            {
                                                              if (s__state == 8609)
                                                              {
                                                                goto switch_1_8609;
                                                              }
                                                              else
                                                              {
                                                                if (s__state == 8640)
                                                                {
                                                                  goto switch_1_8640;
                                                                }
                                                                else
                                                                {
                                                                  if (s__state == 8641)
                                                                  {
                                                                    goto switch_1_8641;
                                                                  }
                                                                  else
                                                                  {
                                                                    if (s__state == 8656)
                                                                    {
                                                                      goto switch_1_8656;
                                                                    }
                                                                    else
                                                                    {
                                                                      if (s__state == 8657)
                                                                      {
                                                                        goto switch_1_8657;
                                                                      }
                                                                      else
                                                                      {
                                                                        if (s__state == 8672)
                                                                        {
                                                                          goto switch_1_8672;
                                                                        }
                                                                        else
                                                                        {
                                                                          if (s__state == 8673)
                                                                          {
                                                                            goto switch_1_8673;
                                                                          }
                                                                          else
                                                                          {
                                                                            if (s__state == 3)
                                                                            {
                                                                              goto switch_1_3;
                                                                            }
                                                                            else
                                                                            {
                                                                              goto switch_1_default;
                                                                              if (0)
                                                                              {
                                                                                switch_1_12292:
                                                                                s__new_session = 1;

                                                                                switch_1_16384:
                                                                                ;

                                                                                switch_1_8192:
                                                                                ;

                                                                                switch_1_24576:
                                                                                ;

                                                                                switch_1_8195:
                                                                                s__server = 1;

                                                                                if (cb != 0)
                                                                                {
                                                                                }

                                                                                {
                                                                                  __cil_tmp55 = s__version * 8;
                                                                                  if (__cil_tmp55 != 3)
                                                                                  {
                                                                                    return -1;
                                                                                  }

                                                                                }
                                                                                s__type = 8192;
                                                                                if (s__init_buf___0 == 0)
                                                                                {
                                                                                  buf = __VERIFIER_nondet_int("buf");
                                                                                  if (buf == 0)
                                                                                  {
                                                                                    ret = -1;
                                                                                    goto end;
                                                                                  }

                                                                                  if (!tmp___3)
                                                                                  {
                                                                                    ret = -1;
                                                                                    goto end;
                                                                                  }

                                                                                  s__init_buf___0 = buf;
                                                                                }

                                                                                if (!tmp___4)
                                                                                {
                                                                                  ret = -1;
                                                                                  goto end;
                                                                                }

                                                                                s__init_num = 0;
                                                                                if (s__state != 12292)
                                                                                {
                                                                                  if (!tmp___5)
                                                                                  {
                                                                                    ret = -1;
                                                                                    goto end;
                                                                                  }

                                                                                  s__state = 8464;
                                                                                  s__ctx__stats__sess_accept++;
                                                                                }
                                                                                else
                                                                                {
                                                                                  s__ctx__stats__sess_accept_renegotiate++;
                                                                                  s__state = 8480;
                                                                                }

                                                                                goto switch_1_break;
                                                                                switch_1_8480:
                                                                                ;

                                                                                switch_1_8481:
                                                                                s__shutdown = 0;

                                                                                ret = __VERIFIER_nondet_int("ret");
                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                s__s3__tmp__next_state___0 = 8482;
                                                                                s__state = 8448;
                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8482:
                                                                                s__state = 3;

                                                                                goto switch_1_break;
                                                                                switch_1_8464:
                                                                                ;

                                                                                switch_1_8465:
                                                                                ;

                                                                                switch_1_8466:
                                                                                s__shutdown = 0;

                                                                                ret = __VERIFIER_nondet_int("ret");
                                                                                if (blastFlag == 0)
                                                                                {
                                                                                  blastFlag = 1;
                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                got_new_session = 1;
                                                                                s__state = 8496;
                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8496:
                                                                                ;

                                                                                switch_1_8497:
                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                if (blastFlag == 1)
                                                                                {
                                                                                  blastFlag = 2;
                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                if (s__hit)
                                                                                {
                                                                                  s__state = 8656;
                                                                                }
                                                                                else
                                                                                {
                                                                                  s__state = 8512;
                                                                                }

                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8512:
                                                                                ;

                                                                                switch_1_8513:
                                                                                ;

                                                                                {
                                                                                  __cil_tmp56 = (unsigned long) s__s3__tmp__new_cipher__algorithms;
                                                                                  if (__cil_tmp56 + 256UL)
                                                                                  {
                                                                                    skip = 1;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    ret = __VERIFIER_nondet_int("ret");
                                                                                    if (blastFlag == 2)
                                                                                    {
                                                                                      blastFlag = 3;
                                                                                    }

                                                                                    if (ret <= 0)
                                                                                    {
                                                                                      goto end;
                                                                                    }

                                                                                  }

                                                                                }
                                                                                s__state = 8528;
                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8528:
                                                                                ;

                                                                                switch_1_8529:
                                                                                l = (unsigned long) s__s3__tmp__new_cipher__algorithms;

                                                                                {
                                                                                  __cil_tmp57 = (unsigned long) s__options;
                                                                                  if (__cil_tmp57 + 2097152UL)
                                                                                  {
                                                                                    s__s3__tmp__use_rsa_tmp = 1;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    s__s3__tmp__use_rsa_tmp = 0;
                                                                                  }

                                                                                }
                                                                                if (s__s3__tmp__use_rsa_tmp)
                                                                                {
                                                                                  goto _L___0;
                                                                                }
                                                                                else
                                                                                {
                                                                                  if (l + 30UL)
                                                                                  {
                                                                                    goto _L___0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    if (l + 1UL)
                                                                                    {
                                                                                      if (s__cert__pkeys__AT0__privatekey == 0)
                                                                                      {
                                                                                        goto _L___0;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        {
                                                                                          __cil_tmp58 = (unsigned long) s__s3__tmp__new_cipher__algo_strength;
                                                                                          if (__cil_tmp58 + 2UL)
                                                                                          {
                                                                                            {
                                                                                              __cil_tmp59 = (unsigned long) s__s3__tmp__new_cipher__algo_strength;
                                                                                              if (__cil_tmp59 + 4UL)
                                                                                              {
                                                                                                tmp___7 = 512;
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                tmp___7 = 1024;
                                                                                              }

                                                                                            }
                                                                                            {
                                                                                              __cil_tmp60 = tmp___6 * 8;
                                                                                              if (__cil_tmp60 > tmp___7)
                                                                                              {
                                                                                                _L___0:
                                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                                if (blastFlag == 3)
                                                                                                {
                                                                                                  blastFlag = 4;
                                                                                                }

                                                                                                if (ret <= 0)
                                                                                                {
                                                                                                  goto end;
                                                                                                }

                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                skip = 1;
                                                                                              }

                                                                                            }
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            skip = 1;
                                                                                          }

                                                                                        }
                                                                                      }

                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      skip = 1;
                                                                                    }

                                                                                  }

                                                                                }

                                                                                s__state = 8544;
                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8544:
                                                                                ;

                                                                                switch_1_8545:
                                                                                ;

                                                                                if (s__verify_mode + 1)
                                                                                {
                                                                                  if (s__session__peer != 0)
                                                                                  {
                                                                                    if (s__verify_mode + 4)
                                                                                    {
                                                                                      skip = 1;
                                                                                      s__s3__tmp__cert_request = 0;
                                                                                      s__state = 8560;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      goto _L___2;
                                                                                    }

                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    _L___2:
                                                                                    {
                                                                                      __cil_tmp61 = (unsigned long) s__s3__tmp__new_cipher__algorithms;
                                                                                      if (__cil_tmp61 + 256UL)
                                                                                      {
                                                                                        if (s__verify_mode + 2)
                                                                                        {
                                                                                          goto _L___1;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          skip = 1;
                                                                                          s__s3__tmp__cert_request = 0;
                                                                                          s__state = 8560;
                                                                                        }

                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        _L___1:
                                                                                        s__s3__tmp__cert_request = 1;

                                                                                        ret = __VERIFIER_nondet_int("ret");
                                                                                        if (blastFlag == 4)
                                                                                        {
                                                                                          blastFlag = 5;
                                                                                        }

                                                                                        if (ret <= 0)
                                                                                        {
                                                                                          goto end;
                                                                                        }

                                                                                        s__state = 8448;
                                                                                        s__s3__tmp__next_state___0 = 8576;
                                                                                        s__init_num = 0;
                                                                                      }

                                                                                    }

                                                                                  }

                                                                                }
                                                                                else
                                                                                {
                                                                                  skip = 1;
                                                                                  s__s3__tmp__cert_request = 0;
                                                                                  s__state = 8560;
                                                                                }

                                                                                goto switch_1_break;
                                                                                switch_1_8560:
                                                                                ;

                                                                                switch_1_8561:
                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                s__s3__tmp__next_state___0 = 8576;
                                                                                s__state = 8448;
                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8448:
                                                                                if (num1 > 0L)
                                                                                {
                                                                                  s__rwstate = 2;
                                                                                  num1 = tmp___8;
                                                                                  if (num1 <= 0L)
                                                                                  {
                                                                                    ret = -1;
                                                                                    goto end;
                                                                                  }

                                                                                  s__rwstate = 1;
                                                                                }


                                                                                s__state = s__s3__tmp__next_state___0;
                                                                                goto switch_1_break;
                                                                                switch_1_8576:
                                                                                ;

                                                                                switch_1_8577:
                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                if (blastFlag == 5)
                                                                                {
                                                                                  blastFlag = 6;
                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                if (ret == 2)
                                                                                {
                                                                                  s__state = 8466;
                                                                                }
                                                                                else
                                                                                {
                                                                                  ret = __VERIFIER_nondet_int("ret");
                                                                                  if (blastFlag == 6)
                                                                                  {
                                                                                    blastFlag = 7;
                                                                                  }

                                                                                  if (ret <= 0)
                                                                                  {
                                                                                    goto end;
                                                                                  }

                                                                                  s__init_num = 0;
                                                                                  s__state = 8592;
                                                                                }

                                                                                goto switch_1_break;
                                                                                switch_1_8592:
                                                                                ;

                                                                                switch_1_8593:
                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                if (blastFlag == 7)
                                                                                {
                                                                                  blastFlag = 8;
                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                s__state = 8608;
                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8608:
                                                                                ;

                                                                                switch_1_8609:
                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                if (blastFlag == 8)
                                                                                {
                                                                                  blastFlag = 9;
                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                s__state = 8640;
                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8640:
                                                                                ;

                                                                                switch_1_8641:
                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                if (blastFlag == 9)
                                                                                {
                                                                                  blastFlag = 10;
                                                                                }
                                                                                else
                                                                                {
                                                                                  if (blastFlag == 12)
                                                                                  {
                                                                                    blastFlag = 13;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    if (blastFlag == 15)
                                                                                    {
                                                                                      blastFlag = 16;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      if (blastFlag == 18)
                                                                                      {
                                                                                        blastFlag = 19;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        if (blastFlag == 21)
                                                                                        {
                                                                                          goto ERROR;
                                                                                        }

                                                                                      }

                                                                                    }

                                                                                  }

                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                if (s__hit)
                                                                                {
                                                                                  s__state = 3;
                                                                                }
                                                                                else
                                                                                {
                                                                                  s__state = 8656;
                                                                                }

                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_8656:
                                                                                ;

                                                                                switch_1_8657:
                                                                                s__session__cipher = s__s3__tmp__new_cipher;

                                                                                if (!tmp___9)
                                                                                {
                                                                                  ret = -1;
                                                                                  goto end;
                                                                                }

                                                                                ret = __VERIFIER_nondet_int("ret");
                                                                                if (blastFlag == 10)
                                                                                {
                                                                                  blastFlag = 11;
                                                                                }
                                                                                else
                                                                                {
                                                                                  if (blastFlag == 13)
                                                                                  {
                                                                                    blastFlag = 14;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    if (blastFlag == 16)
                                                                                    {
                                                                                      blastFlag = 17;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      if (blastFlag == 19)
                                                                                      {
                                                                                        blastFlag = 20;
                                                                                      }

                                                                                    }

                                                                                  }

                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                s__state = 8672;
                                                                                s__init_num = 0;
                                                                                if (!tmp___10)
                                                                                {
                                                                                  ret = -1;
                                                                                  goto end;
                                                                                }

                                                                                goto switch_1_break;
                                                                                switch_1_8672:
                                                                                ;

                                                                                switch_1_8673:
                                                                                ret = __VERIFIER_nondet_int("ret");

                                                                                if (blastFlag == 11)
                                                                                {
                                                                                  blastFlag = 12;
                                                                                }
                                                                                else
                                                                                {
                                                                                  if (blastFlag == 14)
                                                                                  {
                                                                                    blastFlag = 15;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    if (blastFlag == 17)
                                                                                    {
                                                                                      blastFlag = 18;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      if (blastFlag == 20)
                                                                                      {
                                                                                        blastFlag = 21;
                                                                                      }

                                                                                    }

                                                                                  }

                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }

                                                                                s__state = 8448;
                                                                                if (s__hit)
                                                                                {
                                                                                  s__s3__tmp__next_state___0 = 8640;
                                                                                }
                                                                                else
                                                                                {
                                                                                  s__s3__tmp__next_state___0 = 3;
                                                                                }

                                                                                s__init_num = 0;
                                                                                goto switch_1_break;
                                                                                switch_1_3:
                                                                                s__init_buf___0 = 0;

                                                                                s__init_num = 0;
                                                                                if (got_new_session)
                                                                                {
                                                                                  s__new_session = 0;
                                                                                  s__ctx__stats__sess_accept_good++;
                                                                                  if (cb != 0)
                                                                                  {
                                                                                  }

                                                                                }

                                                                                ret = 1;
                                                                                goto end;
                                                                                switch_1_default:
                                                                                ret = -1;

                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                                switch_1_break:
                                                                                ;

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

                        }

                      }

                    }

                  }

                }

              }

            }

          }

        }

        if (!s__s3__tmp__reuse_message)
        {
          if (!skip)
          {
            if (s__debug)
            {
              ret = __VERIFIER_nondet_int("ret");
              if (ret <= 0)
              {
                goto end;
              }

            }

            if (cb != 0)
            {
              if (s__state != state)
              {
                new_state = s__state;
                s__state = state;
                s__state = new_state;
              }

            }

          }

        }

        skip = 0;
      }

      while_0_break:
      ;

    }
    end:
    s__in_handshake--;

    if (cb != 0)
    {
    }

    return ret;
    ERROR:
    {
      reach_error();
      abort();
    }

    return -1;
  }
}

int main(void)
{
  int s;
  int tmp;
  {
    {
      s = 8464;
      tmp = ssl3_accept(s);
    }
    return tmp;
  }
}

