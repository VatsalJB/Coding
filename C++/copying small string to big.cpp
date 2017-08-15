/*

copy string::

eg::
 india  is  my
  country india big
  india is my
  countrys my

  india is  my
  country india big

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[50],b[50];
int i=0;

cout<<"Enter the first string : ";
cin.getline(a,50);

cout<<"\nEnter the second string : ";
cin.getline(b,50);

for(;b[i]!='\0';i++)
a[i]=b[i];

cout<<"\nThe modified string is : "<<a;

getch();
}
