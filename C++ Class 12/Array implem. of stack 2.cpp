#include<iostream.h>
#include<conio.h>

void push(int A[],int &top, int ele)
{
  if(top==4)
  cout<<"\nOverflow !! Push failed.\n";
  else
  {
    top++;
    A[top]=ele;
    cout<<"\nPush successful.\n";
  }
}

void pop(int A[],int &top)
{
  if(top==-1)
  cout<<"\nUnderflow!! Pop failed.\n";
  else
  {
    top--;
    cout<<"\nPop successful.\n";
  }
}

void display(int A[],int top)
{
  if(top==-1)
  cout<<"\n//Stack Empty//\n";
  else
  {
    cout<<"\nThe stack is : \n\n";

    for(int i=top;i>=0;i--)
    {
      cout<<A[i];

      if(i==top)
      cout<<" <-";

      cout<<endl;
    }
  }
}

void disp_top(int A[],int top)
{
  cout<<"\nThe top element is : "<<A[top];
  cout<<"\nIndex of top element is : "<<top<<endl;
}


void main(){
int stack[5],elem,top=-1;

for(int j=0;j!=5;)
{
 cout<<"\nChoose your operation : \n";
 cout<<"\n1.Push\n2.Pop\n3.Display Stack\n4.Display Top\n5.Exit\n\n";
 cin>>j;

 switch(j){

 case 1 : cout<<"\nEnter the element to be pushed : ";
 			 cin>>elem;
          push(stack,top,elem);

          break;

 case 2 : pop(stack,top);

 			 break;

 case 3 : display(stack,top);

          break;

 case 4 : disp_top(stack,top);

          break;

 case 5 : cout<<"\nExiting...";

          break;

 default : cout<<"\nEnter a correct value.";
 }
}

getch();
}

