#include<iostream.h>
#include<conio.h>
void main(){
int a,c;
c=1;
cout<<"\n Enter the no. of terms ";
cin>>a;

while(c<=a)
{
cout<<(2*c)-1;

if(c<a)
cout<<",";
++c;
}

getch();
}