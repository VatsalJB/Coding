#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i=0,j=0,k=0;

cout<<"Enter the string ";
cin.getline(a,50);

cout<<endl;

for(;a[i+1]!='\0';i++)
{
cout<<a[i];
j++;

  if(a[i]==' '||a[i]=='\0')
  {
   cout<<"="<<j;
   j=0;
   cout<<endl;
  }
}

getch();
}