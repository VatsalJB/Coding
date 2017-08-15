//#include<iostream>
#include<stdio.h>

//using namespace std;

int main()
{
  int t;

  scanf("%d",&t);

  while(t--)
  {
    int n,arr[100],flag=1;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0,j=n-1;i<=n/2;i++,j--)
    if(arr[i]!=arr[j])
    {
      flag=0;
      break;
    }

    if(arr[n/2]!=7)
    flag=0;

    if(flag)
    printf("yes\n");
    else
    printf("no\n");
  }
  
  return 0;
}
