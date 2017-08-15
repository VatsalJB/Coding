#include<iostream.h>
#include<conio.h>

class d2
{
  int A[20][20],count,auto_m[20],r,c;

  public :

  int l;

  d2(int m,int n,int B[20][20])
  {
    int i,j;

    r=m;
    c=n;

    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       A[i][j]=B[i][j];

  }

  void count_automorphic();
  void display();

};

void d2 :: count_automorphic()
{

 int temp,s;

 l=0;

 for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
      s=A[i][j]*A[i][j];
      temp=A[i][j];

      for(;temp>0;temp=temp/10,s=s/10)
        if(temp%10!=s%10)
        break;

     if(temp==0)
     {
      auto_m[l]=A[i][j];
      l++;
     }
   }

}


void d2 :: display()
{
  cout<<"\nThe matrix is : \n";

  for(int i=0;i<r;i++)
  {
     for(int j=0;j<c;j++)
     cout<<A[i][j]<<" ";

     cout<<endl;
  }

  cout<<"\nNo. of automorphic numbers : "<<l;

  cout<<"\nThe automorphic numbers are : ";

  for(int i=0;i<l;i++)
  cout<<auto_m[i]<<" ";

}

void main(){
int m,n,B[20][20];

cout<<"\nEnter the no. of rows of matrix : ";
cin>>m;

cout<<"\nEnter the no.of columns of matrix : ";
cin>>n;

cout<<"\nEnter the matrix elements : ";

for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
   {
    cin>>B[i][j];
   }

d2 c1(m,n,B);

c1.count_automorphic();
c1.display();

getch();
}
