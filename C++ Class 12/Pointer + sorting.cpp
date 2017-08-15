#include<iostream.h>
#include<conio.h>

void main(){
char *ptr = new char[10];

cout<<"\nEnter the string : ";
cin>>ptr;

cout<<"\nThe string is : "<<ptr;

int i,j;

for(i=0;*(ptr+i)!='\0';i++)
   for(j=i;*(ptr+j)!='\0';j++)
      if(*(ptr + i)>*(ptr+j))
      {
        char *temp;

        *temp=*(ptr+j);
        *(ptr+j)=*(ptr+i);
        *(ptr+i)=*temp;
      }

cout<<"\nThe sorted string is : "<<ptr;

getch();
}