/*
1010
*/

#include<math.h>
#include<iostream.h>
#include<conio.h>
void main(){
int n,b=0,sum=0,c,d;

/*
cout<<"Enter the no. of digits ";
cin>>e;
*/

cout<<"Enter the binary no.";
cin>>n;

d=n;

while(n>0)
{
d=n%10;

if(d>0)
{
c=pow(2,b);
sum=sum+c;
}

b++;
n=n/10;

}

cout<<"\nDecimal equivalent is "<<sum;

getch();
}