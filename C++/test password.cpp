#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main(){
int i,j,k,pts=10;
char pass[20],a;

gets(pass);                       //NO. of consecutive upper case letters         AB cd EFG hi JK

j=1;

for(i=0;pass[i]!='\0';i++)
{
   if(pass[i+1]-pass[i]==1)
   j++;
   else
     if(j>1)
     {
      pts-=2*j;
      j=1;
     }
}
cout<<pts;

getch();
}
