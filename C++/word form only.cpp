#include<iostream.h>
#include<conio.h>
void main(){
long int a,b=1,c,d;
cout<<"Enter the no.";
cin>>a;

c=a;

for(;c>=1;b=b*10)
{
if(c/b<=9)
c=0;
}

b=b/10;

for(;a>0;)
{
d=a/b;
    switch(d)
    {
     case 1 :
     cout<<" One";
     break;
     case 2 :
     cout<<" Two";
     break;
     case 3 :
     cout<<" Three";
     break;
     case 4 :
     cout<<" Four";
     break;
     case 5 :
     cout<<" Five";
     break;

     default:
     cout<<"Try again";
     }


a=a%b;
b=b/10;
}

cout<<" only";

getch();
}
