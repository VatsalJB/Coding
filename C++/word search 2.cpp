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
char a[20],b[10],temp[10];
int i=0,j=0,k=0;

cout<<"Enter the string ";
cin.getline(a,20);

cout<<"\nEnter the word to be searched : ";
cin>>b;

for(;a[i]!='\0';i++,j++)
{

temp[j]=a[i];   //i=13 j=4

   if(a[i]==' '||a[i+1]=='\0')           //India is great 13
   {

       while(k<=j)
       {


        if(temp[k]==b[k])
        {
        k++;
        }
        else
        break;
       }

    if(a[i+1]=='\0')
    k--;

    if(k==j)
    {
    cout<<"\nThe word exists ";
    break;
    }
    k=0;
    j=-1;
   }
}

if(a[i]=='\0')
cout<<"\nThe word does not exist ";

getch();
}
