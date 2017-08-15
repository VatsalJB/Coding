#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main(){
char A[40],B[20];
int i,j;


cout<<"Enter the first string (max 20 char) : ";
gets(A);

cout<<"\nEnter the second string (max 20 char) : ";
gets(B);

for(i=0;A[i]!='\0';i++);

for(j=0;B[j]!='\0';i++,j++)
A[i]=B[j];

A[i]='\0';

cout<<"\nThe merged string is : "<<A;

getch();
}
