#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
int a,b,c;
cout<<"Enter the 3 numbers ";
cin>>a>>b>>c;

if (a>b)
  {  if (a>c)
     cout<<"\n"<<a<<" is greatest ";
     else
     cout<<"\n"<<c<<" is greatest ";
   }
else
   {if (b>c)
    cout<<"\n"<<b<<" is gratest";
    else
    cout<<"\n"<<c<<" is greatest";
    }


getch();
}