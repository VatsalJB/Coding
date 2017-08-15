#include<iostream.h>
#include<conio.h>
void main(){
char a[10];
int i=0;

cout<<"Enter the string ";


do//(int i=0;a[i]!='\0';i++)
{
cin>>a[i];
i++;
}while(a[i]!='\0');

//cin>>a;

for(i=0;a[i]!='\0';i++)
{
//if(a[i]=='\0')
//break;

if(a[i]>=97)
a[i]=a[i]-32;
else
a[i]=a[i]+32;
}

cout<<"\nThe modified string is ";

for(i=0;a[i]!='\0';i++)
{
cout<<a[i];

//if(a[i]=='\0')
//break;
}

getch();
}