#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>


char str1[20];
char str2[20];
char sorted[40];


class sort
{
  char str[20];
  int k;

  public :

  sort(char x[],char y[])
  {
    strcpy(str1,x);
    strcpy(str2,y);
  }

  sort(char A[])
  {
    int i,j;

    for(i=0;A[i]!='\0';i++)
    {
       if(A[i]==' ')
       {
         for(j=i;A[j]!='\0';j++)
         A[j]=A[j+1];
       }
    }

    strcpy(str,A);

    display(0);
  }

  void choose();
  void display(int);
  void selsort();
  void bubblesort();
  void mergesort();

};

void sort :: choose()
{
  cout<<"\n\nEnter the type of sorting you want : ";
  cout<<"\n\n1.Bubble Sort\n2.Selection Sort\n3.Merge Sort\n";
  cin>>k;

  if(k==1)
  bubblesort();

  if(k==2)
  selsort();

  if(k==3)
  mergesort();
}

void sort :: mergesort()
{
   int i,j;
   char temp;

   for(i=0;str1[i]!='\0';i++)
    for(j=i;str1[j]!='\0';j++)
     if(str1[i]>str1[j])
     {
       temp=str1[i];
       str1[i]=str1[j];
       str1[j]=temp;
     }

 for(i=0;str2[i]!='\0';i++)
  for(j=i;str2[j]!='\0';j++)
     if(str2[i]>str2[j])
     {
       temp=str2[i];
       str2[i]=str2[j];
       str2[j]=temp;
     }


  for(i=0,j=0,k=0;str1[i]!='\0'&&str2[j]!='\0';k++)
    if(str1[i]>str2[j])
    {
     sorted[k]=str2[j];
     j++;
    }
    else
    {
     sorted[k]=str1[i];
     i++;
    }

  if(str1[i]=='\0')
    for(;str2[j]!='\0';j++,k++)
    sorted[k]=str2[j];
  else
    for(;str1[i]!='\0';i++,k++)
    sorted[k]=str1[i];

  sorted[k]='\0';

  display(2);

}


void sort :: bubblesort()
{
  int i,j,len;

  char temp;

  for(i=0;str[i]!='\0';i++);
  len=i-1;

  for(i=0;str[i]!='\0';i++)
     for(j=0;j<len-i;j++)
        if(str[j]>str[j+1])
        {
         temp=str[j];
         str[j]=str[j+1];
         str[j+1]=temp;
        }

  display(1);
}


void sort :: selsort()
{
  int i,j;

  char temp;

  for(i=0;str[i]!='\0';i++)
     for(j=i;str[j]!='\0';j++)
     {

       if(str[i]>str[j])
       {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
       }
     }

  display(1);
}


void sort :: display(int i)
{
   if(i==0)
   cout<<"\nThe string without spaces is : "<<str;

   if(i==1)
   cout<<"\nThe sorted string is : "<<str;

   if(i==2)
   cout<<"\nThe sorted string is : "<<sorted;
}



class search
{
 char word[10];

 public :

 void lsearch(char str[]);

};

void search :: lsearch(char str[])
{
  int i,j;

  cout<<"\nEnter the word to be searched : ";
  gets(word);

  char temp[10];

  for(i=0,j=0;str[i]!='\0';i++,j++)
  {
    temp[j]=str[i];

    if(str[i]==' ')
    {
      temp[j]='\0';
      j=-1;

      if(!strcmp(temp,word))
      {
        j=-5;
        break;
      }
    }

    if(str[i+1]=='\0')
    {
      temp[j+1]='\0';

      if(!strcmp(temp,word))
      {
        j=-5;
        break;
      }
    }
  }

  if(j==-5)
  cout<<"\nThe word exists.";
  else
  cout<<"\nThe word does not exist.";

  sort s(str);
  s.choose();
}


class merge
{
  char m[40];

  public :

  merge(char x[],char y[]);

  void display();

};

void merge :: display()
{
  cout<<"\nThe merged strings are : "<<m;

  search s;
  s.lsearch(m);
}


merge :: merge(char x[],char y[])
{
int i,j;

for(i=0;x[i]!='\0';i++);

x[i]=' ';
i++;

for(j=0;y[j]!='\0';j++,i++)
x[i]=y[j];

x[i]='\0';

strcpy(m,x);
}



class takestring
{
  char A[20],B[20];

  public :

  takestring()
  {
    strcpy(A,"firstname");
    strcpy(B,"lastname");

    sort s(A,B);
    
    merge m(A,B);
    m.display();


  }

  takestring(int x)
  {
    cout<<"\nEnter the first string : ";
    gets(A);

    cout<<"\nEnter the second string : ";
    gets(B);

    sort s(A,B);

    merge m(A,B);
    m.display();

  }

};


void main(){
int i;

cout<<"1.Default strings\n2.Enter the strings\n";
cin>>i;

if(i==1)
takestring t;

if(i==2)
takestring t(i);

getch();
}
