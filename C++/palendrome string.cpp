#include<iostream.h>
#include<conio.h>
void main(){
char a[10],b[10];
int i=0,j=0;

cout<<"Enter the string ";

cin>>a;

for(;a[i]!='\0';i++);

for(;i>=0;i--,j++)
b[j]=a[i-1];

for(i=0;a[i]!='\0';i++)
if(a[i]!=b[i])
{
cout<<"\nIt is not palendrome ";
j=20;
break;
}

if(j!=20)
cout<<"\nIt is palemdrome";

getch();
}