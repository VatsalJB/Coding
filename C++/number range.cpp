/*

10_19=?
20-29=?
30-39=?

*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[10],b=0,c=0,d=0,e=0;

cout<<"Enter the numbers\n";

for(int i=0;i<10;i++)
{
cin>>a[i];   //12,24,36,48

/*if(a[i]>=10&&a[i]<=19)
b++;

if(a[i]>=20&&a[i]<=29)
c++;

if(a[i]>=30&&a[i]<=39)
d++;

if(a[i]>=40&&a[i]<=49)
e++;
}*/

/*if(a[i]>=10)
{
  if(a[i]>=20)
  {
    if(a[i]>=30)
    {
      if(a[i]>=40)    //26
      {
      e++;
      }
      else
    d++;
    }
    else
  c++;
  }
  else
b++;
}*/
if(a[i]>=40)
{
e++;
}
else
  {
     if(a[i]>=30)
     {
     d++;
     }
     else
     {
         if(a[i]>=20)
         {
          c++;
         }
         else
         {
            if(a[i]>=10)    //26
            {
             b++;
            }
         }
     }
  }

}

cout<<"\n10-19="<<b;
cout<<"\n20-29="<<c;
cout<<"\n30-39="<<d;
cout<<"\n40-49="<<e;

getch();
}
