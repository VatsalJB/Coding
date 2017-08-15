#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

void main(){
int s1,s2;

cout<<"\nEnter the size of 1st string : ";
cin>>s1;

char* A = new char(s1);

cout<<"\nEnter the first string : ";
gets(A);

cout<<"\nEnter the size of 2nd string : ";
cin>>s2;

char* B = new char(s2);

cout<<"\nEnter second string : ";
gets(B);

cout<<"\nThe strings are : \n";

cout<<A<<endl<<B;
/*
if(s1!=s2)
{
 cout<<"\nThey are not palindrome.";
 getch();
 exit(1);
}
*/

int i=0,j=0;

for(;B[j]!='\0';j++);

j--;

for(;i<j;i++,j--)
 if(A[i]!=B[j])
 {
   i=-1;
   break;
 }

if(i==-1)
cout<<"\nThey are not palindrome.";
else
cout<<"\nThey are palindrome.";

getch();
}
