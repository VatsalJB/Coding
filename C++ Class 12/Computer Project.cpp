#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

class password
{
  char pass[21];
  int pts;

  protected :

  int chr,upp,lwr,fldig,dig;

  public :

  password();
  void count();
  void char_dig_only();
  void samechar();
  void uppercase();
  void lowercase();
  void consecutive();
  void display();

};


password :: password()
{
  cout<<"\nEnter the password (20 digits max.) : ";
  gets(pass);

  pts=chr=upp=lwr=dig=fldig=0;
}


void password :: count()
{
  for(chr=0;pass[chr]!='\0';chr++)
  {
    if(isupper(pass[chr]))
    upp++;

    if(islower(pass[chr]))
    lwr++;

    if(isdigit(pass[chr]))
    dig++;

    if(chr>0&&pass[chr+1]!='\0')
      if(isdigit(pass[chr]))
      fldig++;

  }

  pts = 4*chr + 2*upp + 2*lwr + 4*dig + 2*fldig;

}


void password :: char_dig_only()
{
  int i;
  chr=0,dig=0;

  for(i=0;pass[i]!='\0';i++)
  {
    if(isdigit(pass[i]))
    dig++;

    if(isalpha(pass[i]))
    chr++;
  }

  if(dig==0||chr==0)
  pts=pts-i;

}


void password :: samechar()
{
   char c;

   for(int i=0;pass[i]!='\0';i++)
   {
      c=pass[i];
      int j=-1,k;

      for(k=0;k<i;k++)
        if(c==pass[k])
        break;

      if(k==i)
        for(int i=0;pass[i]!='\0';i++)
          if(pass[i]==c)
          j++;

      if(j!=-1)
      pts=pts-2*j;
    }

}


void password :: uppercase()
{
  int j=1;

  for(int i=0;pass[i]!='\0';i++)
  {
    if(isupper(pass[i])&&isupper(pass[i+1]))
    j++;
    else
     if(j>1)
     {
      pts-=2*j;
      j=1;
     }
  }

}


void password :: lowercase()
{
  int j=1;

  for(int i=0;pass[i]!='\0';i++)
  {
    if(islower(pass[i])&&islower(pass[i+1]))
    j++;
    else
     if(j>1)
     {
      pts-=2*j;
      j=1;
     }
  }

}


void password :: consecutive()
{
  int j=1,i;

  for(i=0;pass[i]!='\0';i++)
  {
     if(pass[i+1]-pass[i]==1)
     j++;
     else
       if(j>1)
       {
        pts-=2*j;
        j=1;
       }
  }

}


void password :: display()
{
  cout<<"\nYour password score is "<<pts;

  if(pts<=29)
  cout<<"\nYour password strength is WEAK";
   else
   if(pts<60)
   cout<<"\nYour password strength is MODERATE";
     else
     if(pts<80)
     cout<<"\nYour password strength is STRONG";
       else
       cout<<"\nYour password strength is VERY STRONG";
}



void main(){

password p;

p.count();
p.char_dig_only();
p.samechar();
p.uppercase();
p.lowercase();
p.consecutive();
p.display();

getch();
}































































































































































































































































































































































































































































































































































































































































































































































































































































































































































