#include<iostream.h>
#include<conio.h>
void main(){
char a[50],b[15],c[15];
int i=0,j,k=0;

cout<<"Enter the string ";
cin.getline(a,20);

cout<<"\nEnter the word to be searched : ";
cin>>b;

cout<<"\nEnter the alternate word : ";
cin>>c;

for(;b[i]!='\0';i++);
j=i;
i=0;

for(k=0;a[i]!='\0';i++)
{
  for(;k<j;k++)
  {
    if(a[i+k]!=b[k])
    break;
  }

  if(k==j)
  {
   k=0;
     for(;c[k]!='\0';k++)
     a[i+k]=c[k];
   break;
  }
}

cout<<"\nThe modified string is : "<<a;

getch();
}