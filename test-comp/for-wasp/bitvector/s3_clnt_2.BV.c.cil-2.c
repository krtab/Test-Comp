extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "s3_clnt_2.BV.c.cil-2.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int ssl3_connect(void)
{
  int s__info_callback = __VERIFIER_nondet_int("s__info_callback");
  int s__in_handshake = __VERIFIER_nondet_int("s__in_handshake");
  int s__state;
  int s__new_session;
  int s__server;
  int s__version = __VERIFIER_nondet_int("s__version");
  int s__type;
  int s__init_num;
  int s__bbio = __VERIFIER_nondet_int("s__bbio");
  int s__wbio = __VERIFIER_nondet_int("s__wbio");
  int s__hit = __VERIFIER_nondet_int("s__hit");
  int s__rwstate;
  int s__init_buf___0;
  int s__debug = __VERIFIER_nondet_int("s__debug");
  int s__shutdown;
  int s__ctx__info_callback = __VERIFIER_nondet_int("s__ctx__info_callback");
  int s__ctx__stats__sess_connect_renegotiate;
  int s__ctx__stats__sess_connect;
  int s__ctx__stats__sess_hit = __VERIFIER_nondet_int("s__ctx__stats__sess_hit");
  int s__ctx__stats__sess_connect_good = __VERIFIER_nondet_int("s__ctx__stats__sess_connect_good");
  int s__s3__change_cipher_spec;
  int s__s3__flags;
  int s__s3__delay_buf_pop_ret;
  int s__s3__tmp__cert_req = __VERIFIER_nondet_int("s__s3__tmp__cert_req");
  int s__s3__tmp__new_compression = __VERIFIER_nondet_int("s__s3__tmp__new_compression");
  int s__s3__tmp__reuse_message = __VERIFIER_nondet_int("s__s3__tmp__reuse_message");
  int s__s3__tmp__new_cipher = __VERIFIER_nondet_int("s__s3__tmp__new_cipher");
  int s__s3__tmp__new_cipher__algorithms = __VERIFIER_nondet_int("s__s3__tmp__new_cipher__algorithms");
  int s__s3__tmp__next_state___0;
  int s__s3__tmp__new_compression__id = __VERIFIER_nondet_int("s__s3__tmp__new_compression__id");
  int s__session__cipher;
  int s__session__compress_meth;
  int buf;
  unsigned long tmp;
  unsigned long l;
  int num1;
  int cb;
  int ret;
  int new_state;
  int state;
  int skip;
  int tmp___0;
  int tmp___1 = __VERIFIER_nondet_int("tmp___1");
  int tmp___2 = __VERIFIER_nondet_int("tmp___2");
  int tmp___3 = __VERIFIER_nondet_int("tmp___3");
  int tmp___4 = __VERIFIER_nondet_int("tmp___4");
  int tmp___5 = __VERIFIER_nondet_int("tmp___5");
  int tmp___6 = __VERIFIER_nondet_int("tmp___6");
  int tmp___7 = __VERIFIER_nondet_int("tmp___7");
  int tmp___8 = __VERIFIER_nondet_int("tmp___8");
  int tmp___9 = __VERIFIER_nondet_int("tmp___9");
  int blastFlag;
  int ag_X;
  int ag_Y = __VERIFIER_nondet_int("ag_Y");
  int __retres59;
  {
    s__state = 12292;
    blastFlag = 0;
    tmp = __VERIFIER_nondet_int("tmp");
    cb = 0;
    ret = -1;
    skip = 0;
    tmp___0 = 0;
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
      else
      {
      }

    }

    s__in_handshake = s__in_handshake + 1;
    if (tmp___1 - 12288)
    {
      if (tmp___2 - 16384)
      {
      }
      else
      {
      }

    }
    else
    {
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
            if (s__state == 4096)
            {
              goto switch_1_4096;
            }
            else
            {
              if (s__state == 20480)
              {
                goto switch_1_20480;
              }
              else
              {
                if (s__state == 4099)
                {
                  goto switch_1_4099;
                }
                else
                {
                  if (s__state == 4368)
                  {
                    goto switch_1_4368;
                  }
                  else
                  {
                    if (s__state == 4369)
                    {
                      goto switch_1_4369;
                    }
                    else
                    {
                      if (s__state == 4384)
                      {
                        goto switch_1_4384;
                      }
                      else
                      {
                        if (s__state == 4385)
                        {
                          goto switch_1_4385;
                        }
                        else
                        {
                          if (s__state == 4400)
                          {
                            goto switch_1_4400;
                          }
                          else
                          {
                            if (s__state == 4401)
                            {
                              goto switch_1_4401;
                            }
                            else
                            {
                              if (s__state == 4416)
                              {
                                goto switch_1_4416;
                              }
                              else
                              {
                                if (s__state == 4417)
                                {
                                  goto switch_1_4417;
                                }
                                else
                                {
                                  if (s__state == 4432)
                                  {
                                    goto switch_1_4432;
                                  }
                                  else
                                  {
                                    if (s__state == 4433)
                                    {
                                      goto switch_1_4433;
                                    }
                                    else
                                    {
                                      if (s__state == 4448)
                                      {
                                        goto switch_1_4448;
                                      }
                                      else
                                      {
                                        if (s__state == 4449)
                                        {
                                          goto switch_1_4449;
                                        }
                                        else
                                        {
                                          if (s__state == 4464)
                                          {
                                            goto switch_1_4464;
                                          }
                                          else
                                          {
                                            if (s__state == 4465)
                                            {
                                              goto switch_1_4465;
                                            }
                                            else
                                            {
                                              if (s__state == 4466)
                                              {
                                                goto switch_1_4466;
                                              }
                                              else
                                              {
                                                if (s__state == 4467)
                                                {
                                                  goto switch_1_4467;
                                                }
                                                else
                                                {
                                                  if (s__state == 4480)
                                                  {
                                                    goto switch_1_4480;
                                                  }
                                                  else
                                                  {
                                                    if (s__state == 4481)
                                                    {
                                                      goto switch_1_4481;
                                                    }
                                                    else
                                                    {
                                                      if (s__state == 4496)
                                                      {
                                                        goto switch_1_4496;
                                                      }
                                                      else
                                                      {
                                                        if (s__state == 4497)
                                                        {
                                                          goto switch_1_4497;
                                                        }
                                                        else
                                                        {
                                                          if (s__state == 4512)
                                                          {
                                                            goto switch_1_4512;
                                                          }
                                                          else
                                                          {
                                                            if (s__state == 4513)
                                                            {
                                                              goto switch_1_4513;
                                                            }
                                                            else
                                                            {
                                                              if (s__state == 4528)
                                                              {
                                                                goto switch_1_4528;
                                                              }
                                                              else
                                                              {
                                                                if (s__state == 4529)
                                                                {
                                                                  goto switch_1_4529;
                                                                }
                                                                else
                                                                {
                                                                  if (s__state == 4560)
                                                                  {
                                                                    goto switch_1_4560;
                                                                  }
                                                                  else
                                                                  {
                                                                    if (s__state == 4561)
                                                                    {
                                                                      goto switch_1_4561;
                                                                    }
                                                                    else
                                                                    {
                                                                      if (s__state == 4352)
                                                                      {
                                                                        goto switch_1_4352;
                                                                      }
                                                                      else
                                                                      {
                                                                        if (s__state == 3)
                                                                        {
                                                                          goto switch_1_3;
                                                                        }
                                                                        else
                                                                        {
                                                                          {
                                                                            goto switch_1_default;
                                                                            if (0)
                                                                            {
                                                                              switch_1_12292:
                                                                              s__new_session = 1;

                                                                              s__state = 4096;
                                                                              s__ctx__stats__sess_connect_renegotiate = s__ctx__stats__sess_connect_renegotiate + 1;
                                                                              switch_1_16384:
                                                                              ;

                                                                              switch_1_4096:
                                                                              ;

                                                                              switch_1_20480:
                                                                              ;

                                                                              switch_1_4099:
                                                                              s__server = 0;

                                                                              if (cb != 0)
                                                                              {
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if ((s__version - 65280) != 768)
                                                                              {
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__type = 4096;
                                                                              if (s__init_buf___0 == 0)
                                                                              {
                                                                                buf = __VERIFIER_nondet_int("buf");
                                                                                if (buf == 0)
                                                                                {
                                                                                  ret = -1;
                                                                                  goto end;
                                                                                }
                                                                                else
                                                                                {
                                                                                }

                                                                                if (!tmp___3)
                                                                                {
                                                                                  ret = -1;
                                                                                  goto end;
                                                                                }
                                                                                else
                                                                                {
                                                                                }

                                                                                s__init_buf___0 = buf;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (!tmp___4)
                                                                              {
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (!tmp___5)
                                                                              {
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = 4368;
                                                                              s__ctx__stats__sess_connect = s__ctx__stats__sess_connect + 1;
                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4368:
                                                                              ;

                                                                              switch_1_4369:
                                                                              s__shutdown = 0;

                                                                              ret = __VERIFIER_nondet_int("ret");
                                                                              if (blastFlag == 0)
                                                                              {
                                                                                blastFlag = 1;
                                                                              }
                                                                              else
                                                                              {
                                                                                if (blastFlag == 4)
                                                                                {
                                                                                  blastFlag = 5;
                                                                                }
                                                                                else
                                                                                {
                                                                                }

                                                                              }

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = 4384;
                                                                              s__init_num = 0;
                                                                              if (s__bbio != s__wbio)
                                                                              {
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              goto switch_1_break;
                                                                              switch_1_4384:
                                                                              ;

                                                                              switch_1_4385:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (blastFlag == 1)
                                                                              {
                                                                                blastFlag = 2;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (s__hit)
                                                                              {
                                                                                s__state = 4560;
                                                                              }
                                                                              else
                                                                              {
                                                                                s__state = 4400;
                                                                              }

                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4400:
                                                                              ;

                                                                              switch_1_4401:
                                                                              ;

                                                                              if (((unsigned long) s__s3__tmp__new_cipher__algorithms) - 256UL)
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
                                                                                else
                                                                                {
                                                                                }

                                                                                if (ret <= 0)
                                                                                {
                                                                                  goto end;
                                                                                }
                                                                                else
                                                                                {
                                                                                }

                                                                              }

                                                                              s__state = 4416;
                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4416:
                                                                              ;

                                                                              switch_1_4417:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (blastFlag == 3)
                                                                              {
                                                                                blastFlag = 4;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = 4432;
                                                                              ag_X = (unsigned short) 65535;
                                                                              s__init_num = 0;
                                                                              if (!tmp___6)
                                                                              {
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              goto switch_1_break;
                                                                              switch_1_4432:
                                                                              ;

                                                                              switch_1_4433:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (blastFlag == 5)
                                                                              {
                                                                                goto ERROR;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = ag_X ^ ag_Y;
                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4448:
                                                                              ;

                                                                              switch_1_4449:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (s__s3__tmp__cert_req)
                                                                              {
                                                                                s__state = 4464;
                                                                              }
                                                                              else
                                                                              {
                                                                                s__state = 4480;
                                                                              }

                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4464:
                                                                              ;

                                                                              switch_1_4465:
                                                                              ;

                                                                              switch_1_4466:
                                                                              ;

                                                                              switch_1_4467:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = 4480;
                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4480:
                                                                              ;

                                                                              switch_1_4481:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              l = s__s3__tmp__new_cipher__algorithms;
                                                                              if (s__s3__tmp__cert_req == 1)
                                                                              {
                                                                                s__state = 4496;
                                                                              }
                                                                              else
                                                                              {
                                                                                s__state = 4512;
                                                                                s__s3__change_cipher_spec = 0;
                                                                              }

                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4496:
                                                                              ;

                                                                              switch_1_4497:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = 4512;
                                                                              s__init_num = 0;
                                                                              s__s3__change_cipher_spec = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4512:
                                                                              ;

                                                                              switch_1_4513:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = 4528;
                                                                              s__init_num = 0;
                                                                              s__session__cipher = s__s3__tmp__new_cipher;
                                                                              if (s__s3__tmp__new_compression == 0)
                                                                              {
                                                                                s__session__compress_meth = 0;
                                                                              }
                                                                              else
                                                                              {
                                                                                s__session__compress_meth = s__s3__tmp__new_compression__id;
                                                                              }

                                                                              if (!tmp___7)
                                                                              {
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (!tmp___8)
                                                                              {
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              goto switch_1_break;
                                                                              switch_1_4528:
                                                                              ;

                                                                              switch_1_4529:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__state = 4352;
                                                                              s__s3__flags = ((long) s__s3__flags) - (-5L);
                                                                              if (s__hit)
                                                                              {
                                                                                s__s3__tmp__next_state___0 = 3;
                                                                                if (((long) s__s3__flags) - 2L)
                                                                                {
                                                                                  s__state = 3;
                                                                                  s__s3__flags = ((long) s__s3__flags) + 4L;
                                                                                  s__s3__delay_buf_pop_ret = 0;
                                                                                }
                                                                                else
                                                                                {
                                                                                }

                                                                              }
                                                                              else
                                                                              {
                                                                                s__s3__tmp__next_state___0 = 4560;
                                                                              }

                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4560:
                                                                              ;

                                                                              switch_1_4561:
                                                                              ret = __VERIFIER_nondet_int("ret");

                                                                              if (ret <= 0)
                                                                              {
                                                                                goto end;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              if (s__hit)
                                                                              {
                                                                                s__state = 4512;
                                                                              }
                                                                              else
                                                                              {
                                                                                s__state = 3;
                                                                              }

                                                                              s__init_num = 0;
                                                                              goto switch_1_break;
                                                                              switch_1_4352:
                                                                              if (((long) num1) > 0L)
                                                                              {
                                                                                s__rwstate = 2;
                                                                                num1 = tmp___9;
                                                                                if (((long) num1) <= 0L)
                                                                                {
                                                                                  ret = -1;
                                                                                  goto end;
                                                                                }
                                                                                else
                                                                                {
                                                                                }

                                                                                s__rwstate = 1;
                                                                              }
                                                                              else
                                                                              {
                                                                              }


                                                                              s__state = s__s3__tmp__next_state___0;
                                                                              goto switch_1_break;
                                                                              switch_1_3:
                                                                              if (s__init_buf___0 != 0)
                                                                              {
                                                                                s__init_buf___0 = 0;
                                                                              }
                                                                              else
                                                                              {
                                                                              }


                                                                              if (!(((long) s__s3__flags) - 4L))
                                                                              {
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              s__init_num = 0;
                                                                              s__new_session = 0;
                                                                              if (s__hit)
                                                                              {
                                                                                s__ctx__stats__sess_hit = s__ctx__stats__sess_hit + 1;
                                                                              }
                                                                              else
                                                                              {
                                                                              }

                                                                              ret = 1;
                                                                              s__ctx__stats__sess_connect_good = s__ctx__stats__sess_connect_good + 1;
                                                                              if (cb != 0)
                                                                              {
                                                                              }
                                                                              else
                                                                              {
                                                                              }

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
              else
              {
              }

            }
            else
            {
            }

            if (cb != 0)
            {
              if (s__state != state)
              {
                new_state = s__state;
                s__state = state;
                s__state = new_state;
              }
              else
              {
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
        else
        {
        }

        skip = 0;
      }

      while_0_break:
      ;

    }
    end:
    s__in_handshake = s__in_handshake - 1;

    if (cb != 0)
    {
    }
    else
    {
    }

    __retres59 = ret;
    goto return_label;
    ERROR:
    {
      reach_error();
      abort();
    }

    {
    }
    __retres59 = -1;
    return_label:
    return __retres59;

  }
}

int main(void)
{
  int __retres1;
  {
    {
      ssl3_connect();
    }
    __retres1 = 0;
    return __retres1;
  }
}

