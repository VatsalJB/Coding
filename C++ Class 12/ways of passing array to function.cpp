#include<iostream.h>
#include<conio.h>

void fun(char A[])
{
  A[0]='@';
  cout<<"\nThe array is : "<<A;
}

void fun1(char A[20])
{
  A[1]='#';
  cout<<"\nThe array is : "<<A;
}

void fun2(char *A)
{
  //A[2]='$';
  //*(A+2)='$';
  *(2+A)='$';

  cout<<"\nThe array is : "<<A;
}

void main(){
char B[20];

cout<<"\nEnter the array : ";
cin.getline(B,20);

fun(B);
fun1(B);
fun2(B);

cout<<"\nB="<<B;

getch();
}