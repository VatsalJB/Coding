#include<iostream.h>
#include<conio.h>

class sum{
public :

int a;

 void evensum(){
  int evnsm=0,n;

  cout<<"\nEnter the number : ";
  cin>>n;

  a=n;

  for(;n>0;n=n/10)
  {
   int temp;
   temp=n%10;

   if(temp%2==0)
   evnsm=evnsm+temp;

   cout<<"\nSum of even digits = "<<evnsm;
  }
 }

 void oddsum(){
 int odsm=0;

 for(;a>0;a=a/10)
 {
  int temp;
  temp=a%10;

  if(temp%2==1)
  odsm=odsm+temp;

  cout<<"\nSum of odd digits = "<<odsm;
 }
 }

};

void main(){
sum s1;

s1.evensum();
s1.oddsum();

getch();
}
