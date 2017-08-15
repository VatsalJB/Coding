/*

s=1-2+3-4+5.......nterms.

*/



#include<iostream.h>
#include<conio.h>
void main(){
signed int n,a=1,sum=0;

cout<<"Enter the no. of terms ";
cin>>n;

while(a<=n){
if(a%2==0)
a=-a;

sum=sum+a;
if(a%2==0)
a=-a;

++a;
}

cout<<"\nSum = "<<sum;

getch();
}