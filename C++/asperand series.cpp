/*

$$$$$$$
$$$ $$$
$$   $$
$     $

*/
#include<iostream.h>
#include<conio.h>
void main(){
int a=6,b=2,c=1,d=1,f=3;

while(a>=0)
{
cout<<"&";
a--;
}

a=6;
cout<<endl;

while(c<=3)
{
   while(a>0)
   {
    cout<<"&";
    --a;

      if(a==f)
      while(d<b)
      {
       cout<<" ";
       d++;
      }
   }

cout<<endl;

a=6-b;
b=b+2;
c++;


d=1;
f--;
}

getch();
}

