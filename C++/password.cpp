/*

set the  password=?

Enter the password=?

access denied /accepted

*/

#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b[20];
int i,j;

cout<<"Set the password : ";
cin>>a;

cout<<"\nEnter the password : ";
cin>>b;

for(i=0;a[i]!='\0';i++);

i=i-1;

for(j=0;b[j]!='\0';j++);

j=j-1;

if(i==j)
{
  for(;i>=0;i--)
  if(a[i]!=b[i])
  {
  cout<<"\nACCESS DENIED";
  i=-2;
  break;
  }
}
else
cout<<"\nACCESS DENIED";

if(i==-1)
cout<<"\nACCESS GRANTED";

getch();
}