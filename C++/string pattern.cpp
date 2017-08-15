/*


enter the string: vatsal

v
va
vat
;
;
;;

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[10];
int i=0,j=0,b=0;

cout<<"Enter the string ";
cin>>a;

for(;a[i]!='\0';i++);

while(i>0)
{
   while(j<=b)
   {
    cout<<a[j];
    j++;
   }
cout<<endl;

j=0;
b++;
i--;
}

getch();
}   
