#include<iostream.h>
#include<conio.h>

class class1
{
 int a;

 public :

 void input()
 {
  cout<<"\nEnter the value : ";
  cin>>a;
 }

 void output()
 {
  cout<<"\nThe value is : "<<a;
 }

 int returnval()
 {
  return a;
 }


};

void main()
{
 class1 c[5],c1;
 int i,j;

 for(i=0;i<5;i++)
 c[i].input();

 for(i=0;i<5;i++)
   for(j=i;j<5;j++)
       if(c[j].returnval()<c[i].returnval())
       {
        c1=c[i];
        c[i]=c[j];
        c[j]=c1;
       }

cout<<"\nThe ascending order is : \n";

for(i=0;i<5;i++)
c[i].output();

getch();
}
