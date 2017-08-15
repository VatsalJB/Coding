#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

void main(){
int s1;

cout<<"\nEnter the size of string : ";
cin>>s1;

char* A = new char(s1);

cout<<"\nEnter the first string : ";
gets(A);

cout<<"\nThe string is : \n";

cout<<A<<*(A++)<<A;


getch();
}