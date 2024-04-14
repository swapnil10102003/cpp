// Write a C++ program to create two classes Rectanglel and Rectangle2 Compare area of both the rectangles using friend function.

#include<iostream>
using namespace std;

class Rectangle2;

class Rectangle1
{
  float area1;
  public:
  float areaRect1(float bre, float len)
  {
    area1 = bre * len;
    return area1;
  }

  friend void compareArea(Rectangle1 rect1, Rectangle2 rect2);
};

class Rectangle2
{
  float area2;
  public:
  float areaRect2(float bre, float len)
  {
    area2 = bre * len;
    return area2;
  }

  friend void compareArea(Rectangle1 rect1, Rectangle2 rect2);
};

void compareArea(Rectangle1 rect1, Rectangle2 rect2)
{
  if(rect1.area1 == rect2.area2)
  {
    cout << "Area of 1st rectangle is equal to area of 2nd rectangle" << endl; 
  }
  else
  {
    cout << "Area of 1st rectangle is not equal to area of 2nd rectangle " << endl;
  }
}

int main()
{
  Rectangle1 rect1;
  Rectangle2 rect2;
   
 float breadth, length,breadth1, length1;
 cout << " Enter the breadth and length of the 1st rectangle: " << endl;
 cin >> breadth >> length ;
 cout << "Area of 1st rectangle is : " << rect1.areaRect1(breadth,length) << endl;

 cout << " Enter the breadth and length of the 2nd rectangle: " << endl;
 cin >> breadth1 >> length1 ;
 cout << "Area of 1st rectangle is : " << rect2.areaRect2(breadth1,length1) << endl;


 compareArea(rect1,rect2);
 return 0;
}
