/*
  empid, name, salary , city
  min sal , max sal, sort by name
*/


#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct emp
{
   int id;
   char name[20];
   float sal;
   char city[20];
   emp *next;
};


/*
linked *create(linked *ptr)
{
  ptr=new linked;
  return ptr;
} */




void main()
{
  emp *start,*end,*ptr;

   start=end=NULL;

  fstream file;
  file.open("Records.txt",ios::out|ios::binary);

  emp obj;

  int i=1;

  for(char ch='y';ch=='y';i++)
  {
    cout<<"\nEmployee "<<i<<endl;

    cout<<"\nEnter name : ";
    gets(obj.name);

    cout<<"\nEnter ID : ";
    cin>>obj.id;

    cout<<"\nEnter salary : ";
    cin>>obj.sal;

    cout<<"\nEnter city : ";
    gets(obj.city);
  /*
    cout<<"\n\nname : "<<obj.name;
    cout<<"\nID : "<<obj.id;
    cout<<"\nSalary : "<<obj.sal;
    cout<<"\nCity : "<<obj.city;
  */
    file.write((char *)& obj,sizeof(obj));

    cout<<"\nEnter more (y/n) ? ";
    cin>>ch;
  }

  file.close();

 file.open("Records.txt",ios::in|ios::binary);

  float min,max;

  max=0;

  char arr[10][10];

  i=0;

  while(file.read((char *)&obj,sizeof(obj)))
  {
    //file.read((char *)&obj,sizeof(obj));

    if(i==0)
    {
     min=obj.sal;
     start = new emp;

     strcpy(start->name,obj.name);
     start->sal=obj.sal;
     start->id=obj.id;
     strcpy(start->city,obj.city);
     start->next=NULL;

     end=start;

    }
    else
    {
      end->next = new emp;

      strcpy(end->next->name,obj.name);
      strcpy(end->next->city,obj.city);
      end->next->sal=obj.sal;
      end->next->id=obj.id;

      end=end->next;
      end->next=NULL;
    }


    if(min>obj.sal)
    min=obj.sal;

    if(max<obj.sal)
    max=obj.sal;

    strcpy(arr[i],obj.name);

    i++;
  }

  file.close();

  file.open("Records.txt",ios::in|ios::binary);

  char temp[10];

  for(int j=0;j<i;j++)
     for(int k=0;k<(i-1-j);k++)
       if(arr[k][0]>arr[k+1][0])
       {
         strcpy(temp,arr[k]);
         strcpy(arr[k],arr[k+1]);
         strcpy(arr[k+1],temp);
       }


  cout<<"\nRecords in sorted order are : \n";

  for(int j=0;j<i;j++)
  {
     while(file.read((char *)&obj,sizeof(obj)))
     {
       //file.read((char *)&obj,sizeof(obj));

       if(!strcmp(obj.name,arr[j]))
       {
         cout<<"\nEmployee "<<j+1<<endl;

         cout<<"\nName : "<<obj.name;
         cout<<"\nID : "<<obj.id;
         cout<<"\nSalary : "<<obj.sal;
         cout<<"\nCity : "<<obj.city;
         cout<<endl;
       }
     }

     file.close();
     file.open("Records.txt",ios::in|ios::binary);
  }

  while(file.read((char *)&obj,sizeof(obj)))
  {
    //file.read((char *)&obj,sizeof(obj));

    if(min==obj.sal)
    {
      cout<<"\nEmployee with minimun salary : \n";

      cout<<"\nName : "<<obj.name;
      cout<<"\nID : "<<obj.id;
      cout<<"\nSalary : "<<obj.sal;
      cout<<"\nCity : "<<obj.city;
    }

    if(max==obj.sal)
    {
      cout<<"\nEmployee with maximum salary : \n";

      cout<<"\nName : "<<obj.name;
      cout<<"\nID : "<<obj.id;
      cout<<"\nSalary : "<<obj.sal;
      cout<<"\nCity : "<<obj.city;
    }
  }


 /*

  while(file.read((char *)&obj,sizeof(obj)))
  {
    //file.read((char *)&obj,sizeof(obj));

    cout<<"\nName : "<<obj.name;
    cout<<"\nID : "<<obj.id;
    cout<<"\nSalary : "<<obj.sal;
    cout<<"\nCity : "<<obj.city;

    cout<<endl;
  }
    */
  file.close();

  cout<<"\n\nThe linked list is : \n";

  emp *head=start;

  while(head)
  {
    cout<<"\nName : "<<head->name;
    cout<<"\nID : "<<head->id;
    cout<<"\nSalary : "<<head->sal;
    cout<<"\nCity : "<<head->city;
    cout<<endl;

    head=head->next;
  }


  //ptr=new emp;
  ptr=start;
  //emp *ptr1= new emp;

  for(;ptr;ptr=ptr->next)
  {

     for(emp *ptr1=ptr;ptr1;ptr1=ptr1->next)
       if(ptr->name[0]>ptr1->name[0])
       {
         emp *temp1 = new emp;

         strcpy(temp1->name,ptr->name);
         temp1->id=ptr->id;
         temp1->sal=ptr->sal;
         strcpy(temp1->city,ptr->city);

         strcpy(ptr->name,ptr1->name);
         ptr->id=ptr1->id;
         ptr->sal=ptr1->sal;
         strcpy(ptr->city,ptr1->city);

         strcpy(ptr1->name,temp1->name);
         ptr1->id=temp1->id;
         ptr1->sal=temp1->sal;
         strcpy(ptr1->city,temp1->city);
       }
  }

  cout<<"\nSorted linked list is : \n";

  while(start)
  {
    cout<<"\nName : "<<start->name;
    cout<<"\nID : "<<start->id;
    cout<<"\nSalary : "<<start->sal;
    cout<<"\nCity : "<<start->city;
    cout<<endl;

    start=start->next;
  }




  cout<<"\n\nEnter the suffix : ";
  char suf[10];
  gets(suf);

  int size;

  for(size=0;suf[size]!='\0';size++);

  fstream nfile;

  nfile.open("temp.txt",ios::out|ios::binary);
  file.open("Records.txt",ios::in|ios::binary);


  while(file.read((char *)&obj,sizeof(obj)))
  {
     i=0;

     for(;obj.name[i]!='\0';i++);

     i--;

     int k;

     for(k=size-1;k>=0;k--,i--)
       if(obj.name[i]!=suf[k])
       break;


       if(k==-1)
       nfile.write((char *)&obj,sizeof(obj));
  }

  file.close();
  nfile.close();

  nfile.open("temp.txt",ios::in|ios::binary);

  cout<<"\n\nNew file is : \n";

  while(nfile.read((char *)&obj,sizeof(obj)))
  {
    cout<<"\nName : "<<obj.name;
    cout<<"\nID : "<<obj.id;
    cout<<"\nSalary : "<<obj.sal;
    cout<<"\nCity : "<<obj.city;

    cout<<endl;
  }

  nfile.close();


  getch();
}