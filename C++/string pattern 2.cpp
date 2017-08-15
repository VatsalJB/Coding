#include<iostream.h>
#include<conio.h>
void main(){
char a[10];
int i=0,j,b,c;

cout<<"Enter the string ";
cin>>a;                   //vatsal

for(;a[i]!='\0';i++);     //i=6

--i;             //i=5
j=b=c=i;           //j=b=5

while(j>=0)
{
   while(i>=b)
   {
    cout<<a[i];
    i--;
   }
cout<<endl;

j--;
b--;
i=c;
}

getch();
}