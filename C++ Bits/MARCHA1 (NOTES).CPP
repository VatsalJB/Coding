#include<iostream>
#include<conio.h>
//#include<algorithm>

int main()
{
  int t,n,note[20],money;

  cin>>t;

  while(t--)
  {
    int sum=0,ct=0;

    cin>>n;

    cin>>money;

    for(int i=0;i<n;i++)
    cin>>note[i];

   // sort(note,note+n);

  /*  for(int i=0;i<n;i++)
        if(note[i]>money)
        {
          k=i;
          break;
        }

    if(note[k-1]==money)
    cout<<"Yes\n";
    else
    {  */


    for(int i=0;i<n;i++)
    {
      sum=0;

      for(int j=i;j<n;j++)
        for(int l=0;l<i+1;l++)
        sum+=note[l+j];

      if(sum==money)
      {
        ct=1;
        break;
      }
    }


    if(ct==1)
    cout<<"Yes\n";
    else
    cout<<"No\n";



  }

  return 0;
}
