/*
 Write a C++ program to create a class Number which contains two integer data members. Create and initialize the object by using default constructor, parameterized constructor. Write a member function to display maximum from given two numbers for all objects.
*/
#include<iostream>
using namespace std;
class Number
{
  int num1;
  int num2;

  public:
   Number()
   {
      num1 = 10;
      num2 = 45;
   }

   Number(int n1, int n2)
   {
    num1 = n1;
    num1 = n2;
   }

   void maximum()
   {
     int result = num1 > num2 ? num1 : num2;

     cout << "Maximum: " << result << endl;
   }
};

int main()
{
  Number n;
  Number no1(20,40);
   no1.maximum();

  n.maximum();

 
  return 0;
}