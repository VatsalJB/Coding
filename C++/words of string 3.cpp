/*

india is my country

india
is
country

temp[]=

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[20],temp[10];
int i=0,j=0,k=0;

cout<<"Enter the string ";
cin.getline(a,20);

for(;a[i]!='\0';i++,j++)
{

temp[j]=a[i];

   if(a[i]==' '||a[i+1]=='\0')
   {

       while(k<=j)
       {
        cout<<temp[k];
        k++;
       }
    cout<<endl;
    k=0;
    j=-1;
   }
}



getch();
}
