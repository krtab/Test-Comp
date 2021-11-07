extern void *calloc(unsigned int nmemb, unsigned int size);
extern void *malloc(unsigned int size);
extern void free(void *);
extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
void assume_cycle_if_not(int cond)
{
  if (!cond)
    while (1)
    ;


}

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "tree_del_iter.c", 14, "reach_error");
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    reach_error();
    abort();
  }

}

struct node
{
  int data;
  struct node *left;
  struct node *right;
};
struct node *nondet_tree()
{
  if (__VERIFIER_nondet_bool("if_1"))
  {
    return 0;
  }
  else
  {
    struct node *n = (struct node *) malloc(sizeof(struct node));
    n->data = __VERIFIER_nondet_int("data");
    n->left = nondet_tree();
    n->right = nondet_tree();
    return n;
  }

}

int min(struct node *n)
{
  if (!n)
  {
    return 2147483647;
  }
  else
  {
    int a = n->data;
    int b = min(n->left);
    int c = min(n->right);
    if (__logand(b <= a, b <= c))
      return b;

    if (__logand(c <= a, c <= b))
      return c;

    return a;
  }

}

struct node *tree_del(struct node *t, int *min)
{
  int m;
  struct node *p = t->left;
  struct node *pp;
  struct node *tt;
  if (!p)
  {
    m = t->data;
    tt = t->right;
    free(t);
    t = tt;
  }
  else
  {
    pp = t;
    tt = p->left;
    while (tt)
    {
      pp = p;
      p = tt;
      tt = p->left;
    }

    m = p->data;
    tt = p->right;
    free(p);
    pp->left = tt;
  }

  *min = m;
  return t;
}

int tree_inorder(struct node *t, int *a, int i)
{
  if (!t)
  {
    return i;
  }
  else
  {
    i = tree_inorder(t->left, a, i);
    a[i++] = t->data;
    i = tree_inorder(t->right, a, i);
    return i;
  }

}

int size(struct node *t)
{
  if (!t)
    return 0;
  else
    return (size(t->left) + size(t->right)) + 1;

}

void task(struct node *t)
{
  int a = min(t);
  int b;
  int n = size(t);
  assume_cycle_if_not(n != 0);
  int *x = calloc(n, sizeof(int));
  tree_inorder(t, x, n);
  __VERIFIER_assert(a == x[0]);
  struct node *r = tree_del(t, &b);
  __VERIFIER_assert(a == b);
  int m = size(t);
  int *y = calloc(n, sizeof(int));
  tree_inorder(r, y, m);
  __VERIFIER_assert(n == (m + 1));
  int i;
  for (i = 0; i < m; i++)
    __VERIFIER_assert(x[i + 1] == y[i]);

  free(x);
  free(y);
}

int main()
{
  task(nondet_tree());
}

