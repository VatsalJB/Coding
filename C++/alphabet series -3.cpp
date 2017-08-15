#include<iostream.h>
#include<conio.h>
void main(){
int a=1,b=1,c=1;

while(a<5)
{
   while(c<=a)
   {
   cout<<char(b+64);
   ++b;
   ++c;
   }

c=1;
++a;
cout<<endl;
}
getch();
}