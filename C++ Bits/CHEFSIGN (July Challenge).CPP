
  /*
  while(t--)
  {
     char s[100001];
     int num[100001];
     int min,max,count;

     min=max=1;

     scanf("%s",s);

     num[0]=1;

     for(count=0;s[count]!='\0';count++)
     {
       if(s[count]=='<')
       {
         num[count+1]=num[count]+1;

         if(num[count+1]>max)
         max=num[count+1];
       }
       else
       if(s[count]=='>')
       {
         if(num[count]==min)
         {
           min--;
           num[count+1]=min;
         }
         else
         if(s[count+1]=='>')
         {
           num[count+1]=num[count]-1;

           if(num[count]==min)
           min--;
         }
         else
         num[count+1]=min;
       }
       else
       num[count+1]=num[count];

     }

     if(min<1)
     max=max-min+1;

     cout<<max<<endl;
  }
  */

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  int t;

  cin>>t;

  while(t--)
  {
    char s[100001];
    int max1,max2;

    scanf("%s",s);

    max1=max2=0;

    for(int i=0;s[i]!='\0';i++)
      if(s[i]=='<')
      max1++;
      else
      if(s[i]=='>')
      {
        if(max1>max2)
        max2=max1;

        max1=0;
      }

    int less;

    if(max2>max1)
    less=max2;
    else
    less=max1;

    max1=max2=0;

    for(int i=0;s[i]!='\0';i++)
      if(s[i]=='>')
      max1++;
      else
      if(s[i]=='<')
      {
        if(max1>max2)
        max2=max1;

        max1=0;
      }

    int greater;

    if(max2>max1)
    greater=max2;
    else
    greater=max1;

    if(less>greater)
    cout<<less+1<<endl;
    else
    cout<<greater+1<<endl;

  }

  return 0;
}
