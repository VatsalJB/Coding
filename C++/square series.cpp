#include<iostream.h>
#include<conio.h>
void main(){
int a=1,b=1;

while(a<=5) //a=1
{
   while(b<=5) //b=1
   {
   cout<<b;
   ++b;
   }
b=1;
cout<<endl;
++a;
}

getch();
}