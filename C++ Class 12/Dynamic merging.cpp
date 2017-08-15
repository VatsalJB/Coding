#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main(){

int s1,s2;

cout<<"\nEnter the size of first string : ";
cin>>s1;

char* A = new char(s1);

cout<<"\nEnter the first string : ";
gets(A);

cout<<"\nEnter the size of second string : ";
cin>>s2;

char* B = new char(s2);

cout<<"\nEnter the second string : ";
gets(B);

char* C = new char(s1+s2+1);

int i;

for(i=0;A[i]!='\0';i++)
C[i]=A[i];

for(int j=0;B[j]!='\0';j++,i++)
C[i]=B[j];

C[i]='\0';

cout<<"\nMerged string is : "<<C;

getch();
}
