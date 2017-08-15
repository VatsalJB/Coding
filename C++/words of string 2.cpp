#include<iostream.h>
#include<conio.h>
void main(){
char a[20];
int i=0;

cout<<"Enter the sentence ";       //India is great
cin.getline(a,20);

for(;a[i]!='\0';i++)
{
cout<<a[i];
  if(a[i]==' ')
  cout<<endl;
}

getch();
}