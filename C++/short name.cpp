/*

  vatsal badami
  v.badami.

  rahul raj singh
  r.r singh

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i=0,j=0;

cout<<"\nEnter your name : ";
cin.getline(a,50);

cout<<endl;

cout<<a[0]<<".";

for(;a[i]!='\0';i++)
{
if(a[i]==' ')
j++;
}

for(i=0;a[i]!='\0';i++)
{
 if(a[i]==' ')
    if(j==1)
    {
       i++;
       for(;a[i]!='\0';i++)
       cout<<a[i];
       break;
    }
    else
    {
     cout<<a[i+1]<<".";
     j--;
    }
}

getch();
}




