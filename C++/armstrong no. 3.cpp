#include<iostream.h>
#include<conio.h>
void main(){
int n1,n2,a,b=10,sum=0,c,d,e=0;

cout<<"Enter the range ";
cin>>n1>>n2;  //125,129

d=n1;        //d=125
while(d<=n2)
{
a=d;                //a=126
   while(a>0)
   {
   n1=a%b;      //n1=5,2,1
   c=n1*n1*n1;   //c=125,8,1
   sum=sum+c;     //s=125,133,134
   a=a/b;         //a=12,1,0
   }

if(sum==d)
{
cout<<d<<" is an Armstrong no."<<endl;
++e;
}

++d;
sum=0;
}

if(e==0)
cout<<"\nThere is no Armstrong no. in the range.";

getch();
}

