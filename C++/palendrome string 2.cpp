#include<iostream.h>
#include<conio.h>
void main(){
char a[10];
int i=0,j=0;

cout<<"Enter the string ";

cin>>a;

for(;a[i]!='\0';i++);

i=i-1;

for(;i>=j;i--,j++)
if(a[i]!=a[j])
{
cout<<"\nIt is not palendrome ";
j=20;
break;
}

if(j!=20)
cout<<"\nIt is palemdrome";

getch();
}