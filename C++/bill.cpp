#include<iostream.h>
#include<conio.h>
void main(){
int x;
cout<<"Enter the no. of units ";
cin>>x;

if (x<100)
cout<<"rs."<<3*x;
else
  {if (x<300)
   cout<<"rs."<<4*(x-100)+ 300;
   else
   cout<<"rs."<<1100+(5*(x-300));
   }
getch();
}
