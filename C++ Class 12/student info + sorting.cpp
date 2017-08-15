#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{
 char name[20],fname[20];
 int dob[3],roll;

 public :

 void input();
 int return_roll();
 void display();

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

void main(){
student s[3];

int roll[3],sort[3],i,j,temp;

for(i=0;i<3;i++)
sort[i]=i;

for(i=0;i<3;i++)
s[i].input();

for(i=0;i<3;i++)
roll[i]=s[i].return_roll();

for(i=0;i<3;i++)
  for(j=i;j<3;j++)
  {
    if(roll[i]>roll[j])
    {
     temp=sort[i];
     sort[i]=j;
     sort[j]=temp;

     temp=roll[i];
     roll[i]=roll[j];
     roll[j]=temp;
     
    }
  }

cout<<"\nThe information in sorted order is : \n";

for(i=0;i<3;i++)
{
 cout<<"\nStudent "<<i+1<<endl;

 s[sort[i]].display();
}

getch();
} 
