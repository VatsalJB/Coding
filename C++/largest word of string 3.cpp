#include<iostream.h>
#include<conio.h>
void main(){
char a[30];
int i=0,max=0,l=0;

cout<<"Enter the string : ";
cin.getline(a,30);

for(;a[i]!='\0';i++,l++)
{
  if(a[i]==' ')
  {
    if(max<l)
    max=l;

   l=0;
  }

  if(a[i+1]=='\0')
    if(max<l+1)
    max=l;

}

cout<<"\nThe largets word has "<<max<<" letters.";

getch();
}