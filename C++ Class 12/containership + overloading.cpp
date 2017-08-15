#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class your_rev
{
  public :

  void rev(char x[])
  {
    int i,j;
    char v[20];

    for(i=0;x[i]!='\0';i++);

    v[i]='\0';

    i--;

    for(j=0;i>=0;i--,j++)
    v[j]=x[i];

    cout<<"\nThe reversed value of the string is : "<<v;
   }

  void rev(int sum)
  {
    int s=0,j;

    for(;sum>0;sum/=10)
    {
      j=sum%10;

      s=s*10+j;
    }

    cout<<"\nThe reversed value of the sum is : "<<s;
  }

};

class myadd
{

  char a1,a2,st1[20],st2[10],b[3];
  int i1,i2,sum;

  your_rev y;



  void add(char c1,char c2)
  {
   b[0]=c1;
   b[1]=c2;
   b[2]='\0';

   cout<<"\nTheir addition is : "<<b;

   y.rev(b);
  }

  void add(int i,int j)
  {
    i=i+j;

    cout<<"\nTheir sum is : "<<i;

    y.rev(i);
  }

  void add(char a[],char b[])
  {
    strcat(a,b);
    cout<<"\nThe modified string is : "<<a;

    y.rev(a);
  }

  public :

  void menu()
  {
    cout<<"\nEnter the first character : ";
    cin>>a1;

    cout<<"\nEnter the second character : ";
    cin>>a2;

    add(a1,a2);

    cout<<"\nENter the first integer : ";
    cin>>i1;

    cout<<"\nEnter the second integer : ";
    cin>>i2;

    add(i1,i2);

    cout<<"\nEnter the first string : ";
    gets(st1);

    cout<<"\nEnter the second string : ";
    gets(st2);

    add(st1,st2);

  }

};



void main(){

myadd m;

m.menu();

getch();
}