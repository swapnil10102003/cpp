/*
  Write a C++ program to create a class Mobile which contains data members as Mobile_Id Mobile_Name, Mobile_Price: Create and Initialize all values of Mobile object by using parameterized constructor. Display the values of Mobile object where Mobile_price should be right justified with a precision of two digits.
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Mobile
{
   string name;
   float price;

   public:
    Mobile(string name, float price)
    {
      this->name = name;
      this->price = price;
    }

    void display()
    {
      cout << right << "price :" << setprecision(2) << this->price << endl;
    }
};

int main()
{
  Mobile mob("samsung",756.9854f);
   Mobile mob1("redmi",75.94f);

  mob.display();
  mob1.display();

  return 0;
}