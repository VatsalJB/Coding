/*
     *
    ***
   *****
  *******

*/
#include<iostream.h>
#include<conio.h>
void main(){
int a=3,b=4,c=1,d=1;

while(b)
{
   while(a)
   {
    cout<<" ";
    a--;
   }

      while(c)
      {
       cout<<"*";
       c--;
      }

cout<<endl;

b--;    
a=b-1;
d=d+2;
c=d;
}

getch();
}