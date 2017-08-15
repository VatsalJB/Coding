#include<stdio.h>

int main()
{
  int t;

  scanf("%d",&t);

  while(t--)
  {
     int n,d;
     long long int arr[100000],sum=0,min=0;

     scanf("%d",&n);
     scanf("%d",&d);

     for(int i=0;i<n;i++)
     {
       scanf("%lld",&arr[i]);
       sum+=arr[i];
     }
     
     printf("%lld\n",sum);

     if(sum%n==0)
     {
       sum=sum/n;

       for(int i=0;(i+d)<n;)
       {

           if(arr[i]>sum&&arr[i+d]<=sum)
           {
             min=min+arr[i]-sum;
             arr[i+d]=arr[i+d]+arr[i]-sum;
             arr[i]=sum;
           }
           else
             if(arr[i]<sum&&arr[i+d]>=sum)
             {
               min=min+sum-arr[i];
               arr[i+d]=arr[i+d]-(sum-arr[i]);
               arr[i]=sum;
             }
             else
               if(arr[i]<sum&&arr[i+d]<=sum)
               {
                 min=min+sum-arr[i];
                 arr[i+d]=arr[i+d]-(sum-arr[i]);
                 arr[i]=sum;
               }
               else
                 if(arr[i]>sum&&arr[i+d]>=sum)
                 {
                   min=min+arr[i]-sum;
                   arr[i+d]=arr[i+d]+arr[i]-sum;
                   arr[i]=sum;
                 }
                 

         if(min==-1)
         break;
         else
         i++;
       }
     }
     else
     min=-1;

     for(int i=n-d;i<n;i++)
     if(arr[i]!=sum)
     {
       min=-1;
       break;
     }

     printf("%lld\n",min);
  }

  return 0;
}
