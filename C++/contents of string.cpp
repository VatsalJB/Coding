#include<ctype.h>
#include<iostream.h>
#include<conio.h>
void main(){
char a[30];
int e=0,b=0,c=0,d=0;

cout<<"\nEnter the string : ";
cin.getline(a,30);

for(int i=0;a[i]!='\0';i++)
{
  if(isalpha(a[i]))
  e++;
  else
     if(isdigit(a[i]))
     b++;
     else
        if(a[i]==' ')
        c++;
        else
        d++;
}

cout<<"\nNo. of alphabets = "<<e;
cout<<"\nNo. of digits = "<<b;
cout<<"\nNo. of spaces = "<<c;
cout<<"\nNo. of sp. characters = "<<d;

getch();
}        
