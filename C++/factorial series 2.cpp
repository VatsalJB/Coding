/*

s=1/!2 +3/!3 +5/!4 +7/!5....nterms.

*/

#include<iostream.h>
#include<conio.h>
void main(){
float n,f=1,sum=0,a=1,b=1;

cout<<"Enter the no. of terms ";
cin>>n;

while(a<=n){
f=f*(a+1);

sum=sum+b/f;

++a;
b=b+2;
}

cout<<"\nSum= "<<sum;

getch();
}