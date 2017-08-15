#include<iostream>
#include<conio>
//using namespace std;


int main()
{
   long int a;
   int n,k,chamber[100];     //k-> chambers; n-> max particles in each ch.

   cin>>a>>n>>k;

   for(int i=0;i<k;i++)
   chamber[i]=0;

   for(int i=0;i<a;i++)
     for(int j=0;j<k&&j<a;j++)               //j=0
       if(chamber[j]>=n)
       {
          chamber[j]=0;
          continue;
       }
       else
       {
          chamber[j]++;
          break;
       }   



   for(int i=0;i<k;i++)
   cout<<chamber[i];

   cout<<endl;

  getch();

   return 0;
}
