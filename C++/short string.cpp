/*


  vatsal badami

  v.l.b.i


*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[30];
int i=0;

cout<<"Enter the string ";
cin.getline(a,30);

cout<<endl<<a[0]<<".";

for(;a[i]!='\0';i++)
{
  if(a[i]==' ')
  cout<<a[i-1]<<"."<<a[i+1]<<".";

  if(a[i+1]=='\0')
  cout<<a[i]<<".";
}

getch();
}