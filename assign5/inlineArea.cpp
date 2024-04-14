// Wirte a C++ program to print area of cicle, square and rectangle using inine function.

#include<iostream>
using namespace std;
#define PI 3.14

inline float circleArea(float r)
{
   return (r * r * PI);
}

inline float squareArea(float side)
{
  return (side * side );
}

inline float rectangleArea(float bre , float len )
{
  return (bre * len);
}

int main()
{
  float radius , side , breadth ,length ;

  cout << "Enter the  radius of circle: " << endl;
  cin >> radius;
  cout << "The area of the circle is " << circleArea(radius) << endl;

  cout << "Enter the side of the square: " << endl;
  cin >> side;
  cout << "The area of the square is " << squareArea(side) << endl;

  cout << "Enter the breadth and the length of the rectangle: " << endl;
  cin >> breadth >> length;
  cout << "The area of the rectangle is " << rectangleArea(breadth,length) << endl;
  return 0;
}