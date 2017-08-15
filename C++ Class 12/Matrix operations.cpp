#include<iostream.h>
#include<conio.h>

class onematrix
{
 public :

 void pattern(int [][20],int);
 void boundary_sort(int [][20],int);
};

void onematrix :: pattern(int A[][20],int r)
{
 int i,j,k,l;

 if(r%2==0)
 r--;

 cout<<"\nThe required matrix is : \n";

 for(i=0;i<r;i++)
 {
   for(j=0;j<r;j++)
   cout<<A[i][j]<<" ";

   cout<<endl;
 }

 for(i=0,k=r-1;i<r;i++,k--)
    for(j=r-1,l=0;j>k;j--,l++)
    {
     A[i][j]=0;
     A[i][l]=0;
    }

 cout<<"\n\nThe modified matrix is : \n\n";

 for(i=0;i<r;i++)
 {
   for(j=0;j<r;j++)
   cout<<A[i][j]<<" ";

   cout<<endl;
 }

}


void onematrix :: boundary_sort(int A[][20],int r)
{
  int i,j,l,temp;

  l=r;

  l--;

  for(i=0;l>0;l--)
    for(j=0;j<l;j++)
      if(A[i][j]>A[i][j+1])
      {
       temp=A[i][j];
       A[i][j]=A[i][j+1];
       A[i][j+1]=temp;
      }

  l=r;
  l--;

  for(i=l;l>0;l--)
    for(j=0;j<l;j++)
      if(A[j][i]>A[j+1][i])
      {
       temp=A[j][i];
       A[j][i]=A[j+1][i];
       A[j+1][i]=temp;
      }

  l=r;

  l--;

  for(i=l;l>0;l--)
    for(j=0;j<l;j++)
      if(A[i][j]>A[i][j+1])
      {
       temp=A[i][j];
       A[i][j]=A[i][j+1];
       A[i][j+1]=temp;
      }

  l=r;

  l--;

  for(i=0;l>0;l--)
    for(j=0;j<l;j++)
      if(A[j][i]>A[j+1][i])
      {
       temp=A[j][i];
       A[j][i]=A[j+1][i];
       A[j+1][i]=temp;
      }

  cout<<"\n\nThe matrix with sorted borders is : \n\n";

  for(i=0;i<r;i++)
  {
    for(j=0;j<r;j++)
    cout<<A[i][j]<<" ";

    cout<<endl;
  }

}


class matrix
{
  int m[20][20];

  public :

  int r,c;

  onematrix o;

  void input();
  void LD_sort();
  void RD_sort();
  void display(int);
  void call();

};

void matrix :: input()
{
 r=0;
 c=1;

 for(;r!=c;)
 {
  cout<<"\nENter the no. of rows : ";
  cin>>r;

  cout<<"\nEnter the no. of columns : ";
  cin>>c;

  if(r==c)
  {
  cout<<"\nEnter the matrix elements : ";

  for(int i=0;i<r;i++)
   for(int j=0;j<c;j++)
   cin>>m[i][j];
  }
  else
  cout<<"\nThe no. of rows and columns shoulbe be equal.\n\nTry Again";
 }

}

void matrix :: LD_sort()
{
  int i,j,k=0,temp,min;

  for(i=0;i<r;i++)
  {
   k=i;

    min=m[i][i];

    for(j=i;j<c;j++)
      if(min>m[j][j])
      {
       min=m[j][j];
       k=j;
      }

    temp=m[i][i];
    m[i][i]=min;
    m[k][k]=temp;
  }
}

void matrix :: RD_sort()
{
  int i,j,k,l,o,temp,min;
/*
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
      if((i+j)==2)
      {
        min=m[i][j];

        o=k=i;
        p=l=j;

        for(;k<3;k++,l--)
        {
          if(min>m[k][l])
          {
           min=m[k][l];
           o=k;
           p=l;
          }
        }

        temp=m[i][j];
        m[i][j]=min;
        m[o][p]=temp;
     }
   }
*/

 for(i=0;i<r;i++)
 {
   min=m[i][r-1-i];
   k=i;

   l=i;
   o=r-1-i;

   for(;k<r;k++)
   {
     j=r-1-k;
     if(min>m[k][j])
     {
      min=m[k][j];
      l=k;
      o=j;
     }
   }

   temp=m[i][r-1-i];
   m[i][r-1-i]=min;
   m[l][o]=temp;
 }

}

void matrix :: display(int i)
{
 if(i==0)
 cout<<"\nThe matrix is : \n\n";
 else
   if(i==1)
   cout<<"\nMatrix with sorted left diagonal is : \n\n";
   else
     if(i==2)
     cout<<"\nMatrix with sorted right diagonal is : \n\n";


 for(i=0;i<r;i++)
 {
   for(int j=0;j<r;j++)
   cout<<m[i][j]<<" ";

   cout<<endl;
 }

}


void matrix :: call()
{
 o.pattern(m,r);
 o.boundary_sort(m,r);
}

void main(){

matrix mat;

mat.input();
mat.display(0);
mat.LD_sort();
mat.display(1);
mat.RD_sort();
mat.display(2);
mat.call();

getch();
}
