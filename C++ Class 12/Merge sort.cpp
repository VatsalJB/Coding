#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main(){

char temp,str1[20],str2[20],sort[40];

int i,j,k;

cout<<"Enter the first string : ";
gets(str1);

cout<<"\nEnter the second string : ";
gets(str2);


for(i=0;str1[i]!='\0';i++)
  for(j=i;str1[j]!='\0';j++)
     if(str1[i]>str1[j])
     {
       temp=str1[i];
       str1[i]=str1[j];
       str1[j]=temp;
     }

for(i=0;str2[i]!='\0';i++)
  for(j=i;str2[j]!='\0';j++)
     if(str2[i]>str2[j])
     {
       temp=str2[i];
       str2[i]=str2[j];
       str2[j]=temp;
     }


  for(i=0,j=0,k=0;str1[i]!='\0'&&str2[j]!='\0';k++)
    if(str1[i]>str2[j])
    {
     sort[k]=str2[j];
     j++;
    }
    else
    {
     sort[k]=str1[i];
     i++;
    }

  if(str1[i]=='\0')
    for(;str2[j]!='\0';j++,k++)
    sort[k]=str2[j];
  else
    for(;str1[i]!='\0';i++,k++)
    sort[k]=str1[i];

  sort[k]='\0';


cout<<"\nThe merged and sorted string is : "<<sort;

getch();
}
