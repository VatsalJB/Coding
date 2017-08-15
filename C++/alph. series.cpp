/*
DCBA
 CBA
  BA
   A

*/
#include<iostream.h>
#include<conio.h>
void main(){
char n,c,a,b;
//int a=1,b=1;

cout<<"Enter the upper case alphabet ";
cin>>n;

a=b=n;
while(n>='A')
{
c=n;

  while(a>n)
  {
  cout<<" ";
  --a;
  }

a=b;
  while(c>='A')
  {
  cout<<c;
  c--;
  }

cout<<endl;
n--;
//++b;

}

getch();
}

