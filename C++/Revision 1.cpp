/*
1. series1// print series & result
 	num=5
   (5+4+3+2+1)-(4+3+2+1)+(3+2+1)-..(1)=?
2.series2//print result
	term=5

   !1+!2-!3+!4...nterm=?
3. reverse string
	string=vatsal   //-b v a t s a -l
    lastva            l v -a t s -a  b
   4.exit             l a  -t -s  a v
   plz choice:        l a  s  t  a  v


             */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void series1(int);
void series2(int);
void string(char*);
void separate(char *);

void main()
{
  char ch='y';

  for(int i=0;i!=5&&ch=='y';)
  {
    cout<<"\n\nMENU\n";
    cout<<"\n1.Series 1\n2.Series 2\n3.Reverse String\n4.Separate\n5.Exit";

    cout<<"\nENter your choice : ";
    cin>>i;

    switch(i)
    {
      case 1 : int num;
      			cout<<"\nEnter the number : ";
               cin>>num;

               series1(num);

               break;

      case 2 : int term;
      			cout<<"\nEnter no. of terms : ";
               cin>>term;

               series2(term);

               break;

      case 3 : char str[15],*ptr;

               cout<<"\nEnter the string : ";
               gets(str);

               ptr=str;

               string(ptr);

               break;

      case 4 : char str1[15],*ptr1;

      			cout<<"\nEnter string : ";
               gets(str1);

               ptr1=str;

               separate(str1);

               break;

      case 5 : break;

      default : cout<<"\nEnter correct choice.";
     }

     if(i!=5)
     {
       cout<<"\n\nEnter more ? (y/n) : ";
       cin>>ch;
     }
  }

  getch();
}


void series1(int num)
{
  int sum,sum1,i=0;

  sum=sum1=0;

  for(;num>0;num--,i++)
  {
    sum1=0;

    cout<<"(";

    for(int j=num;j>0;j--)
    {
      sum1+=j;

      cout<<j;

      if(j>1)
      cout<<"+";
    }

    if(i%2==0)
    {
      sum=sum+sum1;

      if(num>1)
      cout<<") - ";
      else
      cout<<")";
    }
    else
    {
      sum=sum-sum1;

      if(num>1)
      cout<<") + ";
      else
      cout<<")";
    }
  }

  cout<<" = "<<sum<<endl;

}


void series2(int term)
{
  int sum,fact,i;

  sum=i=0;


  for(int j=1;j<=term;j++)
  {
    fact=1;

    for(i=j;i>0;i--)
      fact=fact*i;


      if(j%2==0||j==1)
      sum=sum+fact;
      else
      sum=sum-fact;
  }

  cout<<"\nSum = "<<sum;
}



void string(char *ptr)
{
   int i,j;

   for(i=0;ptr[i]!='\0';i++)
   {
     switch(ptr[i])
     {
       case 'a' :

       case 'e' :

       case 'i' :

       case 'o' :

       case 'u' : j=i;
       				i=-1;
       				break;
     }

     if(i==-1)
     break;
   }

   if(i==-1)
   {
     char string2[15];

     for(i=0;ptr[i]!='\0';i++);

     i--;

     if(i!=j)
     {
      int k;

      for(k=0;i>j;i--,k++)
      {
        string2[k]=ptr[i];
      }

      if(j!=0)
        for(i=0;i<j;i++,k++)
        string2[k]=ptr[i];

      string2[k]=ptr[j];

      string2[k+1]='\0';

      cout<<"\nModified string is : "<<string2;
     }
     else
     cout<<"\nModified string is : "<<ptr;

   }
   else
   cout<<"\nModified string is : "<<ptr;

}



void separate(char *ptr)
{
   char str[15];

   int i,j;

   for(i=0,j=0;ptr[i]!='\0';i++)
   {
      switch(ptr[i])
      {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : str[j]=ptr[i];
                   ptr[i]='0';
                   j++;
      }
   }

   for(i=0;ptr[i]!='\0';i++)
     if(ptr[i]!='0')
     {
      str[j]=ptr[i];
      j++;
     }

   str[j]='\0';

   cout<<"\nThe modified string is : "<<str;
   
}
