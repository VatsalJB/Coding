#include<iostream.h>
#include<conio.h>

class area
{

  float l,b;

  public :

  void area1(float l)
  {
    cout<<"\nThe area of the square is : "<<l*l;
  }

  void area1(float l,float b)
  {
   cout<<"\nThe area of the rectangle is : "<<l*b;
  }

  void c_area(float l)
  {
   cout<<"\nThe area of the circle is : "<<3.14*l*l;
  }

  void c_area(float l,float b)
  {
   cout<<"\nThe area of the cylinder is : "<<2*3.14*b*(b+l);
  }

  void menu()
  {
     int i,j=0;

 for(;j!=2;){
 cout<<"\n\nMENU\n\n";
 cout<<"1.Area of square\n2.Area of rectangle\n3.Area of circle\n4.Area of cylinder\n";
 cout<<"\nEnter your choice : ";
 cin>>i;

 switch(i){

 case 1 : cout<<"\nEnter the side of square : ";
          cin>>l;

          area1(l);

          break;

 case 2 : cout<<"\nEnter the length of the rectangle : ";
          cin>>l;
          cout<<"\nEnter the breadth of the rectangle : ";
          cin>>b;

          area1(l,b);

          break;

 case 3 : cout<<"\nEnter the radius of circle : ";
          cin>>l;

          c_area(l);

          break;

 case 4 :  cout<<"\nEnter the height of the cylinder : ";
           cin>>l;

           cout<<"\nEnter the radius of the cylinder : ";
           cin>>b;

           c_area(l,b);

           break;

 default : "\nEnter a correct choice";
 }

 cout<<"\nWant to enter more ?\n1.Yes\n2.No";
 cin>>j;
}

}

};

void main(){

area a;

a.menu();

getch();
}