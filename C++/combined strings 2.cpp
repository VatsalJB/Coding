/*

  vatsal
  badami

  vbaatdsaamli


   india
   country
   icnoduinatry
   for()
   {
    copy to 3 arry
   }

   if()
   {

      lop

   }
   else
   {
   lop

   }



   country
   india
*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b[20],c[40];
int i=0,j=0;

cout<<"Enter the first string : ";
cin>>a;

cout<<"\nEnter the second string : ";
cin>>b;

for(;;i++,j++)
{
 if(a[j]=='\0'||b[j]=='\0')
 break;

 c[i]=a[j];
 c[++i]=b[j];
}

if(b[j]=='\0')
{
 for(;a[j-1]!='\0';j++,i++)  //6
 c[i]=a[j];
}
else
{
 for(;b[j-1]!='\0';i++,j++)
 c[i]=b[j];
}

for(i=0;c[i]!='\0';i++)
cout<<c[i];

getch();
}