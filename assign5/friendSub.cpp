//  Write a C++ program to subtract two integer numbers of two different classes using friend function.

#include <iostream>
using namespace std;

class B;
class A 
{
   
   int numA ;
   public:
   A(int no)
   {
     numA = no; 
   }
   friend void subtract(A objA,B objB); // friend function declaration
};

class B
{
 int numB;

 public:
 B(int no)
 { 
  numB = no; 
 }

 friend void subtract(A objA,B objB); // friend function declaration
};

void subtract(A objA,B objB)
{
  int sub = objA.numA - objB.numB;
  cout << "The subtraction is " << sub << endl;
}

int main()
{
 int num1, num2;
 cout << "Enter the two numbers: " << endl;
 cin >> num1 >> num2 ; 

 A objA(num1);
 B objB(num2);

 subtract(objA,objB);

  return 0;
}