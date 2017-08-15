#include<iostream>
#include<conio.h>

//using namespace std;

int main()
{
   long int A[100],B[100],C[100];
   int t;

   cin>>t;

   while(t--)
   {
      int p,q,r;
      long int sum=0;

      cin>>p>>q>>r;

      for(int i=0;i<p;i++)
      cin>>A[i];

      for(int i=0;i<q;i++)
      cin>>B[i];

      for(int i=0;i<r;i++)
      cin>>C[i];


      for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
           for(int k=0;k<r;k++)
             if(B[j]>=A[i]&&B[j]>=C[k])
             sum+=(A[i]+B[j])*(B[j]+C[k]);

      //sum=sum%1000000007;

      cout<<sum%1000000007<<endl;
    }

    getch();

    return 0;
}
