#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

struct emp
{
  char name[20];
  int id;
  float sal;
  char city[20];
  emp *next;
};


void main()
{
  emp *start,*end,*top,*ptr,obj;

  int i=1;

  fstream file;
  file.open("record.txt",ios::out|ios::binary);

  for(char ch='y';ch=='y';i++)
  {
    cout<<"\nEmployee "<<i<<endl;

    cout<<"\nEnter name : ";
    gets(obj.name);

    cout<<"\nENter ID : ";
    cin>>obj.id;

    cout<<"\nENter salary : ";
    cin>>obj.sal;

    cout<<"\nEnter city : ";
    gets(obj.city);

    file.write((char *)&obj,sizeof(obj));


      ptr=new emp;
      emp *newptr= new emp;

      strcpy(ptr->name,obj.name);
      ptr->id=obj.id;
      ptr->sal=obj.sal;
      strcpy(ptr->city,obj.city);
      ptr->next=NULL;

      strcpy(newptr->name,obj.name);
      newptr->id=obj.id;
      newptr->sal=obj.sal;
      strcpy(newptr->city,obj.city);
      newptr->next=NULL;


      if(i==1)
      {
        top=ptr;
        top->next=NULL;

        start=end=newptr;
      }
      else
      {
        ptr->next=top;
        top=ptr;

        end->next=newptr;
        end=newptr;
      }

    cout<<"\nEnter more (y/n) ? ";
    cin>>ch;

   }


  file.close();


  fstream newfile;
  newfile.open("tempfile.txt",ios::out|ios::binary);


  while(top)
  {
    strcpy(obj.name,top->name);
    obj.id=top->id;
    obj.sal=top->sal;
    strcpy(obj.city,top->city);

    newfile.write((char *)&obj,sizeof(obj));

    top=top->next;
  }

  newfile.close();

  cout<<"\nEnd of 2nd loop\n";

  newfile.open("tempfile.txt",ios::in|ios::binary);

  cout<<"\nContents of new file are :\n\n";

  i=1;

  while(newfile.read((char *)&obj,sizeof(obj)))
  {
     cout<<"\nEmployee "<<i<<endl;

     cout<<"\nName : "<<obj.name;
     cout<<"\nID : "<<obj.id;
     cout<<"\nSalary : "<<obj.sal;
     cout<<"\nCity : "<<obj.city;
     cout<<endl;

     i++;
  }


  newfile.close();


  int ID;

  cout<<"\nEnter the current employee ID to make changes : ";
  cin>>ID;

  emp *head=start;

  while(head)
  {
    if(head->id==ID)
    break;

    head=head->next;
  }

  if(head!=NULL)
  {
    cout<<"\nMENU\n";
    cout<<"\n1.Name\n2.ID\n3.Salary\n4.City\n";
    cout<<"\nEnter the field to be modified : ";
    cin>>i;

    switch(i)
    {
      case 1 : cout<<"\nEnter new name : ";
      			char newname[20];
               gets(newname);
               strcpy(head->name,newname);
               break;

      case 2 : cout<<"\nEnter new ID : ";
               cin>>ID;
               head->id=ID;
               break;

      case 3 : cout<<"\nEnter new salary : ";
      			float newsal;
               cin>>newsal;
               head->sal=newsal;
               break;

      case 4 : cout<<"\nEnter new city : ";
      			char newcity[20];
               gets(newcity);
               strcpy(head->city,newcity);
               break;

      default : cout<<"\nInvalid input.";
                getch();
      			 exit(0);
    }
  }
  else
  {
   cout<<"\nInvalid ID.";
   getch();
   exit(0);
  }

  head=start;

  newfile.open("tempfile.txt",ios::out|ios::binary);

  for(;head;head=head->next)
  {
    strcpy(obj.name,head->name);
    obj.id=head->id;
    obj.sal=head->sal;
    strcpy(obj.city,head->city);

    newfile.write((char *)&obj,sizeof(obj));
  }


  newfile.close();

  cout<<"\nModified file is : \n";

  newfile.open("tempfile.txt",ios::in|ios::binary);

  i=1;

  while(newfile.read((char *)&obj,sizeof(obj)))
  {
     cout<<"\nEmployee "<<i<<endl;

     cout<<"\nName : "<<obj.name;
     cout<<"\nID : "<<obj.id;
     cout<<"\nSalary : "<<obj.sal;
     cout<<"\nCity : "<<obj.city;
     cout<<endl;

     i++;
  }

  newfile.close();


  getch();

}


