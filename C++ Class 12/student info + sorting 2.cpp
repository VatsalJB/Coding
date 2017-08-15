#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class student
{
 char name[20],fname[20],encpt[20];
 int dob[3],roll;

 public :

 void input();
 int return_roll();
 void display();
 void encrypt();
 void display_encrypt();
 int redundant(char []);

};

void student :: input()
{
 cout<<"\nEnter the name : ";
 gets(name);

 cout<<"\nEnter the roll number : ";
 cin>>roll;

 cout<<"\nEnter the year of birth : ";
 cin>>dob[2];

 cout<<"\nEnter the month of birth (in numerals) : ";
 cin>>dob[1];

 cout<<"\nEnter the day of birth (in numerals) : ";
 cin>>dob[0];

 cout<<"\nEnter your father's name : ";
 gets(fname);

}

int student :: return_roll()
{
 return roll;
}

void student :: display()
{
 cout<<"\nStudent Name : "<<name;
 cout<<"\nRoll Number : "<<roll;
 cout<<"\nDate of birth : "<<dob[0]<<"/"<<dob[1]<<"/"<<dob[2];
 cout<<"\nFather's Name : "<<fname;
}


void student :: encrypt()
{
 int i,j;
 char temp;

 strcpy(encpt,name);

 for(i=0;encpt[i]!='\0';i++)
    for(j=i;encpt[j]!='\0';j++)
      if(encpt[i]>encpt[j])
      {
       temp=encpt[i];
       encpt[i]=encpt[j];
       encpt[j]=temp;
      }

}

void student :: display_encrypt()
{
 cout<<"\nThe encrypted name is : "<<encpt;
}


int student :: redundant(char n[])
{
  if(strcmp(n,name))
  return 0;
  else
  return 1;
}

void main(){
student s[3],a;

char name[20];

int i,j,roll,ub,lb,mid;

for(i=0;i<3;i++)
{
 s[i].input();
 s[i].encrypt();
}

for(i=0;i<3;i++)
  for(j=i;j<3;j++)
  {
    if(s[i].return_roll()>s[j].return_roll())
    {
     a=s[i];
     s[i]=s[j];
     s[j]=a;
    }
  }

cout<<"\nThe information in sorted order is : \n";

for(i=0;i<3;i++)
{
 cout<<"\n\nStudent "<<i+1<<endl;

 s[i].display();
 s[i].display_encrypt();
}

cout<<endl<<endl;

cout<<"Enter the roll number to be searched : ";
cin>>roll;

lb=0;
ub=2;

cout<<endl;

for(;ub>=lb;)
{
 mid=(ub+lb)/2;

 if(roll<s[mid].return_roll())
 ub=mid-1;
 else
   if(roll>s[mid].return_roll())
   lb=mid+1;
   else
   {
    ub=-1;
    break;
   }
}

if(ub==-1)
{
 s[mid].display();
 s[mid].display_encrypt();
}
else
cout<<"\nThe roll number does not exist.";

cout<<"\nEnter the name to be searched : ";
cin>>name;

j=0;

for(i=0;i<3;i++)
j=j+s[i].redundant(name);

cout<<"\nThe no. of students with same name are : "<<j;

getch();
}