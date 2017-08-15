#include<iostream.h>
#include<conio.h>

void compare(){
char a[50],b[50];
int i=0,j=0,k;

cin.getline(a,50);

cout<<"\nEnter the second string : ";
cin.getline(b,50);

for(;a[i]!='\0';i++);
for(;b[j]!='\0';j++);

if(i>=j)
{
 j=0;

for(i=0;a[i]!='\0';i++)
  if(a[i]!=' '){
    for(k=0;b[k]!='\0';k++)
    if(a[i]==b[k])
    {
     j++;
     break;
    }
  }
}
else
{
 j=0;

 for(i=0;b[i]!='\0';i++)
  if(b[i]!=' ')
  { for(k=0;a[k]!='\0';k++)
    if(a[k]==b[i])
    {
     j++;
     break;
    }
  }
}

cout<<"\nThey have "<<j<<" characters in common.";

}

void main(){
cout<<"Enter the first string : ";
compare();
getch();
}


