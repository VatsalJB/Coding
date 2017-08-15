#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
  int t;

  cin>>t;

  while(t--)
  {
    char name[32];

    scanf(" %[^\n]s",name);
    
   // puts(name);

    int space=0;

    for(int i=0;name[i]!='\0';i++)
    if(name[i]==' ')
    space++;

  //  cout<<space;

    switch(space)
    {
      case 0 :  name[0]=toupper(name[0]);

      			 for(int i=1;name[i]!='\0';i++)
                if(isupper(name[i]))
                name[i]=tolower(name[i]);

                cout<<name<<endl;

                break;

      case 1 :  name[0]=toupper(name[0]);

      			 if(name[1]==' ')
                {
                  int size;

                  for(size=0;name[size]!='\0';size++);

                  for(;size!=0;size--)
                  name[size+1]=name[size];

                  for(int i=4;name[i]!='\0';i++)
                  if(isupper(name[i]))
                  name[i]=tolower(name[i]);

                  name[0]=toupper(name[0]);
                  name[3]=toupper(name[3]);

                  name[1]='.';

                  cout<<name<<endl;
                }
                else
                {
                  int sp;

      			   for(sp=1;name[sp]!=' ';sp++);

                  name[0]=toupper(name[0]);

                  cout<<name[0]<<". ";

                  name[sp+1]=toupper(name[sp+1]);

                  for(int i=sp+2;name[i]!='\0';i++)
                  if(isupper(name[i]))
                  name[i]=tolower(name[i]);

                  //for(++sp;name[sp]!='\0';sp++)
                  //cout<<name[sp];

                  printf("%s",name+sp+1);

                  cout<<endl;
                }

                break;

      case 2 : name[0]=toupper(name[0]);

      			cout<<name[0]<<". ";

               int sp;

               for(sp=1;name[sp]!=' ';sp++);

               name[sp+1]=toupper(name[sp+1]);
               cout<<name[sp+1]<<". ";

               for(++sp;name[sp]!=' ';sp++);

               for(int i=sp+2;name[i]!='\0';i++)
               if(isupper(name[i]))
               name[i]=tolower(name[i]);

               name[sp+1]=toupper(name[sp+1]);

               printf("%s",name+sp+1);

               cout<<endl;

               break;

     }
  }
  return 0;
}
