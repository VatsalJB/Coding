#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c;
cout<<"Enter the number ";
cin>>a;

if(a==1)
cout<<"It is neither prime nor composite";

c=a;

for(b=2;b<=a/2;++b)
{
if(a%b==0)
a=0;
}

if(a==0)
cout<<c<<" is a composite no.";
else
cout<<c<<" is a prime no.";

getch();
}
