/*
  01234567891011            01234567
    india is my country     country
  india=5
  is=2
  ..

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i=0,j,k=0;

cout<<"Enter the string ";
cin.getline(a,50);

cout<<endl;

for(;a[i]!='\0';i++);
j=i-1;
i=0;

for(;a[j]==' ';j--);

a[j+1]='\0';

if(a[0]==' ')
{
 for(;a[i]==' ';i++);
 k=i;
}

for(;i<=j;i++)
{

 cout<<a[i];
  if(a[i]==' '||a[i+1]=='\0')
  {
   if(a[i+1]=='\0')
   cout<<"="<<i-k+1;
   else
   cout<<"="<<i-k<<endl;

   k=i+1;
  }
}

getch();
}