#define N 3

struct foo {
  char x;
  int y[N];
};

int x[N] = {0,1,2};

int main (void)
{
  struct foo *p = malloc (2*sizeof (struct foo));
  int i;

  for (i = 0; i < N; i++)
    {
      p->y[i] = x[i];
    }

  for (i = 0; i < N; i++)
    {
      if (p->y[i] != x[i])
	{ERROR:goto ERROR;}
    }
  return 0;
}