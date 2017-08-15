/*

  india is my  country
  aidni  si my country.

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[50];
int i=0,j,k,l;

cout<<"Enter the string : ";
cin.getline(a,50);

cout<<endl;

for(;a[i]!='\0';i++);
for(;a[i]!=' ';i--);

l=i;
i=0;

for(;a[i]!='\0';i++)
{
 switch(a[i])
 {
  case 'a' :
  case 'A' :
  case 'e' :
  case 'E' :
  case 'i' :
  case 'I' :
  case 'o' :
  case 'O' :
  case 'u' :
  case 'U' : j=k=i;

             if((i-1)==l)
             {
              for(;a[j]!='\0';j++);
              i=j;
             }
             else
             {
              for(;a[j]!=' ';j++);
              i=j;
             }
             j--;
             for(;j>=k;j--)
             cout<<a[j];
             cout<<" ";
             break;

  default :  if((i-1)==l)
             {

              for(;a[i]!='\0';i++)
              cout<<a[i];
              cout<<" ";
             }
             else
             {

              for(;a[i]!=' ';i++)
              cout<<a[i];
              cout<<" ";
             }
 }

if(a[i]=='\0')
break;
}

getch();
}

