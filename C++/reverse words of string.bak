/*

  vatsal badami

  lastav imadab

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i=0,j=0,k;

cout<<"Enter the string : ";
cin.getline(a,50);

cout<<"\nThe modified string is : ";

for(;a[i]!='\0';i++)
{
  if(a[i]==' ')
  {
   k=i-1;
   for(;j<i;j++,k--)
   cout<<a[k];

   cout<<" ";
   j=i+1;
  }

  if(a[i+1]=='\0')
  {
   k=i;
   for(;j<=i;j++,k--)
   cout<<a[k];
  }
}

getch();
}

