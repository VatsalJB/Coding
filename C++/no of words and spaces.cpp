/*

India is my country

*/

#include<iostream.h>
#include<conio.h>
void main(){
char a[30];
int i=0,j=0;

cout<<"Enter the sentence : ";
//cin>>a;
cin.getline(a,30);

cout<<a;

for(;a[i]!='\0';i++);

i=i-1;

for(;i>=0;i--)
if(a[i]==' ')
j++;

cout<<"\nNo. of spaces = "<<j;
cout<<"\nNo. of words = "<<j+1;

getch();
}