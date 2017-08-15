/*

sales=?

10000_19000=5% of sale
20-29=6%
30-39=7%


*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[10];
float per;

cout<<"Enter the sales of 10 employees.\n";

for(int i=0;i<10;i++)
{
cin>>a[i];

if(a[i]>=10000)
{
   if(a[i]>=20000)
   {
      if(a[i]>=30000)
      {
         if(a[i]>=40000)
         {
          per=a[i]*8/100;
         }
         else
       per=a[i]*7/100;
      }
      else
    per=a[i]*6/100;
   }
   else
per=a[i]*5/100;
}
cout<<"\nCommission= "<<per<<endl;
}

getch();
}

