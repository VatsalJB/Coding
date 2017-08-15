#include<stdio.h>

/*typedef*/ struct temp
{
  int a;//=10;
//  void fun();
}s;

//s.a=10;

//struct temp s1;

int main()
{
  //s s;
  struct temp t;
  s.a=10;
  t=s;
  printf("%d\n",t.a);

  

  return 0;
}
