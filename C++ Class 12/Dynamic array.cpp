#include<iostream.h>
#include<conio.h>

void main(){

int size;

cout<<"Enter no. of elements : ";
cin>>size;

int* A = new int(size);

cout<<"Enter the elements : ";

for(int i=0;i<size;i++)
cin>>*(A+i);

cout<<"\nThe array is : ";

for(int i=0;i<size;i++,*(A++))
//cout<<*(A+i)<<A[i]<<*(i+A)<<"-----"<<*A+i<<"===="<<*(A)+i;

cout<<*A+i;

delete A;

getch();
}
