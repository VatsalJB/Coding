/*
   A
  AB
 ABC
ABCD
*/
#include<iostream.h>
#include<conio.h>
void main(){
char n,a='A',d='A';
int c=1,b;

cout<<"Enter the upper case aplh. ";
cin>>n;

b=n-64;
while(d<=n)
{
   while(c<b)  //c=1  b=4
   {
   cout<<" ";
   c++;
   }
c=1;

   while(a<=d)
   {
   cout<<a;
   a++;
   }
cout<<endl;

a='A';
d++;
b--;
}
getch();
}