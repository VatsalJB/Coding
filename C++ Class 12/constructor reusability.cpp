#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class company
{
  char name[5][20];

  public :

  static int k=1;

  company()
  {
   cout<<"COMPANY "<<k<<endl<<endl;

   for(int i=0;i<5;i++)
   {
    cout<<"\nEnter the name of employee "<<i+1<<" : ";
    gets(name[i]);
   }

   cout<<endl<<endl;
   k++;
  }

 void f_name();
 void l_name();
 void display();
};


void company :: f_name()
{
 int i,j;
 char temp[20];

 for(j=0;j<4;j++)
 for(i=0;i<4;i++)
 {
   if(name[i][0]>name[i+1][0])
   {
    strcpy(temp,name[i]);
    strcpy(name[i],name[i+1]);
    strcpy(name[i+1],temp);
   }
 }

}


void company :: l_name()
{
 int i,j,k[5];
 char temp[20];

 for(i=0;i<5;i++)
 {
   for(j=0;name[i][j]!=' ';j++);         //vasal badami
   k[i]=j+1;                             //zxy abc
 }                                       //abc zxy
                                         //abc deg
 for(i=0;i<4;i++)                        //x fgh
   for(j=0;j<(4-i);j++)
     if(name[j][k[j]]>name[j+1][k[j+1]])
     {
       int t;

       strcpy(temp,name[j]);
       strcpy(name[j],name[j+1]);
       strcpy(name[j+1],temp);

       t=k[j];
       k[j]=k[j+1];
       k[j+1]=t;

     }
}


void company :: display()
{
  cout<<"\nEMPLOYEE DETAILS\n";

  for(int i=0;i<5;i++)
  cout<<"\nEmployee "<<i+1<<" : "<<name[i];
}



void main(){

company c[3];
int n,j;

cout<<"Enter the company no. whose details you want : ";
cin>>n;

cout<<"\nEnter the type of sorting you want :\n1.Sort by first name\n2.Sort by last name\n";
cin>>j;

cout<<endl;

switch(j)
{
 case 1 : c[n-1].f_name();
          c[n-1].display();
          break;

 case 2 : c[n-1].l_name();
          c[n-1].display();
          break;

 default : cout<<"\nENter a correct choice.";
}

getch();
}
