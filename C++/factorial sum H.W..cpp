#include<iostream.h>
#include<conio.h>
void main(){
float n,c,b,sum;
cout<<"Enter the limit ";
cin>>n;
sum=0;
c=1;

for(b=2;b<=(n+1);++b)
{
c=c*b;                     //1/2! + 2/3! + 2/4! .....
sum=sum+(b-1)/c;

}

cout<<sum;

getch();
}

