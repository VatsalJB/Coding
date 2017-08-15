#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

class number
{
 int num;

 public :

 int mid,i,a;

 void input();
 void digits();
 void zeroes();
 int B_search();
 int B_search(char a[]);
 void small();
 void big();
 void small(char a[]);
 void big(char a[]);

};

void number :: input()
{
 cout<<"\nEnter the number : ";
 cin>>num;
}

void number :: digits()
{
 a=num;
 i=0;

 if(a==0)
 cout<<"\nNo. of digits = 1";
 else
 {
  while(a>0)
  {
   a=a/10;
   i++;
  }

  cout<<"\nNo. of digits = "<<i;
 }
}

void number :: zeroes()
{
 i=0;
 a=num;
 int j;

 if(a==0)
 cout<<"\nNo. of zeroes = 1";
 else
 {
  while(a>0)
  {
   j=a%10;

   if(j==0)
   i++;

   a=a/10;
  }

 cout<<"\nNo. of zeroes = "<<i;

 }

}

int number :: B_search()
{
  cout<<"\nNo. = "<<num;

  int n[6],j;

  a=num;     //a=1234
  i=0;

  cout<<"\na="<<a;

  while(a>0)
  {
   j=a%10;      //j=4,3,2,1
   n[i]=j;      //n[i]=4,3,2,1
   i++;
   a=a/10;      //0
  }

 int ub,lb;

 ub=i-1;
 lb=0;

 cout<<"\nEnter the digit to be searched : ";
 cin>>a;

 for(;ub>=lb;)
 {
  mid=(ub+lb)/2;

  if(a<n[mid])
  lb=mid+1;
  else
     if(a>n[mid])
     ub=mid-1;
     else
     {
      ub=-1;
      break;
     }
 }

 if(ub==-1)
 return 1;
 else
 return 0;

}

int number :: B_search(char A[])
{
 int ub,lb;
 char ch;

 cout<<"\nEnter the character to be searched : ";
 cin>>ch;

 for(ub=0;A[ub]!='\0';ub++);

 cout<<"\nub="<<ub<<endl;

 ub--;
 lb=0;

 for(;ub>=lb;)
 {
  mid=(ub+lb)/2;

  if(ch<A[mid])
  ub=mid-1;
  else
     if(ch>A[mid])
     lb=mid+1;
     else
     {
      ub=-1;
      break;
     }
 }

 if(ub==-1)
 return 1;
 else
 return 0;

}

void number :: small()
{
  int s=10;

  a=num;

  for(;a>0;a=a/10)
  {
   i=a%10;

   if(s>i)
   s=i;
  }

 cout<<"\nThe smallest digit is : "<<s;

}

void number :: big()
{
  int s=0;

  a=num;

  for(;a>0;a=a/10)
  {
   i=a%10;

   if(s<i)
   s=i;
  }

 cout<<"\nThe biggest digit is : "<<s;
}


void number :: big(char A[])
{
 int len=0,j=0,k,l,i;


 for(i=0;A[i]!='\0';i++)
    if(A[i]==' ')
    {
      k=i-j;

        if(len<k)
        {
         len=k;
         l=j;
        }

       j=i+1;
    }

 if(A[i]=='\0')
 k=i-j;

 if(len<k)
 {
  l=j;
 }

cout<<"\nThe biggest word is : ";

for(;A[l]!=' '&&A[l]!='\0';l++)
cout<<A[l];

}

void number :: small(char A[])
{
 int len,j=0,k,l=0,i;


 for(i=0;A[i]!='\0';i++)
    if(A[i]==' ')
    {
      k=i-j;

     if(j==0)
     len=k;

        if(len>k)
        {
         len=k;
         l=j;
        }

       j=i+1;
    }

 if(A[i]=='\0')
 k=i-j;

 if(len>k)
 {
  l=j;
 }

cout<<"\nThe smallest word is : ";

for(;A[l]!=' '&&A[l]!='\0';l++)
cout<<A[l];

}



class token
{
  char A[50],ch;
  int w,i;

  public :

  number n;

  void words();
  void length();
  void input();
  void space();
  void numbers();
  void call();
  int blength();
  int slength();
  //void bword();
  //void sword();

};

void token :: input()
{
 cout<<"\nEnter the string in sorted form : ";
 gets(A);
}

void token :: length()
{
 for(i=0;A[i]!='\0';i++);
 cout<<"\nLength of the string is : "<<i;
}

void token :: words()
{
 w=1;

 for(i=0;A[i]!='\0';i++)
   if(A[i]==' ')
   w++;

cout<<"\nThe no of words = "<<w;

}

void token :: space()
{
 w=0;

 for(i=0;A[i]!='\0';i++)
   if(A[i]==' ')
   w++;

 cout<<"\nNo. of spaces = "<<w;
}

void token :: numbers()
{
 int j=0;

 cout<<"\nThe digits present in the sentence are : ";

 for(i=0;A[i]!='\0';i++)
   if(isdigit(A[i]))
   {
    cout<<A[i]<<" ";
    j=1;
   }

if(j==0)
cout<<"None";
}

void token :: call()
{
 int temp;

 n.big(A);

 temp=blength();

 cout<<"\nThe length of the biggest word is : "<<temp;

 n.small(A);

 temp=slength();

 cout<<"\nLength of the smallest word is : "<<temp;

 temp=n.B_search(A);

 if(temp==1)
 cout<<"\nThe character exists at place "<<(n.mid+1);
 else
 cout<<"\nThe character does not exist.";

 n.input();
 n.digits();
 n.zeroes();
 n.small();
 n.big();
 temp=n.B_search();

 if(temp==1)
 cout<<"\nThe digit exists at place "<<(n.i-n.mid);
 else
 cout<<"\nThe digit does not exist.";

}


int token :: blength()
{
 int len=0,j=0,k;

 for(i=0;A[i]!='\0';i++)
    if(A[i]==' ')
    {
      k=i-j;

        if(len<k)
        len=k;

       j=i+1;
    }

 if(A[i]=='\0')
 k=i-j;

 if(len<k)
 len=k;

return len;
}

int token :: slength()
{
 int len,j=0,k;

 for(i=0;A[i]!='\0';i++)
    if(A[i]==' ')
    {
      k=i-j;

        if(j==0)
        len=k;

        if(len>k)
        len=k;

       j=i+1;
    }

 if(A[i]=='\0')
 k=i-j;

 if(len>k)
 len=k;

return len;
}

/*
void token :: bword()
{
 int len=0,j=0,k,l;


 for(i=0;A[i]!='\0';i++)
    if(A[i]==' ')
    {
      k=i-j;

        if(len<k)
        {
         //for(l=0;l<k;l++,j++)
         //B[l]=A[j];

         //B[l]='\0';
         len=k;
         l=j;
        }

       j=i+1;
    }

 if(A[i]=='\0')
 k=i-j;

 if(len<k)
 {
  //for(l=0;l<k;l++,j++)
  //B[l]=A[j];
  //B[l]='\0';

  l=j;
 }

cout<<"\nThe biggest word is : ";

for(;A[l]!=' '&&A[l]!='\0';l++)
cout<<A[l];

}


void token :: sword()
{
 int len,j=0,k,l=0;


 for(i=0;A[i]!='\0';i++)
    if(A[i]==' ')
    {
      k=i-j;

     if(j==0)
     len=k;

        if(len>k)
        {
         len=k;
         l=j;
        }

       j=i+1;
    }

 if(A[i]=='\0')
 k=i-j;

 if(len>k)
 {
  l=j;
 }

cout<<"\nThe smallest word is : ";

for(;A[l]!=' '&&A[l]!='\0';l++)
cout<<A[l];

}
*/

void main(){
token t;

t.input();
t.words();
t.space();
t.length();
t.numbers();
t.call();

getch();
}