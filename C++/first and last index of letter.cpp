#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b;
int i=0,j=0;

cout<<"Enter the string : ";
cin.getline(a,20);

cout<<"\nEnter the letter : ";
cin>>b;

for(;a[i]!='\0';i++)
{
  if(a[i]==b)
     if(j==0)
     {
      cout<<"\nThe first index is "<<i+1;
      j=1;
     } 
     else
     j=i+1;
}

if(j==1)
cout<<" and it is the only index.";
else
cout<<"\nThe last index is "<<j;

getch();
}
