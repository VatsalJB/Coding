/*
$$$$$$$
$$$ $$$
$$   $$
$     $
*/
#include<iostream.h>
#include<conio.h>
void main(){
int a=4,b=4,c=4,d=3,e=4;

while(b>0)
{
   while(c>0)
   {
    cout<<"$";
    c--;
   }

   if(b==3)
   cout<<" ";

   if(e<3)
   {
     while(e<(a-1))
     {
      cout<<" ";
      e++;
     }
   }

   while(d)
   {
    cout<<"$";
    d--;
   }

cout<<endl;

d=7-a;
a++;
b--;
c=b;
e=b;
}

getch();
}
