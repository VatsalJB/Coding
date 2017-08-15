#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class address
{
  char city[15],state[20],country[15];
  int h_no;

  public :

  void input();
  int return_hno();
  void display();
};

void address :: input()
{
  cout<<"\nEnter the house number : ";
  cin>>h_no;

  cout<<"\nEnter the city : ";
  gets(city);

  cout<<"\nEnter the state : ";
  gets(state);

  cout<<"\nEnter the country : ";
  gets(country);
}

void address :: display()
{
  cout<<"\nCountry : "<<country;
  cout<<"\nState : "<<state;
  cout<<"\nCity : "<<city;
  cout<<"\nHouse number : "<<h_no;
}

int address :: return_hno()
{
  return h_no;
}


class department
{
  int id;
  char dept[20],location[20];

  public :

  void input();
  void display();
  int return_deptid();
};

int department :: return_deptid()
{
  return id;
}

void department :: input()
{
  cout<<"\nEnter the department : ";
  gets(dept);

  cout<<"\nEnter your id : ";
  cin>>id;

  cout<<"\nEnter the location : ";
  gets(location);
}

void department :: display()
{
  cout<<"\nDepartment : "<<dept;
  cout<<"\nDepartment ID : "<<id;
  cout<<"\nLocation : "<<location;
}


class PrimaryKey
{
  char key[40];
  public :

  void pkey(int ,int);
  void pkey(int ,int ,int);
  void pkey(int ,int, int, int);

  int select();
};

int PrimaryKey :: select()
{
  int i;
  cout<<"\nSelect the primary key combination : ";
  cout<<"\n1.Employee ID + Department ID\n2.Employee ID + House no + Salary\n3.Employee ID + House no + Salary + Department ID\n";
  cin>>i;

  return i;
}


void PrimaryKey :: pkey(id,deptid)
{
int i,j,temp,a;

 temp=1;                                  //123

 for(a=1;temp>0;a*=10)
 {
  temp=id/a;
 }

 a=a/100;

 for(i=0,j;a>0;i++,a=a/10)
 {
   j=id/a;      //1,2,3
   key[i]=j+48;
   id=id%a;  //3
 }

  temp=1;

  for(a=1;temp>0;a*=10)
 {
  temp=deptid/a;
 }

 a=a/100;

   for(j;a>0;i++,a=a/10)
 {
   j=deptid/a;
   key[i]=j+48;
   deptid=deptid%a;
 }

 key[i]='\0';

 cout<<"\nThe primary key is : "<<key;
}

void PrimaryKey :: pkey(id,hno,sal)
{
int i,j,temp,a;

 temp=1;                                  //123

 for(a=1;temp>0;a*=10)
 {
  temp=id/a;
 }

 a=a/100;  //a=100

 for(i=0,j;a>0;i++,a=a/10)
 {
   j=id/a;
   key[i]=j+48;
   id=id%a;  //3
 }

 temp=1;

  for(a=1;temp>0;a*=10)
 {
  temp=hno/a;
 }

 a=a/100;

  for(j;a>0;i++,a=a/10)
 {
   j=hno/a;
   key[i]=j+48;
   hno=hno%a;
 }

 temp=1;

  for(a=1;temp>0;a*=10)
 {
  temp=sal/a;
 }

 a=a/100;


  for(j;a>0;i++,a=a/10)
 {
   j=sal/a;
   key[i]=j+48;
   sal=sal%a;
 }



 key[i]='\0';

 cout<<"\nThe primary key is : "<<key;

}

void PrimaryKey :: pkey(id,hno,sal,deptid)
{
 int i,j,temp,a;

 temp=1;                                  //123

 for(a=1;temp>0;a*=10)
 {
  temp=id/a;
 }

 a=a/100;  //a=100

 for(i=0,j;a>0;i++,a=a/10)
 {
   j=id/a;
   key[i]=j+48;
   id=id%a;  //3
 }

 temp=1;

  for(a=1;temp>0;a*=10)
 {
  temp=hno/a;
 }

 a=a/100;

  for(j;a>0;i++,a=a/10)
 {
   j=hno/a;
   key[i]=j+48;
   hno=hno%a;
 }

 temp=1;

  for(a=1;temp>0;a*=10)
 {
  temp=sal/a;
 }

 a=a/100;


  for(j;a>0;i++,a=a/10)
 {
   j=sal/a;
   key[i]=j+48;
   sal=sal%a;
 }

 temp=1;

  for(a=1;temp>0;a*=10)
 {
  temp=deptid/a;
 }

 a=a/100;

   for(j;a>0;i++,a=a/10)
 {
   j=deptid/a;
   key[i]=j+48;
   deptid=deptid%a;
 }

 key[i]='\0';

 cout<<"\nThe primary key is : "<<key;


}

class emp
{
  char name[30];
  int id,sal,i;

  department d;
  address a;
  PrimaryKey p;

  public :

  void input();

  void display();
  int return_sal();
  int return_id();
  int return_hno();
  int return_dept();

};

int emp :: return_dept()
{
 return d.return_deptid();
}

void emp :: input()
{
  cout<<"\nEnter the name : ";
  gets(name);

  cout<<"\nEnter the ID : ";
  cin>>id;

  cout<<"\nEnter the salary : ";
  cin>>sal;

  a.input();
  d.input();
  i=p.select();
}

void emp :: display()
{
  cout<<"\n\nEMPLOYEE DETAILS";

  cout<<"\n\nName : "<<name;
  cout<<"\nID : "<<id;
  cout<<"\nSalary : "<<sal;

  a.display();
  d.display();

  switch(i){

  case 1 : p.pkey(id,return_dept());
           break;

  case 2 : p.pkey(id,return_hno(),return_sal());
           break;

  case 3 : p.pkey(id,return_hno(),return_sal(),return_dept());
           break;

  default : cout<<"\nEnter a correct choice";
  }

}

int emp :: return_sal()
{
  return sal;
}

int emp :: return_id()
{
  return id;
}

int emp :: return_hno()
{
 return a.return_hno();
}



void main(){
emp e[3];

int i,j=0,sal[3],temp;

for(i=0;i<3;i++)
{
 e[i].input();
 e[i].display();
 sal[i]=e[i].return_sal();
}

temp=sal[0];

for(i=0;i<3;i++)
  if(temp>sal[i])
  {
   temp=sal[i];
   j=i;
  }

cout<<"\nThe minimum salary is "<<temp<<" of employee "<<e[j].return_id()<<" having house number "<<e[j].return_hno()<<" and in department "<<e[j].return_dept();

getch();
}









