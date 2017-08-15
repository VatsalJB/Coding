/*

AAAAA
 BBBB
  CCC
   DD
    E
*/
#include<iostream.h>
#include<conio.h>
void main(){
int a=5,b=1,d=5;
char c='A';

while(a>0)
{
  while(d>a)
  {
  cout<<" ";
  d--;
  }
d=5;  

  while(b<=a)
  {
  cout<<c;
  b++;
  }
b=1;

cout<<endl;

c--;
a--;
}

getch();
}
