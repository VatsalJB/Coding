/*

ABCD
 BCD
  CD
   D
  CD
 BCD
ABCD
*/

#include<iostream.h>
#include<conio.h>
void main(){
char n='A',b;
int a=1,c=1;

while(a<=4)   //a=1,
{
b=n;

while(c<a)   //c=1     a=1,2
  {
   cout<<" ";            //1,
   c++;
  }


  while(b<='D')
  {
   cout<<b;
   b++;
  }

cout<<endl;

c=1;
a++;
n++;
}

a=1;
n='C';
c=2;

while(a<=3)
{
b=n;

while(c>=a)
  {
   cout<<" ";
   c--;
  }

  while(b<='D')
  {
   cout<<b;
   b++;
  }

cout<<endl;

c=2;
a++;
n--;
}

getch();
}



