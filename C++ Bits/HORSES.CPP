#include<iostream>
#include<algorithm>
#include<conio>

using namespace std;

int main()
{
   int t,n;
   double horse[5000],sum;

   cin>>t;

   for(int i=0;i<t;i++)
   {

      cin>>n;

      for(int j=0;j<n;j++)
      {
        cin>>horse[j];
      }
/*
      for(int j=0;j<n;j++)
        for(int k=j+1;k<n;k++)
        if(horse[k]<=horse[j])
        {
          int temp=horse[j];
          horse[j]=horse[k];
          horse[k]=temp;
        }
*/                                                               
      for(int j=0;j<n;j++)
      cout<<horse[j];

      cout<<endl;

      sort(horse,horse+n);
      sum=horse[n-1];

      for(int j=0;j<(n-1);j++)
         if((horse[j+1]-horse[j]<=sum))
         sum=(horse[j+1]-horse[j]);

      cout<<sum;
   }

   getch();

   return 0;
}