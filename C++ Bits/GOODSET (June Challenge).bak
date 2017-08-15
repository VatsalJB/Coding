#include<iostream.h>
#include<conio.h>

//using namespace std;

int main()
{
  int i,list[100],arr[100],n=0;

  cin>>i;

  for(int j=0;j<i;j++)
  cin>>arr[j];

  while(i--)
  {


     for(int i=1,lim=0;lim<arr[n];i++)
     {
        int flag=0;

        if(lim<2)
        {
          list[lim]=i;
          lim++;
        }
        else
        {
          int j;

          for(j=0;j<(lim-1);j++)
          {
             for(int k=j+1;k<lim;k++)
             if(i==(list[j]+list[k]))
             {
               flag=1;
               break;
             }

             if(flag)
             break;
          }

          if(j!=(lim-1))
          continue;
          else
          {
            list[lim]=i;
            lim++;
          }

         }
     }

     for(int i=0;i<arr[n];i++)
     cout<<list[i]<<" ";

     cout<<endl;

     n++;
  }

  getch();

  return 0;
}





