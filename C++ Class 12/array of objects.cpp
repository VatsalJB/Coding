#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

//char A[3][20];
//int k=0;

class employee
{

  float basic,hra,da,ta,netsal,tax_amount;
  int tax_status,empid;
  char fname[20],lname[20];

  public:

  void input()
  {
    cout<<"\nEnter your first name : ";
    gets(fname);

    cout<<"\nEnter your last name : ";
    gets(lname);

    cout<<"\nEnter you ID : ";
    cin>>empid;

    cout<<"\nEnter your basic salary : ";
    cin>>basic;

    hra=0.1*basic;
    da=0.05*basic;
    ta=0.05*basic;
  }

  void calculate()
  {
   netsal=basic+hra+ta+da;
  }

  void taxpayee()
  {
   if(netsal<=1000)
   tax_status = tax_amount = 0;
   else
      if(netsal<=2000)
      {
       tax_status = 1;
       tax_amount = 0.1*netsal;
      }
      else
         if(netsal<=3000)
         {
          tax_status = 1;
          tax_amount = 0.15*netsal;
         }
         else
            if(netsal<=4000)
            {
             tax_amount = 0.2*netsal;
             tax_status = 1;
            }
            else
            {
             tax_status = 1;
             tax_amount = 0.25*netsal;
            }

     netsal=netsal-tax_amount;
  }

  void display()
  {
   cout<<"\nFirst name : "<<fname;
   cout<<"\nLast name : "<<lname;
   cout<<"\nID : "<<empid;
   cout<<"\nBasic salary = "<<basic;
   cout<<"\nHra = 10% of basic = "<<hra;
   cout<<"\nDa = 5% of basic = "<<da;
   cout<<"\nTa = 5% of basic = "<<ta;

   cout<<"\nTax status : ";

     if(tax_status==0)
     cout<<"Tax not applicable";
     else
     {
      cout<<"Tax applicable";
      //strcpy(A[k],name);
      //k++;
     }

   cout<<"\nTax amount = "<<tax_amount;

   cout<<"\nNet salary = "<<netsal;
  }

  int returntaxstatus()
  {
    return tax_status;
  }

  int returnempid()
  {
    return empid;
  }
 /*
  int idfive()
  {
   int temp;

   temp=empid;

   for(;temp>0;temp=temp/10)
     if(temp%10==5)
     break;

   if(temp!=0)
   return empid;
   else
   return 0;

  }
 */

 float returnbasic()
 {
  return basic;
 }

 int lfind(char *a)
 {

  if(strcmp(lname,a))
  return 0;
  else
  return 1;
 }

 int compare(char a[20])
 {
   if(strcmp(a,fname))
   return 0;
   else
   return 1;
 }

};

void main(){

employee e[3],e1;

int i,id[3],minsal,minid,temp,no;

float bsal[3];

char name[20];

for(i=0;i<3;i++)
{
  cout<<"EMPLOYEE "<<i+1<<endl;
  e[i].input();
  e[i].calculate();
  e[i].taxpayee();
  cout<<"\n";

  e[i].display();


  cout<<"\n\n";

}

//k--;

//for(;k>=0;k--)
//cout<<"\n"<<A[k]<<" is tax payee.";
no=0;

for(i=0;i<3;i++)
{
  if(e[i].returntaxstatus()==1)
  {
   cout<<endl<<e[i].returnempid()<<" is tax payee";
   no++;
  }
}

cout<<"\n\nThe no. of tax payers are : "<<no<<endl;

cout<<"\nIDs having the number 5 are : \n";

//for(i=0;i<3;i++)
//   if(e[i].idfive()!=0)
//   cout<<endl<<e[i].idfive();

for(i=0;i<3;i++)
{

 id[i]=e[i].returnempid();
 temp=id[i];

 for(;temp>0;temp=temp/10)
     if(temp%10==5)
     break;

 if(temp!=0)
 cout<<endl<<id[i];
}

minsal=e[0].returnbasic();
minid=e[0].returnempid();

for(i=0;i<3;i++)
if(minsal>e[i].returnbasic())
{
 minsal=e[i].returnbasic();
 minid=e[i].returnempid();
}

cout<<"\nThe minimum basic salary is : "<<minsal<<" of employee ID : "<<minid;
/*
for(i=0;i<3;i++)
{
 bsal[i]=e[i].returnbasic();
};

temp=bsal[0];
int j;

for(i=0;i<3;i++)
   for(j=i;j<3;j++)
     if(bsal[i]>bsal[j])
    {
     temp=bsal[j];
     bsal[j]=bsal[i];
     bsal[i]=temp;

     temp=id[j];
     id[j]=id[i];
     id[i]=temp;
    }

cout<<"\nIncreasing order of their basic salaries is : \n";

for(i=0;i<3;i++)
cout<<"\n"<<id[i]<<" : "<<bsal[i];
*/

int j;

for(i=0;i<3;i++)
   for(j=i;j<3;j++)
   if(e[j].returnbasic()<e[i].returnbasic())
   {
    e1=e[i];
    e[i]=e[j];
    e[j]=e1;
   }

cout<<"\n\nIncreasing order of their basic salaries is : \n";

for(i=0;i<3;i++)
//cout<<e[i].returnempid()<<" : "<<e[i].returnbasic();
{
 cout<<"\n\n";
 e[i].display();
}

cout<<"\nEnter the last name to be searched : ";
gets(name);

cout<<"\nEmployee with same last names are : \n\n";

for(i=0;i<3;i++)
{
 if(e[i].lfind(name))
 e[i].display();
}

cout<<"\n\nEnter the first name to be searched : ";
gets(name);

cout<<"\nThe employees with same first name who pay tax are : \n\n";

temp=0;

for(i=0;i<3;i++)
{
 if(e[i].compare(name))
    if(e[i].returntaxstatus())
    {
     e[i].display();
     temp++;
    }
}

if(temp==0)
cout<<"\nNo employees match your search";

getch();
}
