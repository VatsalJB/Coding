#include<iostream.h>
#include<conio.h>
void main(){
int a=1,n,c;

cout<<"Enter the no. ";
cin>>n;

while(n)
{
c=n;
   while(c)
   {
   cout<<a;
   c--;
   }
cout<<endl;
++a;
n--;
}

getch();
}

