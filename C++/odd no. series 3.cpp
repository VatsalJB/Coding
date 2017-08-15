#include<iostream.h>
#include<conio.h>
void main(){
int a,c;
c=1;
cout<<"\n Enter the no. of terms ";
cin>>a;

while(a>=1)
{
cout<<c;

if(a>1)
cout<<",";

c=c+2;
a--;
}

getch();
}