#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
int a,b;
cout<<"Enter the number ";
cin>>a;

b=a%10;
a=a/10;  

if(b==0)
cout<<"";
else
   if(b==1)
   cout<<"One";
   else
       if(b==2)
       cout<<"Two";


if(a==0)
cout<<"";
else
   if(a==1)
   cout<<" One";
   else
       if(a==2)
       cout<<" Two";
       else
       cout<<"Try Again";

getch();
}