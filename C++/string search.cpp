/*

string=>vatsal
 sub string=>sal;

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b[20];
int i=0,j,k=0;

cout<<"Enter the string : ";
cin>>a;

cout<<"\nEnter the sub string : ";
cin>>b;

for(;b[i]!='\0';i++);
j=i;
i=0;

for(;a[i]!='\0';i++)
{
 for(;k<j;k++)
 {
  if(a[i+k]!=b[k])
  break;
 }

if(k==j)
{
 cout<<"\nThe string exists";
 break;
}

k=0;
}

if(k!=j)
cout<<"\nThe string does not exist";

getch();
}


