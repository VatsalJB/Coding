#include<iostream.h>
#include<conio.h>

void insert(int Q[],int &end,int &front)
{
  int j;

  cout<<"\nEnter the element to be inserted : ";
  cin>>j;

  if(end==4)
  cout<<"\nOverflow!! Insertion failed.\n";
  else
    if(end==-1)
    {
     end++;
     front++;
     Q[front]=j;

     cout<<"\nINsertion successful.\n";
    }
    else
    {
     end++;
     Q[end]=j;

     cout<<"\nInsertion successful.";
    }
}



void del(int Q[],int &front)
{
 if(front==5)
 cout<<"\nUnderflow !! Deletion failed.";
 else
 {
   front++;
   cout<<"\nDeletion successful.\n";
 }
}

void display(int Q[],int front,int end)
{
  cout<<"\nThe Queue is : \n";

  if(front==-1||front==5)
  cout<<"\nQueue Empty\n";
  else
  {
    cout<<"Front -> ";

    int i=front,j=end;

    for(;front<=end;front++)
    cout<<Q[front]<<" ";

    cout<<"<- End"<<endl;

    cout<<"\nFront = "<<Q[i]<<" at index "<<i<<endl;
    cout<<"\nEnd = "<<Q[j]<<" at index "<<j<<".\n";
  }
}



void main(){
int Queue[5],front=-1,end=-1;

for(int i=0;i!=4;)
{
  cout<<"\nChoose your operation : \n";
  cout<<"\n1.Insert\n2.Delete\n3.Display Queue\n4.Exit\n";
  cin>>i;

  switch(i)
  {
    case 1 : insert(Queue,end,front);

    			 break;

    case 2 : del(Queue,front);

    			 break;

    case 3 : display(Queue,front,end);

    			 break;

    case 4 : cout<<"\nExiting...";

    			 break;

    default : cout<<"\nEnter a correct choice.";
  }
}

getch();
}
