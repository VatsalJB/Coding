#include<iostream.h>
#include<conio.h>

class matrix
{
  int mat[3][3];

  public :

  int s;

  void input();
  void display(int);
  void sum();
  int access(int,int);
  void transpose();
  void sort_row();
};

void matrix :: input()
{
  cout<<"\nEnter the matrix : ";

  for(int i=0;i<3;i++)
     for(int j=0;j<3;j++)
     cin>>mat[i][j];
}

void matrix :: display(int k)
{
  if(k==0)
  cout<<"\nThe matrix is : "<<endl<<endl;
  else
    if(k==1)
    cout<<"\nThe sorted matrix is : "<<endl<<endl;
    else
      if(k==2)
      cout<<"\nThe transpose of sorted matrix is : "<<endl<<endl; 

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    cout<<mat[i][j]<<" ";

    cout<<endl;
  }

};


void matrix :: sum()
{
  s=0;

  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    s=s+mat[i][j];

  cout<<"\nThe sum of all elements of the matrix is : "<<s;

  s=0;

  for(int i=0;i<3;i++)
  s=s+mat[i][i];

  cout<<"\nThe sum of left diagonal of original matrix is : "<<s;

}


int matrix :: access(int i,int j)
{
  return mat[i][j];
}


void matrix :: transpose()
{
  int temp;

  for(int i=0;i<3;i++)
    for(int j=i;j<3;j++)
    {
     temp=mat[i][j];
     mat[i][j]=mat[j][i];
     mat[j][i]=temp;
    }

}

void matrix :: sort_row()
{
  int i,j,k,temp;

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      for(k=j;k<3;k++)
      if(mat[i][j]>mat[i][k])
      {
       temp=mat[i][j];
       mat[i][j]=mat[i][k];
       mat[i][k]=temp;
      }
}


void main(){

matrix m[2];

int i,j;

for(i=0;i<2;i++)
{

m[i].input();
m[i].display(0);
m[i].sort_row();
//cout<<"\nSorting...\n";
m[i].display(1);
m[i].transpose();
m[i].display(2);
m[i].sum();

cout<<endl;
}

cout<<endl;

for(i=0;i<3;i++)
{
 if(m[0].access(i,i)!=m[1].access(i,i))
 break;
}

if(i==3)
cout<<"\nTheir left diagonals are equal";
else
cout<<"\nTheir left diagonals are not equal";


for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
    if(m[0].access(i,j)!=m[1].access(i,j))
    break;

 if(j!=3)
 break;
}

if(i==3)
cout<<"\nThe 2 matrices are equal";
else
cout<<"\nThe 2 matrices are not equal";


getch();
}