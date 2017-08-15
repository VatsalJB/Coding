#include<iostream.h>
#include<conio.h>

int* fun(int *a)
{
  int *temp;

  temp=a;

  for(int i=0;i<5;i++)
    if(*temp>*(a+i))
    *temp=*(a+i);

  return a;
}




void main(){
int A[5];

cout<<"\nEnter the numbers : ";

for(int i=0;i<5;i++)
cin>>A[i];

cout<<"\nThe min value is : "<<*fun(A);

getch();
}