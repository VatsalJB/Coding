/*

emp-first name, last name , shortname(1st vowel+1stconsonant of fname, 1st vol, 1stcostof last name),
age, city , sallary

1)input 5 rec using structure pointer,
2)sort the record by shortname.
3)min sal
4)max sal


      */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>


struct emp
{
  char fname[20];
  char lname[20];
  char sh_name[5];
  int age;
  char city[20];
  float sal;
};


void input(emp**,int);
void display(emp**,int);
void sort(emp**);
void salary(emp**);

void main(){

emp *ptr[5];

for(int i=0;i<5;i++)
{
  ptr[i]=new emp;
  input(ptr,i);
}


cout<<"\nThe details are : \n";

for(int i=0;i<5;i++)
display(ptr,i);

sort(ptr);

salary(ptr);

getch();
}


void input(emp **ptr,int i)
{
  cout<<"\nEnter the details of employee "<<i+1<<endl;

  cout<<"\nFirst Name : ";
  gets(ptr[i]->fname);

  cout<<"\nLast Name : ";
  gets(ptr[i]->lname);

  cout<<"\nAge : ";
  cin>>ptr[i]->age;

  cout<<"\nCity : ";
  gets(ptr[i]->city);

  cout<<"\nSalary : ";
  cin>>ptr[i]->sal;

  int k=0;


  for(int j=0;ptr[i]->fname[j]!='\0';j++)
  {                                                                              //a b c d e f g h i j k l m n o p q r s t u
    if(k==0)                                                                     //97     101     105         111
      switch(ptr[i]->fname[j])
      {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : ptr[i]->sh_name[k]=ptr[i]->fname[j];
        				 k++;
                   j=-1;

      }
    else
      if((ptr[i]->fname[j]!=97)&&(ptr[i]->fname[j]!=101)&&(ptr[i]->fname[j]!=105)&&(ptr[i]->fname[j]!=111)&&(ptr[i]->fname[j]!=117))
      {
        ptr[i]->sh_name[k]=ptr[i]->fname[j];
        k++;
        break;
      }
  }


  for(int j=0;ptr[i]->lname[j]!='\0';j++)
  {
    if(k==2)
      switch(ptr[i]->lname[j])
      {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : ptr[i]->sh_name[k]=ptr[i]->lname[j];
        				 k++;
                   j=-1;

      }
    else
      if(ptr[i]->lname[j]!=97&&ptr[i]->lname[j]!=101&&ptr[i]->lname[j]!=105&&ptr[i]->lname[j]!=111&&ptr[i]->lname[j]!=117)
      {
        ptr[i]->sh_name[k]=ptr[i]->lname[j];
        k++;
        ptr[i]->sh_name[k]='\0';
        break;
      }
  }

}


void display(emp **ptr,int i)
{

  cout<<"\nEmployee "<<i+1<<endl;

  cout<<"\nFirst Name : "<<ptr[i]->fname;
  cout<<"\nLast Name : "<<ptr[i]->lname;
  cout<<"\nShort Name : "<<ptr[i]->sh_name;
  cout<<"\nAge : "<<ptr[i]->age;
  cout<<"\nCity : "<<ptr[i]->city;
  cout<<"\nSalary : "<<ptr[i]->sal;
  cout<<endl;
}

void sort(emp **ptr)
{
  for(int i=0;i<5;i++)
     for(int j=0;j<4-i;j++)
      if(ptr[j]->sh_name[0]>ptr[j+1]->sh_name[0])
      {
        emp *temp;

        temp=ptr[j];
        ptr[j]=ptr[j+1];
        ptr[j+1]=temp;
      }

  for(int i=0;i<5;i++)
     for(int j=0;j<4-i;j++)
      if(ptr[j]->sh_name[0]==ptr[j+1]->sh_name[0])
        if(ptr[j]->sh_name[1]>ptr[j+1]->sh_name[1])
        {
          emp *temp;

          temp=ptr[j];
          ptr[j]=ptr[j+1];
          ptr[j+1]=temp;
        }

  for(int i=0;i<5;i++)
     for(int j=0;j<4-i;j++)
      if(ptr[j]->sh_name[1]==ptr[j+1]->sh_name[1])
        if(ptr[j]->sh_name[2]>ptr[j+1]->sh_name[2])
        {
          emp *temp;

          temp=ptr[j];
          ptr[j]=ptr[j+1];
          ptr[j+1]=temp;
        }

  for(int i=0;i<5;i++)
     for(int j=0;j<4-i;j++)
      if(ptr[j]->sh_name[2]==ptr[j+1]->sh_name[2])
        if(ptr[j]->sh_name[3]>ptr[j+1]->sh_name[3])
        {
          emp *temp;

          temp=ptr[j];
          ptr[j]=ptr[j+1];
          ptr[j+1]=temp;
        }

   cout<<"\nThe sorted order is : \n";

   for(int i=0;i<5;i++)
   display(ptr,i);

   //return ptr;

}



void salary(emp **ptr)
{
   float min,max;

   max=0;
   min=ptr[0]->sal;

   for(int i=0;i<5;i++)
   {
      if(ptr[i]->sal<min)
      min=ptr[i]->sal;
      else
      max=ptr[i]->sal;
   }


   cout<<"\nMinimum Salary : Rs."<<min;
   cout<<"\nMaximum Salary : Rs."<<max<<endl;
}

