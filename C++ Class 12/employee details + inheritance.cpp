#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class salary
{
  int basic;
  float netsal;

  public :

  void input_sal();
  int ret_basic();
  float ret_netsal();

};

void salary :: input_sal()
{
  cout<<"\nEnter the basic salary : ";
  cin>>basic;
}

int salary :: ret_basic()
{
  return basic;
}

float salary :: ret_netsal()
{
  return netsal;
}


class allowance : public salary
{
  float hra,ta,da;

  public :

  void cal();
  float ret_hra();
  float ret_ta();
  float ret_da();

};

void allowance :: cal()
{
  int basic=ret_basic();

  hra=0.4*basic;
  ta=0.2*basic;
  da=0.1*basic;

}

float allowance :: ret_hra()
{
  return hra;
}

float allowance :: ret_ta()
{
  return ta;
}

float allowance :: ret_da()
{
  return da;
}


class employee : public allowance
{
  char name[30];
  int id;

  public :

  void input();
  void display();

};


void employee :: input()
{
  cout<<"\nEnter the name of employee : ";
  gets(name);

  cout<<"\nEnter the employee ID : ";
  cin>>id;
}

void employee :: display()
{
  cal();

  cout<<"\nName : "<<name;
  cout<<"\nID : "<<id;
  cout<<"\nBasic salary : "<<ret_basic();
  cout<<"\nHRA : "<<ret_hra();
  cout<<"\nTA : "<<ret_ta();
  cout<<"\nDA : "<<ret_da();

  float net = ret_netsal();

  net = ret_basic() + ret_hra() + ret_ta() + ret_da();

  cout<<"\nNet Salary : "<<net;
}


void main(){
employee e;

e.input();
e.input_sal();

e.display();

getch();
}
