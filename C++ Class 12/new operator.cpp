#include<iostream.h>
#include<conio.h>

void main(){
int i,size;

cout<<"\nEnter the size of array : ";

cin>>size;

int *ptr=new int[size];
//int *ptr=new int;
//*ptr=5;

for(i=0;i<size;i++)
{
  cout<<"\nAddress of block "<<i+1<<" : "<<ptr+i;
}

for(i=0;i<size;i++)
{
  cout<<"\nEnter the value : ";
  cin>>*(ptr+i);
}

cout<<"\n\nThe values are : \n";

for(i=0;i<size;i++)
{
  cout<<*(ptr+i)<<endl;
}

cout<<endl;

cout<<"\nAddress of block 1 : "<<ptr<<endl;
cout<<"\nAddress of last block : "<<ptr+size-1<<endl;

cout<<"\n*ptr before delete : "<<*ptr;

delete ptr;

cout<<"\n*ptr after delete : "<<*ptr;

ptr=NULL;

cout<<"\nAddress of block 1 : "<<ptr<<endl;

getch();
}