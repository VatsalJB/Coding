#include<iostream.h>
#include<conio.h>
#include<process.h>

class employee
{
 public :

 int id[3],sal[3];

 void maxsal(){

 int i,temp,temp2;

 temp=sal[0];
 temp2=id[0];

 for(i=0;i<3;i++)
   if(temp<sal[i])
   {
    temp=sal[i];
    temp2=id[i];
   }

 cout<<"\nMax salary is "<<temp<<" of employee id "<<temp2;
 }

 void minsal(){

 int i,temp,temp2;

 temp=sal[0];
 temp2=id[0];

 for(i=0;i<3;i++)
   if(temp>sal[i])
   {
    temp=sal[i];
    temp2=id[i];
   }

  cout<<"\nMin salary is "<<temp<<" of employee id "<<temp2;
 }

 void clear(){
 int i;

 for(i=0;i<3;i++)
 {
  cout<<"\n\nEnter the employee id : ";
  cin>>id[i];

  cout<<"\nEnter the salary : ";
  cin>>sal[i];
 }
 }

};

void main(){

employee e;

int i,j,k=0;


for(i=0;i<3;i++)
{
 cout<<"\nEnter the employee id : ";
 cin>>e.id[i];

 cout<<"\nEnter the salary : ";
 cin>>e.sal[i];
}

for(;k!=2;)
{
 cout<<"\nChoose your operation\n\n1.Maximum salary\n2.Minimum salary\n3.Clear info\n4.Exit\n";
 cin>>j;

 if(j==1)
 e.maxsal();
 else
   if(j==2)
   e.minsal();
   else
     if(j==3)
     {
      e.clear();
      continue;
     }
     else
       if(j==4)
       exit(0);
       else
       cout<<"\nEnter a proper choice (1.,2.,3. or 4.)";

 cout<<"\nPerform more operation ?\n\n1.Yes\n2.No\n";
 cin>>k;
}

//exit(0);

//getch();
}
