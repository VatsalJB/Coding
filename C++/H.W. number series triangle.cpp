#include<iostream.h>
#include<conio.h>
void main(){
int n,c;

cout<<"Enter the no. ";
cin>>n;

c=n;
while(n>0)
{
   while(c>0)
   {
   cout<<c;
   c--;
   }
cout<<endl;
n--;
c=n;
}

getch();
}
