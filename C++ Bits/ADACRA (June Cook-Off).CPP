#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
   int t;

   cin>>t;

   while(t--)
   {
     char s[50];
     int n,count=0;

     //for(int i=0;i<50;i++)
     //cin>>s[i];

    gets(s);
    n=strlen(s);
     //for(n=0;s[n]!='\n';n++);
     
      for(int i=0;i<n-1;i++)
      if(s[i]=='U'&&s[i+1]!='U')
      count++;
      
      if(s[0]=='D'&&s[n-1]=='U')
      count++;

     cout<<count<<endl;
   }

return 0;
}
