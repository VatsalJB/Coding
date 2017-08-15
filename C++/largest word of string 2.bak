#include<iostream.h>
#include<conio.h>
void main(){
char a[30];
int i=0,j=0,k;

cout<<"Enter the string : ";
cin.getline(a,30);

for(;a[i]!='\0';i++)
{
  if(a[i]==' ')
  {
   if(j==0)
   k=i;
      if(k<i-j)
      k=i-j;
   j=i+1;
  }

  if(a[i+1]=='\0')
    if(k<i+1-j)
    k=i+1-j;

}

cout<<"\nThe largets word has "<<k<<" letters.";

getch();
}