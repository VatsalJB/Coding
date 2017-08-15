#include<iostream.h>
#include<conio.h>
void main(){
char a[50],b[50],j,k;
int i=0;

cout<<"Enter the first string : ";
cin.getline(a,50);

cout<<"\nEnter the second string : ";
cin.getline(b,50);

for(;b[i]!='\0';i++)
a[i]=b[i];

if(a[i]!=' ')
{
j=a[i];
a[i]=' ';
i++;

 for(;a[i-1]!='\0';)
 {
  k=a[i];
  a[i]=j;
  i++;
  j=k;
 }
}

cout<<"\nThe modified string is : "<<a;

getch();
}