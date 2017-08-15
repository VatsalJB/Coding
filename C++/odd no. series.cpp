#include<iostream.h>
#include<conio.h>
void main(){
int a,c;
c=1;
cout<<"\n Enter the no. of terms ";
cin>>a;

while(c<=2*a)   
{
if(c%2==1)
cout<<c;

if((c<2*a)&&(c%2==1))
cout<<",";
c++;
}

getch();
}

