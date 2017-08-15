#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>


class mantisa_expo
{
 char mant[10],expo[10];

 public :

 int i;

 mantisa_expo(char num[])
 {
   for(i=0;num[i]!='.'&&num[i]!='\0';i++)
   mant[i]=num[i];

   if(i==0)
   {
    mant[0]=48;
    mant[1]='\0';
   }
   else
     if(num[i]=='\0')
     {
      expo[0]=48;
      expo[1]='\0';
     }
     else
      {
       mant[i]='\0';

       i++;

       int j;

       for(j=0;num[i]!='\0';i++,j++)
       expo[j]=num[i];

       expo[j]='\0';
      }
 }

  void display();

};

void mantisa_expo :: display()
{
  cout<<"\nThe mantissa part is : "<<mant;
  cout<<"\nThe exponent part is : "<<expo;
}



class number
{
  char A[10];

  public :

  number()
  {
   A[0]=48;
   A[1]='\0';

   if(numberformatexception())
      if(outofbound())
      {
       display();
       mantisa_expo m(A);
       m.display();
      }
  }

  number(char x[])
  {
    strcpy(A,x);

   if(numberformatexception())
      if(outofbound())
      {
       display();
       mantisa_expo m(A);
       m.display();
      }
  }

  void display();
  int numberformatexception();
  int outofbound();

};

void number :: display()
{
 cout<<"\nThe number is : "<<A;
}


int number :: numberformatexception()
{
  int a,i;

  a=0;

  for(i=0;A[i]!='\0';i++)
     if(A[i]<48||A[i]>57)
        if(A[i]=='.')
        {
          a++;

          if(a>1)
          {
           cout<<"\nNumber format exception.\nInvalid Number";
           return 0;
          }

        }
        else
        {
         cout<<"\nNumber format exception.\nInvalid Number";
         return 0;
        }

return 1;

}

int number :: outofbound()
{
  int i;

  for(i=0;A[i]!='.'&&A[i]!='\0';i++);

  if(i>5)
  {
   cout<<"\nNumber is out of bound.";
   return 0;
  }

return 1;
}


void main(){
int j;

cout<<"1.Initialise the number with 0\n2.ENter a number\n";
cout<<"\nEnter your choice : ";

cin>>j;

/*
switch(j){

case 1 : number obj;
         obj.display();
         break;

case 2 : cout<<"\nEnter the number : ";
         cin>>n;
         number obj(n);
         obj.display();
         break;

default : cout<<"\nEnter a correct choice : ";
}
*/

char n[10];

if(j==1)
number obj;
else
  if(j==2)
  {
   cout<<"\nEnter the number : ";

   gets(n);

   number obj(n);
  }


getch();
}
