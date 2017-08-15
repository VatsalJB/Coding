#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
  char A[10][30];
  int B[10];
  int n;

  cout<<"\nNumber of names : ";
  cin>>n;

  for(int i=0;i<n;i++)
  {
    cout<<"\nEnter name "<<i+1<<" : ";
    gets(A[i]);
  }

  for(int i=0;i<n;i++)
  B[i]=0;

  for(int i=0;i<n;i++)
  {

    for(int j=0;j<n;j++)
     if(j!=i)
      if(!strcmp(A[i],A[j]))
      B[j]=1;

   // cout<<endl<<count;



    if(B[i]==0)
    cout<<"\nGive";
    else
    cout<<"\nDon't give";
  }


  getch();
}
