#include<iostream.h>
#include<conio.h>
#include<algorithm>

using namespace std;

int main()
{
  int t;

  cin>>t;

  while(t--)
  {
     int n,k,count=0;

     cin>>n>>k;

     int arr[2500][2500];

     int len[2500];

     for(int i=0;i<n;i++)
     {
       cin>>len[i];

       for(int j=0;j<len[i];j++)
       cin>>arr[i][j];
     }

     int ideal[2500]={0};
     int m=0;

     for(int i=0;i<n;i++)
        for(int K=i+1,j,l;K<n;K++)
        {
             sort(arr[i],arr[i]+len[i]);
             sort(arr[K],arr[K]+len[K]);

             for(j=0,l=0,m=0;j<len[i]&&l<len[K];)
             {

                if(arr[i][0]<arr[K][0])
                {
                  ideal[m]=arr[i][0];
                  m++;
                  j++;
                }
                else
                {
                  ideal[m]=arr[K][0];
                  m++;
                  l++;
                }


                if(arr[i][j]<arr[K][l]&&arr[i][j]>ideal[m-1]&&m>0)
                {
                  ideal[m]=arr[i][j];
                  m++;
                  j++;
                }
                else
                  if(arr[i][j]>arr[K][l]&&arr[K][l]>ideal[m-1]&&m>0)
                  {
                    ideal[m]=arr[K][l];
                    m++;
                    l++;
                  }


                 if(arr[i][j]==arr[K][l]&&arr[i][j]>ideal[m-1])
                 {
                   ideal[m]=arr[i][j];
                   m++;
                   j++;
                   l++;
                 }
                 else
                   if(arr[i][j]==ideal[m-1]&&arr[K][l]!=arr[i][j])
                   {
                     ideal[m]=arr[i][j];
                     m++;
                     j++;
                   }
                   else
                     if(arr[K][l]==ideal[m-1]&&arr[i][j]!=arr[K][l])
                     {
                       ideal[m]=arr[K][l];
                       m++;
                       l++;
                     }
                     else
                     {
                       j++;
                       l++;
                     }

             }

             if(j==len[i])
             {
               for(;l<len[K];l++)
                 if(ideal[m-1]!=arr[K][l])
                 {
                    ideal[m]=arr[K][l];
                    m++;
                 }
             }
             else
             {
               for(;j<len[i];j++)
                 if(ideal[m-1]!=arr[i][j])
                 {
                    ideal[m]=arr[K][l];
                    m++;
                 }
             }

             if(m==k)
             count++;

        }

     cout<<count<<endl;
  }

  return 0;
}
