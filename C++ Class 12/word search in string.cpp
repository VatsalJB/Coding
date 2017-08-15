#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>


class mystring
{
  char str[50];
  int len;

  public :

  mystring()
  {
    cout<<"\nEnter the string : ";
    gets(str);

    len=strlen(str);
  }

  void search(char []);
  void merge();
};

void mystring :: search(char w[])
{
  int i,k;
  char temp[10];


  strrev(str);

  k=0;


  for(i=0;str[i]!='\0';i++,k++)
  {
    temp[k]=str[i];

    if(str[i]==' ')
    {
      temp[k]='\0';

        if(!strcmp(temp,w))
        {
         cout<<"\nThe word exists.";
         break;
        }

     k=-1;
    }

   if(str[i+1]=='\0')
   {
     temp[k+1]='\0';

        if(!strcmp(temp,w))
        {
         cout<<"\nThe word exists.";
         break;
        }
   }

  }

 if(str[i]=='\0')
 cout<<"\nThe word does not exist.";

}

void mystring :: merge()
{
 strrev(str);
 int i,j,k;

 j=0;

 for(i=0;str[i]!='\0';i++)
 {
   if(str[i]==' ')
   {
     if(j%2==0)
     {
       for(k=i;str[k]!='\0';k++)
       str[k]=str[k+1];
     }

    j++;
   }
 }

 cout<<"\n\nThe consecutive words merged are : \n\n";

 for(i=0;str[i]!='\0';i++)
 {
   if(str[i]==' ')
   {
    cout<<endl;
    continue;
   }
   else
   cout<<str[i];
 }

}





void main(){
mystring m;

char word[10];

cout<<"\nEnter the word to be searched in reverse order : ";
gets(word);

m.search(word);
m.merge();

getch();
}
