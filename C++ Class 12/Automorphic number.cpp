#include<iostream.h>
#include<conio.h>

class newmat
{
 int m[5][5],j,k,i;

 public :

 void function(int);
 void display();
 void sort();
};


void newmat :: display()
{
 cout<<"\nThe matrix is : \n\n";

 for(i=0;i<j;i++)
 {
   for(k=0;k<j;k++)
   cout<<m[i][k]<<" ";

  cout<<endl;
 }
}

void newmat :: function(int s)
{
 int l,o;

 j=0;

 for(i=1;s/i>0;i=i*10)
 j++;

 l=s;

 for(i=0,o=0;i<j;i++,o++)
 {
  s=l;

    for(k=j-1;k>=0;k--,s=s/10)
    {
     m[i][k]=s%10 - o;
    }

 }

 display();

}

void newmat :: sort()
{
  int temp,l;

  for(l=0;l<j*j;l++)
    for(i=0;i<j;i++)
    {

      for(k=0;k<(j-1);k++)
      {

        if(m[i][k]>m[i][k+1])
        {
         temp=m[i][k];
         m[i][k]=m[i][k+1];
         m[i][k+1]=temp;
        }
      }

     if(i+1<j)
        if(m[i][k]>m[i+1][0])
        {
         temp=m[i][k];
         m[i][k]=m[i+1][0];
         m[i+1][0]=temp;
        }

   }

display();

}


class number
{
   int n;

   public :

   int automorphic();
   void take_num();
};

void number :: take_num()
{
  cout<<"\nENter the number : ";
  cin>>n;
}

int number :: automorphic()
{
 int a,i,j;

 a=n*n;
 j=n;

 cout<<"\nThe square is : "<<a;

 for(i=0;j>0;j=j/10,a=a/10)
   if(j%10!=a%10)
   break;

 if(j==0)
 return n*n;
 else
 return 0;
}


void main(){
number n;
newmat m;
int i;

n.take_num();
i=n.automorphic();

if(i!=0)
{
cout<<"\nThe number is automorphic.";
m.function(i);
m.sort();
}
else
cout<<"\nThe number is not automorphic.";

getch();
}

