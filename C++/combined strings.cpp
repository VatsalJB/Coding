/*

  vatsal
  badami

  vbaatdsaamli


   india
   country
   icnoduinatry



   country
   india
*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b[20];
int i=0,j=0;

cout<<"Enter the first string : ";
cin>>a;

cout<<"\nEnter the second string : ";
cin>>b;

for(;a[i]!='\0';i++);
for(;b[j]!='\0';j++);

if(i>j)
{
 j=0;
 for(;b[j]!='\0';j++)
 cout<<a[j]<<b[j];

 for(;a[j]!='\0';j++)
 cout<<a[j];
}
else
{
 i=0;
 for(;a[i]!='\0';i++)
 cout<<a[i]<<b[i];

 for(;b[i]!='\0';i++)
 cout<<b[i];
}


getch();
}
