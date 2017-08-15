#include<iostream.h>
#include<conio.h>

void push(int A[],int &tp,int k,int &size)
{
  if(size==5)
  cout<<"\nOverflow !! Cannot insert more elements ";
  else
  {
    A[size]=k;
    tp=k;
    size++;
  }
}

void pop(int A[],int &tp,int &size)
{
   if(size==0)
   cout<<"\nUnderflow !! Popping failed. ";
   else
   {
     size--;

     if(size!=0)
     tp=A[size-1];
     else
     tp=0;

     cout<<"\nElement popped.";

   }
}


void display(int A[],int size,int tp)
{
  cout<<"\nThe stack is : \n";

  for(size--;size>=0;size--)
  {
    cout<<A[size];

    if(A[size]==tp)
    cout<<" <-";

    cout<<endl;
  }

  if(size<-1)
  cout<<"//empty//";
}



void main(){
int stack[5],size=0;
int top,elem;


for(char ch='y';(ch=='y'||ch=='Y')&&size<5;)
{
  cout<<"\nENter the element : ";
  cin>>elem;

  push(stack,top,elem,size);

  cout<<"\nWant to enter more ? : ";
  cin>>ch;
}


for(int j=0;j!=4;)
{
 cout<<"\nChoose your operation : \n";
 cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n\n";
 cin>>j;

 switch(j){

 case 1 : cout<<"\nEnter the element to be pushed : ";
 			 cin>>elem;
          push(stack,top,elem,size);

          break;

 case 2 : pop(stack,top,size);

 			 break;

 case 3 : display(stack,size,top);

         break;

 case 4 : cout<<"\nExiting...";

         break;

 default : cout<<"\nEnter a correct value.";
 }
}

getch();
}

