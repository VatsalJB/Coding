#include<stdio.h>

int main()
{
   int t;

   scanf("%d",&t);

   while(t--)
   {
      int n,q;

      scanf("%d %d",&n,&q);

      long int hill[100000];

      for(int i=0;i<n;i++)
      scanf("%d",&hill[i]);

      int q[100000][4];

      for(int i=0;i<n;i++)
        for(int j=0;j<4;j++)
        scanf("%d",&q[i][j];

      for(int i=0;i<q;i++)
      {
         scanf(
