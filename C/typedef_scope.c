#include<stdio.h>

//typedef int a;

void foo(int i);
/*{
  a j;
  printf("In function\n");
}*/

int main()
{
  typedef int a;
  a i;
  foo(i);

  return 0;
}

void foo(int i)
{
  a j;
  printf("\nIn foo");
}
