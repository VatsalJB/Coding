  /*

  india is my coumtry
  word for search= is
  */
#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b[10];
int i=0,j=0,k=0,l=0;

cout<<"Enter the string : ";
cin.getline(a,20);

cout<<"\nEnter the word to search : ";
cin>>b;

for(;a[k]!='\0';k++);

while(j<=k)
{
   if(a[j]==' '||a[j]=='\0')
      while(i<j)
      {
         if(a[i]==b[l])
         {
          i++;
          l++;

         }
         else
         {
         i=j+1;
         break;}
      }

j++;
l=0;
}

--i;
if(i==k)
cout<<"\nThe word does not exist";
else
cout<<"\nThe word exists";

getch();
}