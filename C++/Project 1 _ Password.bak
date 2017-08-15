#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main(){
char pass[50],a;
int pts=0,i,dig=0,chr=0,upp=0,lwr=0,fldig=0,j,k;

cout<<"Enter the password : ";
gets(pass);

for(i=0;pass[i]!='\0';i++)
{
 if(isupper(pass[i]))
 upp++;

 if(islower(pass[i]))
 lwr++;

 if(isdigit(pass[i]))
 dig++;
}

chr=i;
i--;
i--;

for(;i>0;i--)
{
 if(isdigit(pass[i]))
 fldig++;
}


pts = 4*chr + 2*upp + 2*lwr + 4*dig + 2*fldig;

dig=0;

for(i=0;pass[i]!='\0';i++)
 if(isdigit(pass[i]))
 dig++;

if(dig==0)
pts=pts-i;

chr=0;
for(i=0;pass[i]!='\0';i++)
 if(isalpha(pass[i]))
 chr++;

if(chr==0)
pts=pts-i;

for(i=0;pass[i]!='\0';i++)          //No. of times same char is used
{
 j=0;
 a=pass[i];

 for(k=0;k<i;k++)
   if(a==pass[k])
   break;

 if(k==i)
 {
   for(k=0;pass[k]!='\0';k++)
     if(a==pass[k])
     j++;
 }

 if(j>1)
 pts-=2*j;

}

j=1;

for(i=0;pass[i]!='\0';i++)    //No. of consecutive upper case letters
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


j=1;

for(i=0;pass[i]!='\0';i++)     //No. of consecutive lower case letters
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

j=1;

for(i=0;pass[i]!='\0';i++)        //No. of consecutive letters
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

getch();
}      
