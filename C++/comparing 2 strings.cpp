#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b[20];
int i=0,j=0;

cout<<"Enter the first string : ";
cin.getline(a,20);

cout<<"\nEnter the second string : ";
cin.getline(b,20);

for(;a[i]!='\0';i++);
i--;

for(;b[j]!='\0';j++);
j--;

if(i==j)
cout<<"\nBoth strings are equal";
else
  if(i>j)
  cout<<"\nString 1 is greater than string 2 by "<<i-j<<" character(s).";
  else
     if(j>i)
     cout<<"\nString 2 is greater than string 1 by "<<j-i<<" character(s).";

getch();
}     
