#include<iostream.h>
#include<conio.h>
void main(){
int n,a=1,b=97,c=1;

cout<<"Enter the no. of terms ";
cin>>n;

while(a<=n)
{
   while(c<=a)
   {
   cout<<(char)b;
   ++b;
   ++c;
   }

if(a<n)
cout<<",";

c=1;
++a;
}

getch();
}