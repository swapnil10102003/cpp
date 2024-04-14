/*
 Create a class named DISTANCE" with: feet and inches as data members. The class has the following member functions:
 a. To input distance 
 b. To output distance
 c. To add two distance objects

Write a C++ program to create objects of DISTANCE class. Input two distances and output the sum.
*/
#include<iostream>
using namespace std;

class Distance
{
  float feet;
  float inches;

  public:
  void setfeet(float feet) 
  {
     this->feet = feet;
  }

  void setinches(float inches)
  {
    this->inches = inches;
  }

  float totalDistance() 
  {
     float FeetToinches = feet * 12;
    return FeetToinches+this->inches;
  }
};

int main()
{
   Distance distance;
  int feet, inches;
  cout<<"Enter the distance in feet:"<<endl;
  cin>>feet;
  distance.setfeet(feet);

  cout<<"Enter the distance in inches:"<<endl;
  cin>> inches;
  distance.setinches(inches);

  cout<<"The total distance in inches  is: "<<distance.totalDistance()<<endl;

  return 0;

}