#include<iostream>
#include<conio>
#include<algorithm>

//using namespace std;

int check(int jobs[],int j,int m)
{
  for(int i=0;i<m;i++)
    if(j==jobs[i])
    return 0;

  return 1;
}

int main()
{
   int t,m,n,job[1000];

   cin>>t;

   while(t--)
   {
     cin>>n>>m;

     for(int i=0;i<m;i++)
     cin>>job[i];

     sort(job,job+m);

     for(int i=m,j=1;i<n;j++)
        if(check(job,j,m))
        {
          job[i]=j;
          i++;
        }

     for(int i=m;i<n;i=i+2)
       if(job[i]>n)
       break;
       else
       cout<<job[i]<<" ";

     cout<<endl;

     for(int i=m+1;i<n;i=i+2)
       if(job[i]>n)
       break;
       else
       cout<<job[i]<<" ";

   }

getch();

return 0;
}
