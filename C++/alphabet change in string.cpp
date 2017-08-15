/*


  vatsal  badami
  watsak  cadamj
*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i,j;

cout<<"Enter the string : ";
cin.getline(a,50);

j=a[0];
j++;
a[0]=j;

for(i=0;a[i]!='\0';i++)
{
  if(a[i]==' ')
  {
   j=a[i-1];
   j++;
   a[i-1]=j;

   j=a[i+1];
   j++;
   a[i+1]=j;
  }
}

j=a[i-1];
j++;
a[i-1]=j;

cout<<"\nTHe modified string is : "<<a;

getch();
}   