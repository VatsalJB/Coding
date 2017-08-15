#include<iostream.h>
#include<conio.h>

void main(){
int A[5];
int* j;
//int** k;
    /*
cout<<"Enter the value of i : ";
cin>>i;

j=&i;
k=&j;

cout<<"\nValue of i = "<<i;
cout<<"\nValue of *j = "<<*j;
cout<<"\nMemory address of i = "<<j;
cout<<"\nMemory address of j = "<<&j;
cout<<"\nValue of k = "<<k;
cout<<"\nValue of i using k = "<<**k;
   */

for(int i=0;i<5;i++)
{
  cout<<"\nEnter the value of number "<<i+1;
  cin>>A[i];

  //j[i]=&A[i];
}

cout<<"\nMemory adresses are :\n";
/*
for(int i=0;i<5;i++)
cout<<j[i]<<endl;
*/

j=A;

for(int i=0;i<5;i++,j++)
cout<<&A[i]<<"  "<<j<<"  "<<*(A+i)<<endl;

getch();
}