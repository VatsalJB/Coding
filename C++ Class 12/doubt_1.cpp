#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{

  int A[10];
 /* gets(A);

  cout<<A;
  //A++;
  cout<<endl<<A;
 // A--;
  cout<<endl<<A;

  int A[3];
  for(int i=0;i<3;i++)
  cin>>A[i];

  cout<<A<<endl;
  //A++;
  cout<<A<<endl;
  //A--;
  cout<<A<<endl;
  */

  const int *i = A;
  //cout<<i;

  i++;

  getch();
}