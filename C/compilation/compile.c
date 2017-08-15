#include<stdio.h>

void foo(int a,int b)
{
  printf("\nSum = %d",a+b);
}

int main()
{
  //program to study modes of compilation. compile using -save-temps
  typedef int fook;
  fook a,b;
  scanf("%d%d",&a,&b);
  foo(a,b);
}
