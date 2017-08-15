#include<iostream.h>
#include<conio.h>
void main(){
int a=1,n,b=4,c=1;

cout<<"Enter the no. ";
cin>>n;

while(a<=4)
{
  while(b>a)
  {
  cout<<" ";
  b--;
  }
b=4;

  while(c<=a)
  {
  cout<<n;
  c++;
  }

cout<<endl;
++a;
c=1;
}

a=1;
b=1;
c=3;

while(a<=3)
{
   while(b<=a)
   {
   cout<<" ";
   b++;
   }
b=1;

   while(c>=a)
   {
   cout<<n;
   c--;
   }

cout<<endl;
   
c=3;
++a;
}

getch();
}