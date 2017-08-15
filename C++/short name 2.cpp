#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i=0;

cout<<"\nEnter your name : ";
cin.getline(a,50);

for(;;i++)
{
 if(a[i]==' ')
 cout<<a[i+1]<<".";

 if(a[i]=='\0')
 {
  cout<<a[0]<<".";
  break;
 }
}
  
getch();
}