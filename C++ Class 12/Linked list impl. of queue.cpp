#include<iostream.h>
#include<conio.h>

struct node
{
  int inf;
  static int index=-1;
  node* next;
};


node* create(int i)
{
  node *ptr = new node;
  ptr->inf=i;
  ptr->next=NULL;

  return ptr;
}


node* insert(node* front,node* end)
{
  int j;

  cout<<"\nEnter the element to be inserted : ";
  cin>>j;

  if(front==NULL)
  {
    node* ptr=create(j);

    end=ptr;
    ptr->index++;

    cout<<"\nInsertion successful.\n";
  }
  else
  {
    node *ptr = create(j);
    end->next=ptr;
    end=ptr;

    cout<<"\nInsertion successful.\n";
  }

  return end;
}


node *del(node *front,node* end)
{
  if(front==NULL)
  {
    cout<<"\nUnderflow !! Deletion failed.\n";
    front->index=-1;
  }
  else
  {
    node *temp=front;
    front=front->next;
    delete temp;

    if(front==end)
    front->index=0;

  }

  return front;
}


void display(node *front,node *end)
{
  cout<<"\nThe Queue is : \n";

  if(front==NULL)
  cout<<"\nQueue Empty.\n";
  else
  {
    int i=front->index;
    node *temp1=front;
    node *temp2=end;

    cout<<"\nFront -> ";

    for(;front;front=front->next,i++)
    cout<<front->inf<<" ";

    cout<<" <- End\n";

    cout<<"\nFront is "<<temp1->inf<<" at index "<<temp1->index<<".\n";
    cout<<"\nEnd is "<<temp2->inf<<" at index "<<i-1<<".\n";
   }

}


void main(){
node *front=NULL,*end=NULL;

for(int i=0;i!=4;)
{
  cout<<"\nChoose your operation : \n";
  cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\n";

  cin>>i;

  switch(i)
  {
    case 1 : end=insert(front,end);

             if(front==NULL)
             front=end;

             break;

    case 2 : front=del(front,end);

    			 break;

    case 3 : display(front,end);

    			 break;

    case 4 : cout<<"\nExiting...";

    			 break;

    default : cout<<"\nEnter a correct choice.";
   }
}

getch();
}