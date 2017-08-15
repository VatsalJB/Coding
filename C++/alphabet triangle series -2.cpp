#include<iostream.h>
#include<conio.h>
void main(){
int a=1,b=1;

while(a<5)
{
   while(b<=a)
   {
   cout<<char(a+64);
   ++b;
   }
b=1;
++a;
cout<<endl;
}
getch();
}