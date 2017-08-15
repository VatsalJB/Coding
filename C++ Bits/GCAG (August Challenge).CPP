#include<stdio.h>

int main()
{
  int t;

  scanf("%d",&t);

  while(t--)
  {
    int n,m,jobs=0,company=0;

    long long int minsal[1000],offsal[1000],maxoff[1000],duplicate[1000],sal=0;

    char qual[1001][1001];

    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++)
    scanf("%lld",&minsal[i]);

    for(int i=0;i<m;i++)
    scanf("%lld%lld",&offsal[i],&maxoff[i]);

    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      scanf(" %c",&qual[i][j]);

    for(int i=0;i<m;i++)
    duplicate[i]=maxoff[i];

    for(int i=0;i<n;i++)
    {
      int track=-1;
      long long int temp=0;

      for(int j=0;j<m;j++)
      {

         if(qual[i][j]=='1')
           if(maxoff[j])
             if(offsal[j]>=minsal[i])
                if(temp<=offsal[j])
                {
                  temp=offsal[j];
                  track=j;
                }

     //    qual[i]=qual[i]/10;
      }

      if(track!=-1)
      {
        sal+=offsal[track];
        maxoff[track]--;
        jobs++;
      }
    }

    for(int i=0;i<m;i++)
    if(duplicate[i]==maxoff[i])
    company++;

    printf("%d %lld %d\n",jobs,sal,company);

  }

  return 0;
}
