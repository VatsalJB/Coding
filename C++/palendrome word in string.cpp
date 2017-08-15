#include<iostream.h>
#include<conio.h>
void main(){
char a[50],b[10];
int i=0,j=0,k;

cout<<"Enter the string : ";
cin.getline(a,50);

for(;a[i]!='\0';i++,j++)
{
 if(a[i]==' '||a[i+1]=='\0')
 {
    if(a[i+1]=='\0')
    {
     k=i;
     b[j]=a[i];
    } 
    else
    k=i-1;

    b[j]='\0';

    for(j=0;b[j]!='\0';j++,k--)
    if(b[j]!=a[k])
    break;

    if(b[j]=='\0')
    {
     cout<<"\nThere is a palendrome word.";
     break;
    }
    else;
    j=-1;
 }
 else
 b[j]=a[i];

if(a[i]=='\0')
break;
}

if(a[i]=='\0'&&j==0)
cout<<"\nThere is no palendrome word.";

getch();
} 