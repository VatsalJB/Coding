#include<iostream.h>
#include<conio.h>
void main(){
int a[10],sum=0,c=1,b,e,f=1;

cout<<"Enter the array elements";

for(int i=0;i<10;i++)
{
cin>>a[i];
}

//cout<<"\nEven elements are "<<endl;

for(int i=0;i<10;i++)
{
b=a[i];            //123
e=1;

      while(e>0)    //123
      {
      e=a[i]/f;        //e=123,12,1,0
      f=f*10;          //f=10,100,1000,10000
      cout<<"\nloop 1";
      }

f=f/100;
//cout<<"\nf= "<<f;

        while(c>0)       //123
        {
        c=b%10;         //c=3,2
        sum=sum+f*c;    //sum=300,20,1
        b=b/10;         //b=12,1
        f=f/10;         //f=10
        //cout<<"\nloop 2";
        }
//cout<<"\nSum="<<sum;
//cout<<"\na[i]= "<<a[i];

if(a[i]==sum)
cout<<a[i]<<" is a Palnedrome no."<<endl;

//cout<<"\nloop 3";
sum=0;
f=1;
c=1;
}

getch();
}