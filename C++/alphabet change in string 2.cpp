/*


  vatsal  badami
  watsak  cadamj
*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i;

cout<<"Enter the string : ";
cin.getline(a,50);

a[0]++;

for(i=0;a[i]!='\0';i++)
{
  if(a[i]==' ')
  {
   a[i-1]++;

   a[i+1]++;
  }
}

a[i-1]++;

cout<<"\nTHe modified string is : "<<a;

getch();
}