#include<iostream.h>
#include<conio.h>
void main(){
int a,b;
cout<<"Enter the digits ";
cin>>a;
/*b=a%10;
a=a/10;

a=10*b + a;*/

a=10*(a%10) + (a/10);


cout<<"Number after swapping is "<<a;
getch();
}

