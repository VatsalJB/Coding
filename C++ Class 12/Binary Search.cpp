#include<iostream.h>
#include<conio.h>

void main(){
int A[10],mid,lb,ub,key,i;

cout<<"Enter the numbers in sorted order : ";

for(i=0;i<10;i++)
cin>>A[i];

ub=9;
lb=0;

cout<<"\nEnter the number to be searched : ";
cin>>key;

for(;ub>lb;)
{
 mid=(ub+lb)/2;

 if(key<A[mid])
 ub=mid-1;
 else
    if(key>A[mid])
    lb=mid+1;
    else
    {
     i=0;
     break;
    }

}

if(i==0)
cout<<"\nThe number exists at place "<<mid+1;
else
cout<<"\nThe number doesn't exist";

getch();
}