#include<iostream.h>
#include<conio.h>

void main(){
int A[10],i,k,temp;

cout<<"\nEnter the numbers : ";

for(i=0;i<10;i++)
cin>>A[i];

for(i=0;i<10;i++)
     for(k=i;k<10;k++)
     {
       if(A[i]>A[k])
       {
        temp=A[i];
        A[i]=A[k];
        A[k]=temp;
       } 
     }

cout<<"\nThe ascending order is : ";

for(i=0;i<10;i++)
cout<<A[i]<<" ";

getch();
}