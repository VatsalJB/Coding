/*
 Find the max product of remaining energy(divisible by B) and score on screen 1.This gives the combination.
 To save time, peak is near the halfway of energy!!!
*/
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  int t;

  scanf("%d",&t);

  while(t--)
  {
    long long int b,n,sc1,sc2,max,energy,temp;

    scanf("%lld",&n);
    scanf("%lld",&b);

    sc1=max=0;

    energy=n;
    n=n/2;
    n=n-n%b;
    max=n*(energy-n);
    
    temp=energy/2;
    temp=temp+b-temp%b;
    sc1=temp*(energy-temp);
    




    if(sc1<max)
    sc2=(energy-n)*n/b;
    else
    sc2=(energy-temp)*temp/b;

    printf("%lld\n",sc2);
  }

  return 0;
}
