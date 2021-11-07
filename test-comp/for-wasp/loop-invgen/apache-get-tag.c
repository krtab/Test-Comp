extern void abort(void);
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
void reach_error()
{
  assert(0);
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
}

int __VERIFIER_nondet_int();
int main()
{
  int tagbuf_len;
  int t;
  tagbuf_len = __VERIFIER_nondet_int("tagbuf_len");
  if (tagbuf_len >= 1)
    ;
  else
    goto END;

  t = 0;
  --tagbuf_len;
  while (1)
  {
    if (t == tagbuf_len)
    {
      __VERIFIER_assert(0 <= t);
      __VERIFIER_assert(t <= tagbuf_len);
      goto END;
    }

    if (__VERIFIER_nondet_int("if_1"))
    {
      break;
    }

    __VERIFIER_assert(0 <= t);
    __VERIFIER_assert(t <= tagbuf_len);
    t++;
  }

  __VERIFIER_assert(0 <= t);
  __VERIFIER_assert(t <= tagbuf_len);
  t++;
  while (1)
  {
    if (t == tagbuf_len)
    {
      __VERIFIER_assert(0 <= t);
      __VERIFIER_assert(t <= tagbuf_len);
      goto END;
    }

    if (__VERIFIER_nondet_int("if_2"))
    {
      if (__VERIFIER_nondet_int("if_3"))
      {
        __VERIFIER_assert(0 <= t);
        __VERIFIER_assert(t <= tagbuf_len);
        t++;
        if (t == tagbuf_len)
        {
          __VERIFIER_assert(0 <= t);
          __VERIFIER_assert(t <= tagbuf_len);
          goto END;
        }

      }

    }
    else
      if (__VERIFIER_nondet_int("if_4"))
    {
      break;
    }


    __VERIFIER_assert(0 <= t);
    __VERIFIER_assert(t <= tagbuf_len);
    t++;
  }

  __VERIFIER_assert(0 <= t);
  __VERIFIER_assert(t <= tagbuf_len);
  END:
  return 0;

}

