#include<iostream.h>
#include<conio.h>
void main(){
int a=1,n;
float sum=0;

cout<<"Enter the no. of terms ";
cin>>n;

while(n>0){
sum=sum+a/(a+2);
n--;
a=a+2;
}

cout<<"\nSum = "<<sum;

getch();
}
