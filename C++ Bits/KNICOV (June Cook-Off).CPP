#include<iostream>

using namespace std;

int main()
{
  int t;

  cin>>t;

  while(t--)
  {
    int n,m;

    cin>>n>>m;

    if(n==1)
    cout<<m<<endl;

    if(n==2)
    { /* if(m==1)
      cout<<"2"<<endl;
      else
      if(m>1&&m<6)
      cout<<"4"<<endl;
      else
      cout<<(m)/6*2+<<endl;*/
      
      int count=m/6*4;
      if((m%6<=2)&&(m%6!=0))
      count=count+(m%6)*2;
      else
      if((m%6)>2)
      count+=4;

	cout<<count<<endl;
}

    if(n==3)
{/*      if(m==1)
      cout<<"3"<<endl;
      else
      if(m>1&&m<6)
      cout<<"4"<<endl;
      else
      cout<<(m-4)*2<<endl;*/
      int count;
       if((m%6<=2)&&(m%6!=0))
      count=count+(m%6)*2;
      else
      if((m%6)>2)
      count+=4;

	cout<<count<<endl;
}
      

  }

return 0;
}
