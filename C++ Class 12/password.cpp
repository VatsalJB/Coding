#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

//int w=0,m=0,s=0;


class strength
{
 public :

 int check(char a[20])
 {
  int i;

  for(i=0;a[i]!='\0';i++);

  if(i<=5)
  {
   cout<<"\nYour password is WEAK";

  }
  else
     if(i<=10)
     {
      cout<<"\nYour password is MODERATE";

     }
     else
     {
      cout<<"\nYour password is STRONG";

     }
 return i;

 }

 void change(char a[20])
 {
   int i;
   cout<<"\nEnter the character place to be modified : ";
   cin>>i;

   cout<<"\nEnter the new character : ";
   cin>>a[i-1];
 }

};


class password
{
 char pass[20],encrypt[20];

 public :

 strength s;

 int ch;

 void enter()
 {
   cout<<"\nEnter the password : ";
   gets(pass);
 }

 int countchar()
 {
   for(ch=0;pass[ch]!='\0';ch++);
   return ch;
 }

 int countsymbol()
 {
  ch=0;

  for(int i=0;pass[i]!='\0';i++)
    if(!isalnum(pass[i])&&pass[i]!=' ')
    ch++;

  return ch;
 }

 int count_scase()
 {
   ch=0;

   for(int i=0;pass[i]!='\0';i++)
     if(islower(pass[i]))
     ch++;

   return ch;
 }

 int count_ucase()
 {
   ch=0;

   for(int i=0;pass[i]!='\0';i++)
      if(isupper(pass[i]))
      ch++;

   return ch;
 }

 void display()
 {
  cout<<"\nYour password is : "<<pass;
 }

 void pass_encrypt()
 {
   int i,temp;

   for(i=0;pass[i]!='\0';i++)
   encrypt[i]=pass[i];
                               //i=6
   encrypt[i]=countsymbol()+48;
   encrypt[++i]=countchar()+48;      //i=7
   encrypt[++i]=count_scase()+48;    //i=8
   encrypt[++i]=count_ucase()+48;    //i=9
   encrypt[++i]='\0';                //i=10

   i--;

   for(;i>0;i=i-2)
   {
     temp=encrypt[i];
     encrypt[i]=encrypt[i-1];
     encrypt[i-1]=temp;
   }

   if(i==0)
   encrypt[0]++;

   /*
     temp=i;         //temp=10

     encrypt[i]='\0';

     i--;

     for(;i>0;i=i-2)
     {
      encrypt[i]=test[i-1];
      encrypt[i-1]=test[i];
     }

     if(temp%2==1)
     encrypt[0]=++test[0];
   */
 }

 void encrypt_display()
 {
  cout<<"\nThe encrypted password is : "<<encrypt;
 }

 int strength()
 {
  s.change(encrypt);

  cout<<"\nThe new password is : "<<encrypt;

  return (s.check(encrypt));

 }


};

void main()
{
 password p[3];

 int i,w=0,st=0,m=0,j;

for(i=0;i<3;i++)
{
 cout<<"\n\nUSER "<<i+1<<endl;

 p[i].enter();

 cout<<"\nNo. of characters (including space) = "<<p[i].countchar();
 cout<<"\nNo. of symbols = "<<p[i].countsymbol();
 cout<<"\nNo. of lower case characters = "<<p[i].count_scase();
 cout<<"\nNo. of upper case characters = "<<p[i].count_ucase();

 p[i].pass_encrypt();
 p[i].encrypt_display();
 j=p[i].strength();

  if(j<=5)
  w++;
  else
     if(j<=10)
     m++;
     else
     st++;

}

cout<<endl;
cout<<"\nNo. of people having password strength WEAK are : "<<w;
cout<<"\nNo. of people having password strength MODERATE are : "<<m;
cout<<"\nNo. of people having password strength STRONG are : "<<st;

getch();
}