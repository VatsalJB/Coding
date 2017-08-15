






#include<iostream.h>
#include<conio.h>
void main(){
long int a,b=1,c,d=0,e=06;
cout<<"Enter the no.";
cin>>a; //1234

c=a;    //c=1234

for(;c>=1;b=b*10)
{
//c=c/b; increasing in both ways
if(c/b<=9)
c=0;
++d;
}
           //1230
b=b/10;

cout<<"No. of digits = "<<d<<endl;

cout<<b<<endl;

for(;a>0;)      //1206 ,d=4
{
--d;      //d=3
/* if(d>0)
cout<<"0";*/

cout<<a/b<<endl;

a=a%b;
cout<<"a="<<a<<endl;
b=b/10;

}
if(d==1)
cout<<"0"<<endl;

cout<<"e="<<e;
getch();
}
