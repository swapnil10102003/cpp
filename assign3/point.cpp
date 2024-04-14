/*
 Write the definition for a class called point" that has x & y as integer data members. Use copy constructor to copy one object to another. (Use Default and parameterized constructor to initialize the appropriate objects)
*/
#include<iostream>
using namespace std;

class Point
{
  int x;
  int y;

  public:
   Point(int x, int y)
   {
     this->x = x;
     this->y = y;
   }
   Point(Point &p)
   {
     this->x = p.x;
     this->y = p.y;
   }

   void display()
   {
    cout << this->x << " " << this->y << endl;
   }
};

int main()
{
  Point p1(10,20),p2(p1);
  cout << "original: ";
  p1.display();

  cout << endl << "copied: ";
  p2.display();

  return 0;
}