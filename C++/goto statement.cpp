#include<iostream.h>
#include<conio.h>
void main(){
int n,sum=0;

cout<<"Enter the no. of terms ";
cin>>n;

start:
sum=sum+n;
n--;
if(n>0)
goto start;

cout<<"sum="<<sum;

getch();
}