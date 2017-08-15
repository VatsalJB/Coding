#include<iostream.h>
#include<conio.h>
void main(){
int a,c;
c=1;
cout<<"\n Enter the no. of terms ";
cin>>a;

while(c<=a)
{
cout<<2*c;
if(c<a)
cout<<",";
++c;
}

getch();
}

