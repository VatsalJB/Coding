#include<iostream.h>
#include<conio.h>
void main(){
int a,b;
cout<<"Enter the number ";
cin>>a;

for(b=2;b<=a/2;++b)
{
if(a%b==0)
cout<<b<<" is a divisor"<<endl;
}

getch();
}
