/*
write a c++ program to create a class shape with functons to find area of the shapes and display the name
of the shape and other essential component of the class. Create derived classes circle, rectangle and trapezoid cach having overridden functions area and display. Write a suitable prograrn to illustrate virtual functions.
*/

#include<iostream>
#include<string>
using namespace std;

#define PI 3.14

class Shape
{
  string shape_name;

  public:
  Shape(string shape_name) : shape_name(shape_name) {}

 virtual void area()  
  {
      cout << "shape::area() called for " << shape_name << endl;
  } 

  virtual void display() 
  {
    cout << "shape::display() called for " << shape_name << endl;
  }

};

class Circle : public Shape
{
  private:
    float radius;

  public:
   Circle(string shape_name,float radius) : Shape(shape_name) ,radius(radius) {}

    void area()
   { float area = PI * radius * radius;
     cout << "Area of circle is :" << area << endl; 
   }

    void display() 
   {
     cout << "Circle::display() is called." << endl;
   }

};

class Rectangle : public Shape
{
  private:
   float breadth;
   float lenght;

  public:
   Rectangle(string shape_name, float breadth, float lenght) : Shape(shape_name), breadth(breadth), lenght(lenght) {}

    void area()
   {
    float area = 2 * (breadth + lenght);
    cout << "Area of rectangle is " << area << endl;
   }

    void display()
   {
    cout << "Rectangle::display() is called." << endl;
   }
};

int main()
{
 Circle c("circle",10);
 Rectangle r("rectangle",5.5,8.7);

 Shape s = c;

 s.area();
 s.display();

 Shape *shape_ptr = &c;
 
 shape_ptr->area();
 shape_ptr->display();

 shape_ptr = &r;

 shape_ptr->area();
 shape_ptr->display();

 

  return 0;
}

