#include<iostream.h>
#include<conio.h>
void main(){

int a=1,b=1,c=1;

while(a<5)
{
   while(b<=a)
   {
   cout<<c;
   ++c;
   ++b;
   }
++a;
b=1;
cout<<"\n";
}

getch();
}