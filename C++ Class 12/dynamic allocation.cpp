#include<iostream.h>
#include<conio.h>

void main(){
int* i = new int;
int* j = new int;

cout<<"Enter the lower limit : ";
cin>>*i;

cout<<"Enter the upper limit : ";
cin>>*j;

int *k = new int;

cout<<"\nOdd numbers in the range are : ";

for(*k=*i;*k<*j;(*k)++)
  if(*k%2!=0)
  cout<<*k<<" ";

getch();
}