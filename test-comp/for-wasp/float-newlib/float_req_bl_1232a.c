extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_1232a.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
int __fpclassify_float(float x)
{
  __uint32_t w;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    w = gf_u.word;
  }
  while (0);
  if (__logor(w == 0x00000000, w == 0x80000000))
    return 2;
  else
    if (__logor(__logand(w >= 0x00800000, w <= 0x7f7fffff), __logand(w >= 0x80800000, w <= 0xff7fffff)))
    return 4;
  else
    if (__logor(__logand(w >= 0x00000001, w <= 0x007fffff), __logand(w >= 0x80000001, w <= 0x807fffff)))
    return 3;
  else
    if (__logor(w == 0x7f800000, w == 0xff800000))
    return 1;
  else
    return 0;




}

float fmin_float(float x, float y)
{
  if (__fpclassify_float(x) == 0)
    return y;

  if (__fpclassify_float(y) == 0)
    return x;

  return (x < y) ? (x) : (y);
}

int __signbit_float(float x)
{
  __uint32_t w;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    w = gf_u.word;
  }
  while (0);
  return (w & 0x80000000) != 0;
}

int main()
{
  float x = 0.0f;
  float y = -0.0f;
  float res = fmin_float(x, y);
  if (!__logand(res == (-0.0f), __signbit_float(res) == 1))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

