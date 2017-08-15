#include<iostream.h>
#include<conio.h>

void fun(int *ptr1,int *ptr2)
{
  //*ptr1++;
  //*ptr2++;

  *ptr1=*ptr1+1;
  *ptr2=*ptr2+1;

  cout<<"\nptr1="<<ptr1;
  cout<<"\n*ptr1="<<*ptr1;
  cout<<"\nptr2="<<ptr2;
  cout<<"\n*ptr2="<<*ptr2;
}


void fun1(int &a1,int &b1)
{
  //*ptr1++;
  //*ptr2++;

  a1=a1+1;
  b1=b1+1;

  cout<<"\na1="<<a1;
  cout<<"\nb1="<<b1;
}

void main(){

int a,b;

a=5;
b=10;

fun(&a,&b);
fun1(a,b);

cout<<"\na="<<a;
cout<<"\nb="<<b;

getch();
}




