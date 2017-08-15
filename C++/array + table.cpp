#include<iostream.h>
#include<conio.h>
void main(){
char n,a,b,c,d;

cout<<"Enter the upper case character ";
cin>>n;

a=b=c=d=n;

while(n>='A')
{
   while(n>'A')
   {
    cout<<" ";
    n--;
   }
n=b;

   while(a<=c)
   {
    cout<<a;
    a++;
   }

cout<<endl;

a=d;
n--;
b--;
c++;
}

getch();
}

