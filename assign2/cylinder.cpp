/*
  Write the definition for a class called Cylinder that contains data member's radius and height. The class has the following member functions: 
  a. void setradius(float) to set the radius of data member.
  b. void setheight(float) to set the height of data member
  c. float volume() to calculate and return the volume of the cylinder
  d. float area() to calculate and return the area of the cylinder.

Write a C++ program to create two cylinder objects and display each cylinder and its area and volume.

*/
#include<iostream>
using namespace std;

class Cylinder
{
  float radius;
  float height;

  public:
  void setRadius(float radius)
  {
    this->radius=radius;
  }

  void setHeight(float height)
  {
    this->height=height;
  }

  float volume()
  {
     return (3.14*(this->radius*this->radius)* this->height);
  }

  float area();
  
};

float Cylinder:: area()
  {
    return  (2*(3.14)*this->radius*(this->radius+this->height));
  }
int main()
{
  Cylinder cylin1;
  Cylinder cylin2;
  float radius1, radius2, height1, height2;

  cout<<"Enter the radus and height of first cylinder"<<endl;
  cin>>radius1>>height1;
   cylin1.setRadius(radius1);
   cylin1.setHeight(height1);
    
    cout<<"The area of first cylinder is: "<<cylin1.area()<<endl;
    cout<<"The volume of first cylinder is: "<<cylin1.volume()<<endl;

    cout<<"Enter the radus and height of second cylinder"<<endl;
  cin>>radius2>>height2;
   cylin2.setRadius(radius2);
   cylin2.setHeight(height2);
    
    cout<<"The area of second cylinder is: "<<cylin2.area()<<endl;
    cout<<"The volume of second cylinder is: "<<cylin2.volume()<<endl;

   cout<<"The volume of first cylinder is: "<<cylin1.volume()<<endl;

   
}
