/*

two one six
2
1
6

*/
#include<string.h>
#include<iostream.h>
#include<conio.h>
void main(){
char a[20],b[10];
int i=0,j=0;

cout<<"Enter the nos. : ";
cin.getline(a,20);

for(;a[i]!='\0';i++,j++)
{
b[j]=a[i];

  if(a[i]==' ')
  {
   b[j]='\0';

   if(strcmp(b,"ONE")==0||strcmp(b,"one")==0)
   cout<<"1\n";
   else
      if(strcmp(b,"TWO")==0||strcmp(b,"two")==0)
      cout<<"2\n";
      else
         if(strcmp(b,"THREE")==0||strcmp(b,"three")==0)
         cout<<"3\n";
         else
            if(strcmp(b,"FOUR")==0||strcmp(b,"four")==0)
            cout<<"4\n";
            else
                if(strcmp(b,"FIVE")==0||strcmp(b,"five")==0)
                cout<<"5\n";
                else
                   if(strcmp(b,"SIX")==0||strcmp(b,"six")==0)
                   cout<<"6\n";
                   else
                      if(strcmp(b,"SEVEN")==0||strcmp(b,"seven")==0)
                      cout<<"7\n";
                      else
                         if(strcmp(b,"EIGHT")==0||strcmp(b,"eight")==0)
                         cout<<"8\n";
                         else
                            if(strcmp(b,"NINE")==0||strcmp(b,"nine")==0)
                            cout<<"9\n";

   j=-1;
  }

  if(a[i+1]=='\0')
  {
   b[j+1]='\0';

   if(strcmp(b,"One")==0||strcmp(b,"one")==0)
   cout<<"1\n";
   else
      if(strcmp(b,"Two")==0||strcmp(b,"two")==0)
      cout<<"2\n";
      else                                          
         if(strcmp(b,"Three")==0||strcmp(b,"three")==0)
         cout<<"3\n";
                  else
            if(strcmp(b,"FOUR")==0||strcmp(b,"four")==0)
            cout<<"4\n";
            else
                if(strcmp(b,"FIVE")==0||strcmp(b,"five")==0)
                cout<<"5\n";
                else
                   if(strcmp(b,"SIX")==0||strcmp(b,"six")==0)
                   cout<<"6\n";
                   else
                      if(strcmp(b,"SEVEN")==0||strcmp(b,"seven")==0)
                      cout<<"7\n";
                      else
                         if(strcmp(b,"EIGHT")==0||strcmp(b,"eight")==0)
                         cout<<"8\n";
                         else
                            if(strcmp(b,"NINE")==0||strcmp(b,"nine")==0)
                            cout<<"9\n";


  }

}

getch();
}






