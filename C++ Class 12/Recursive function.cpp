#include<iostream.h>
#include<conio.h>

int fact(int);

void main(){

int a;

cout<<"\nEnter the number : ";
cin>>a;

a=fact(a);

cout<<"\nThe factorial is : "<<a;

getch();
}

int fact(int n)
{
  cout<<"\nn="<<n;

  if(n==1)
  return 1;
  else
  {
   cout<<"\nReturning value of n ";
   return n*fact(n-1);
  }
}
