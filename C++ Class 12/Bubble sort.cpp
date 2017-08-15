#include<iostream.h>
#include<conio.h>

void main(){
int A[5];

cout<<"\nENter the numbers : ";

for(int i=0;i<5;i++)
cin>>A[i];

for(int j=4;j>0;j--)
  for(int i=0;i<j;i++)
    if(A[i]>A[i+1])
    {
      int temp;
      temp=A[i];
      A[i]=A[i+1];
      A[i+1]=temp;
    }

cout<<"\nThe numbers in sorted order are : ";

for(int i=0;i<5;i++)
cout<<A[i]<<" ";

getch();
}